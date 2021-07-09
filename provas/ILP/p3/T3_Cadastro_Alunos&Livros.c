/* Situação problema: A biblioteca de uma escola estava tendo dificuldades em organizar os
diversos livros que ela possuía, além de controlar os alunos que a frequentavam, então, foi
proposta a criação de um sistema que permita o cadastro de livros e alunos e a sua consulta
posterior. As consultas devem ter uma opção de gerar relatório, onde exportarão seu resultado
para um arquivo de texto. */

// Includes
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

// Constantes
#define tamAluno 200
#define tamLivro 200
#define arquivoAlunos "alunos.dat"
#define arquivoLivros "livros.dat"
#define arqLista

// Structs
typedef struct {
	int dia, mes, ano;
} data;

typedef struct {
    int codigo;
    char nome[30];
    char endereco[50];
	char ra[15];
	char contato[12];
	char email[50];
} aluno;

typedef struct {
    int codigo;
	char titulo[30];
	char genero[15];
    char autor[30];
    data data_lanc;
} livro;

// Prototipos das funções
void cadastraAluno(void);
void cadastraLivro(void);  
void consultaAlunos(void); 
void consultaAlunoNome(void); 
void consultaAlunoRA(void); 
void consultaLivros(void); 
void consultaLivroCodigo(void); 
void consultaLivroTitulo(void);
int validarEmail(char email[50]);
int validarTamanhoTexto(char texto[50], int maximo);

main() {
    int opc;

	do {
		// Exibe o menu inicial
    	system("cls");
		printf("------------------------------------------\n");
		printf("\tESCOLHA UMA DAS OPCOES\n");
		printf("------------------------------------------\n");
		printf("1- Cadastrar Alunos\n");
		printf("2- Cadastrar Livros\n");
		printf("3- Mostrar todos os Alunos Cadastrados\n");
    	printf("4- Consultar Alunos por Nome\n");
		printf("5- Consultar Alunos por RA\n");
		printf("6- Mostrar todos os Livros Cadastrados\n");
		printf("7- Consultar Livros por Codigo\n");
		printf("8- Consultar Livros por Titulo\n");
		printf("0- Sair do programa\n");
		printf("------------------------------------------\n");

		// Recupera a opcao digitada
		printf("Escolha uma opcao: ");
		fflush(stdin);
		scanf("%d", &opc);

		// Com base na opcao, executa a função correspondente
		switch(opc) {
		    case 1:
				cadastraAluno();
		        break;
		    case 2:
				cadastraLivro();
				break;
		    case 3:
				consultaAlunos();
				break;
		    case 4:
				consultaAlunoNome();
				break;
		    case 5:
				consultaAlunoRA();
				break;
		    case 6:
				consultaLivros();
				break;
		    case 7:
				consultaLivroCodigo();
				break;
		    case 8:
				consultaLivroTitulo();
				break;
		    case 0:
				system("cls");
				break;
			default:
				// Exibe mensagem de erro
				printf("\n\033[31mOpcao invalida!\033[m\n\n");
				system("pause");
				break;
        }
	} while (opc != 0);
}

void cadastraAluno(void) {	
	FILE * arq;
	aluno x, aux;
    char entrada[51];
    int existeRA = 0, num = 0;

    do {
		// Cabeçalho da função
		system("cls");
		printf("------------------------------------------\n");
		printf("\tCadastro de Aluno\n");
		printf("------------------------------------------\n");

		// (fopen "a+b") Abre/cria o arquivo binário para escrever no seu final e ler seus dados
		// Valida também se foi possivel abrir/criar o arquivo corretamente
		if ((arq = fopen(arquivoAlunos, "a+b")) == NULL) {
			fprintf(stderr, "\n\033[31mImpossivel abrir o arquivo\033[m %s!\n", arquivoAlunos);
		}

		// (fseek) Define o indicador de posição para o final do arquivo
		fseek(arq, 0, SEEK_END);
		// (ftell) Recupera o valor do indicador de posição do arquivo
		// Recupera a quantidade de bytes que "aluno" ocupa na memoria
		// Calcula quantos alunos cabem no arquivo e com o resultado, define o novo código
		x.codigo = ftell(arq) / sizeof(aluno) + 1;
		printf("Codigo do aluno: %d\n", x.codigo);

		// Recupera o nome digitado
		printf("Nome: ");
		fflush(stdin);
		gets(x.nome);

		// Recupera o endereço digitado
		printf("Endereco: ");
		fflush(stdin);
		gets(x.endereco);

		// Valida o RA
		do {
			existeRA = 0;
			
			// Recupera o RA digitado
			printf("RA: ");
			fflush(stdin);
			gets(entrada);

			// (rewind) Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// (fread) Lê cada registro do arquivo por vez
			while (fread(&aux, sizeof(aluno), 1, arq) > 0) {
				// Verifica se já existe algum RA registrado igual ao RA de entrada
				if (strcmp(entrada, aux.ra) == 0) {
					existeRA = 1;
				}
			}

			// Caso já exista algum aluno com o mesmo RA
			if (existeRA) {
				// Retorna mensagem de erro e solicita entrada novamente
				printf("\033[31mEsse RA ja foi cadastrado!\033[m\n");
				printf("Digite outro ");
			} else {
				// Copia o RA de entrada para o aluno
				strcpy(x.ra, entrada);
			}
		} while (existeRA > 0);

		// Recupera o telefone digitado
		printf("Telefone: ");
		fflush(stdin);
		gets(entrada);

		// Valida o tamanho do telefone
		while (!validarTamanhoTexto(entrada, 11)) {
			// Retorna mensagem de erro e solicita a entrada novamente
			printf("\033[31mColoque no maximo 11 caracteres!\033[m\n");
			printf("Digite novamente o telefone: ");
			fflush(stdin);
			gets(entrada);
		}

		// Copia o telefone de entrada para o aluno
		strcpy(x.contato, entrada);

		// Recupera o email digitado
	    printf("E-mail: ");
		fflush(stdin);
		gets(entrada);

		// Valida se o email é valido
		while (!validarEmail(entrada))
		{
			// Retorna mensagem de erro e solicita a entrada novamente
			printf("\033[31mEmail invalido!\033[m\n");
			printf("Digite o e-mail novamente: ");
			fflush(stdin);
			gets(entrada);
		}

		// Copia o email de entrada para o aluno
		strcpy(x.email, entrada);

		// (fwrite) Adiciona uma nova cadeia de bytes, representando os dados desse aluno, no arquivo
		fwrite(&x, sizeof(aluno), 1, arq);
		// (fclose) Fecha o arquivo 
	    fclose(arq);

		// Recupera a opcao de continuar o cadastro
	    system("cls");
	    printf("\033[32mAluno cadastrado com sucesso!\033[m\n");
        printf("\nDeseja cadastrar outro aluno?\n1 - Sim\n2 - Nao\n");
 	    scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja cadastrar outro aluno?\n1 - Sim\n2 - Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}
	} while (num == 1);
}

void cadastraLivro(void) {
	FILE * arq;
	livro x;
	int num = 0;

	do {
		// Cabeçalho da função
		system("cls");
		printf("------------------------------------------\n");
		printf("\tCadastro de Livro\n");
		printf("------------------------------------------\n");

		// (fopen "ab") Abre/cria o arquivo binário para escrever no seu final e verifica se ele existe
		if ((arq = fopen(arquivoLivros, "ab")) == NULL) {
			fprintf(stderr, "\n\033[31mImpossivel abrir o arquivo\033[m %s!\n", arquivoLivros);
		}

		// Calcula qual será o codigo do livro
		fseek(arq, 0, SEEK_END);
		x.codigo = ftell(arq) / sizeof(livro) + 1;
		printf("Codigo: %d\n", x.codigo);

		// Recupera o titulo digitado
		printf("Titulo: ");
		fflush(stdin);
		gets(x.titulo);
		
		// Recupera o genero digitado
		printf("Genero: ");
		fflush(stdin);
		gets(x.genero);

		// Recupera o autor digitado
		printf("Autor: ");
		fflush(stdin);
		gets(x.autor);

		// Recupera por "partes" a data digitada
		printf("Data do lancamento (ddmmaaaa): ");
		fflush(stdin);
		scanf("%02d %02d %4d", &x.data_lanc.dia, &x.data_lanc.mes, &x.data_lanc.ano);

		// Adicionas os dados no arquivo e o fecha
		fwrite(&x, sizeof(livro), 1, arq);
		fclose(arq);

		// Recupera a opcao de continuar o cadastro
		system("cls");
		printf("\033[32mLivro cadastrado com sucesso!\033[m\n");
		printf("\nDeseja cadastrar outro livro?\n1 - Sim\n2 - Nao\n");
 	    scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja cadastrar outro livro?\n1 - Sim\n2 - Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}
	} while (num == 1);
}

void consultaAlunos(void) {
	FILE * arq;
	FILE * arq2;
	int num = 0;
	aluno c;

	system("cls");

	// (fopen "rb") Abre o arquivo binário para leitura e verificando se ele existe
	if ((arq = fopen(arquivoAlunos, "rb")) == NULL) {
        system("cls");
		fprintf(stderr, "\033[33mNao existe nenhum aluno cadastrado!\033[m\n\n");
        system("pause");
		return;
	}

	// Cabeçalho da tabela
	printf("===========================================================================================\n");
	printf("%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
	printf("\n===========================================================================================\n");

	// Lê cada registro e exibe seus dados
	while (fread(&c, sizeof(aluno), 1, arq) > 0) {
		printf("%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
		printf("\n-------------------------------------------------------------------------------------------\n");
	}

	// Recupera a opcao de gerar relatorio
    printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
    scanf("%d", &num);

	// Valida a opcao escolhida
    while (num < 1 || num > 2) {
		// Retorna mensagem de erro e solicita a entrada novamente
	  	system("cls");
	    printf("\033[31mOpcao invalida!\033[m\n");
        printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		fflush(stdin);
        scanf("%d", &num);
    }

	// Caso opcao escolhida seja de gerar relatorio
    if (num == 1) {
		// (fopen "w") Cria ou reseta o arquivo de texto para realizar a escrita de dados
		if ((arq2 = fopen(arqLista"TodosAlunos.txt", "w")) == NULL) {
			system("cls");
			fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"TodosAlunos.txt");
			system("pause");
			return;
		}

		// (fprintf) Imprime os textos (cadeia de caracteres) no arquivo
		fprintf(arq2,"Todos os alunos cadastrados\n");
		fprintf(arq2, "\n===========================================================================================\n");
		fprintf(arq2, "%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
		fprintf(arq2, "\n===========================================================================================\n");

		// Define o indicador de posição para o inicio do arquivo
		rewind(arq);

		// Lê cada registro e imprime seus dados no arquivo de texto
      	while (fread(&c, sizeof(aluno), 1, arq) > 0) {
			fprintf(arq2, "%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
			fprintf(arq2, "\n-------------------------------------------------------------------------------------------\n");
        }

		// Fecha o arquivo de texto
		fclose(arq2);

        system("cls");
		printf("\033[32mRelatorio gerado com sucesso!\033[m\n\n");
		system("pause");
   	}

	// Fecha o arquivo binário
	fclose(arq);
}

void consultaAlunoNome(void) {
	FILE * arq;
	FILE * arq2;
	aluno c;
	int num = 0, num2 = 0, i = 0, j = 0, achei;
	char nome[50];

	// Enquanto continuar a pesquisa
	do {

		// Abre o arquivo para leitura e verificando se ele existe
		if ((arq = fopen(arquivoAlunos, "rb")) == NULL) {
			system("cls");
			fprintf(stderr, "\033[33mNao existe nenhum aluno cadastrado!\033[m\n\n");
			system("pause");
			return;
		}

		achei = 0;
		
		// Enquanto não achar o nome procurado
	    do {
			// Cabeçalho da função
			system("cls");
			printf("------------------------------------------\n");
			printf("\tPesquisa de alunos por nome\n");
			printf("------------------------------------------\n");

			// Recupera o nome digitado
			printf("Nome do aluno: ");
			scanf(" %50[^\n]", nome);
			rewind(arq);

			// Cabeçalho da tabela
			printf("\n===========================================================================================\n");
			printf("%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
			printf("\n===========================================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(aluno), 1, arq) > 0) {
				// Percorre os char do nome pesquisado e substitui por o char em maiúsculo
				for (i = 0; i < (strlen(nome)); i++) {
					nome[i] = toupper(nome[i]);

					// Percorre os char do nome registrado e substitui por o char em maiúsculo
					for(j = 0; j < (strlen(c.nome)); j++) {
						c.nome[j] = toupper(c.nome[j]);
					}
				}

				// Caso o nome registrado possua parte, ou todo, o nome pesquisado exibe o registro completo 
				if (strncmp(nome, c.nome, strlen(nome)) == 0) {
					printf("%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
					printf("\n-------------------------------------------------------------------------------------------\n");
					achei = 1;
				}
			}

			// Caso não tenha achado nenhum registro retorna mensagem de erro
		    if (!achei) {
				printf("\n\033[31mNao existe aluno cadastrado com o nome:\033[m %s\n\n", nome);
				system("pause");
			}
		} while (!achei);

		// Recupera a opcao de gerar relatorio
		printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}

		// Caso opcao escolhida seja de gerar relatorio
		if (num == 1) {
			// Cria ou reseta o arquivo para escrever o relatório
			if ((arq2 = fopen(arqLista"PesquisaAlunoNome.txt", "w")) == NULL) {
				system("cls");
				fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"PesquisaAlunoNome.txt");
				system("pause");
				return;
			}

			// Imprime o cabeçalho da tabela no arquivo
	        fprintf(arq2,"Pesquisa de alunos com o nome: %s\n", nome);
			fprintf(arq2, "\n===========================================================================================\n");
			fprintf(arq2, "%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
			fprintf(arq2, "\n===========================================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(aluno), 1, arq) > 0) {
				// Percorre os char do nome pesquisado e substitui por o char em maiúsculo
				for (i=0;i< (strlen(nome));i++) {
					nome[i]=toupper(nome[i]);

					// Percorre os char do nome registrado e substitui por o char em maiúsculo
					for (j=0;j<(strlen(c.nome));j++) {
						c.nome[j]=toupper(c.nome[j]);
					}
				}

				// Caso o nome registrado possua parte, ou todo, o nome pesquisado exibe o registro completo 
				if (strncmp(nome,c.nome, strlen(nome)) == 0) {
					fprintf(arq2, "%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
					fprintf(arq2, "\n-------------------------------------------------------------------------------------------\n");
				}
			}

			// Fecha o arquivo de texto
			fclose(arq2);

			system("cls");
			printf("\033[32mRelatorio gerado com sucesso!\033[m\n\n");
			system("pause");
		}

		// Fecha o arquivo binário
	    fclose(arq);

		// Recupera a opcao de gerar outra pesquisa
	    system("cls");
		printf("Deseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
		scanf("%d", &num2);

		// Valida a opcao escolhida
		while (num2 < 1 || num2 > 2)
		{
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
		    printf("\033[31mOpcao invalida!\033[m\n");
            printf("\nDeseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
			fflush(stdin);
      		scanf("%d", &num2);
		}
	} while (num2 == 1);
}

void consultaAlunoRA(void) {
    FILE * arq;
    FILE * arq2;
    aluno c;
    int num = 0, num2 = 0, i = 0, j = 0, achei = 0;
    char RA[12];

	// Enquanto continuar a pesquisa
	do {
		// Abre o arquivo e verificando se ele existe
		if ((arq = fopen(arquivoAlunos, "rb")) == NULL) {
			system("cls");
			fprintf(stderr, "\033[33mNao existe nenhum aluno cadastrado!\033[m\n\n");
			system("pause");
			return;
		}

		achei = 0;

		// Enquanto não achar o RA procurado
	    do {
			// Cabeçalho da função
    		system("cls");
			printf("------------------------------------------\n");
			printf("\tPesquisa de alunos por RA\n");
			printf("------------------------------------------\n");

			// Recupera o RA digitado
			printf("RA do Aluno: ");
			fflush(stdin);
			gets(RA);

			// Cabeçalho da tabela
	        printf("\n===========================================================================================\n");
			printf("%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
			printf("\n===========================================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(aluno), 1, arq) > 0) {
				// Percorre os char do RA pesquisado e substitui por o char em maiúsculo
                for (i = 0; i < (strlen(RA)); i++) {
                    RA[i] = toupper(RA[i]);

					// Percorre os char do RA registrado e substitui por o char em maiúsculo
                    for(j = 0 ; j < (strlen(c.ra)); j++) {
                        c.ra[j] = toupper(c.ra[j]);
                    }
                }

				// Caso o RA registrado seja igual ao RA pesquisado, exibe o registro completo 
                if (strcmp(RA, c.ra) == 0) {
                    printf("%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
					printf("\n-------------------------------------------------------------------------------------------\n");
                    achei = 1;
                }
			}

			// Caso não tenha achado nenhum registro retorna mensagem de erro
		    if (!achei) {
                printf("\n\033[31mNao existe aluno cadastrado com o RA:\033[m %s\n\n", RA);
				system("pause");
			}
		} while (!achei);

		// Recupera a opcao de gerar relatorio
	    printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}

		// Caso opcao escolhida seja de gerar relatorio
		if (num == 1) {
			// Cria ou reseta o arquivo para escrever o relatório
			if ((arq2 = fopen(arqLista"PesquisaAlunoRA.txt", "w")) == NULL) {
				system("cls");
				fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"PesquisaAlunoRA.txt");
				system("pause");
				return;
			}

			// Imprime o cabeçalho da tabela no arquivo
	        fprintf(arq2,"Pesquisa de alunos com o RA: %s\n", RA);
			fprintf(arq2, "\n===========================================================================================\n");
			fprintf(arq2, "%-4.4s  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", "Cod.", "Nome", "Endereco", "RA", "Contato", "E-mail");
			fprintf(arq2, "\n===========================================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(aluno), 1, arq) > 0) {
				// Percorre os char do RA pesquisado e substitui por o char em maiúsculo
				for (i = 0; i < (strlen(RA)); i++) {
					RA[i] = toupper(RA[i]);

					// Percorre os char do RA registrado e substitui por o char em maiúsculo
					for (j = 0; j < (strlen(c.ra)); j++) {
						c.ra[j] = toupper(c.ra[j]);
					}
				}

				// Caso o RA registrado seja igual ao RA pesquisado, exibe o registro completo 
				if (strcmp(RA, c.ra) == 0) {
					fprintf(arq2, "%-4.4d  %-15.15s  %-20.20s  %-10.10s  %-11.11s  %-20.20s", c.codigo, c.nome, c.endereco, c.ra, c.contato, c.email);
					fprintf(arq2, "\n-------------------------------------------------------------------------------------------\n");
				}
			}

			// Fecha o arquivo de texto
			fclose(arq2);

			system("cls");
			printf("\n\033[32mRelatorio gerado com sucesso!\033[m\n\n");
			system("pause");
		}

		// Fecha o arquivo binário
	    fclose(arq);

		// Recupera a opcao de gerar outra pesquisa
	    system("cls");
		printf("Deseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
		scanf("%d", &num2);
		
		// Valida a opcao escolhida
		while (num2 < 1 || num2 > 2)
		{
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
		    printf("\033[31mOpcao invalida!\033[m\n");
            printf("\nDeseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
			fflush(stdin);
      		scanf("%d", &num2);
		}
	} while (num2 == 1);
}

void consultaLivros(void) {
    FILE * arq;
    FILE * arq2;
    int num = 0;
    livro c;

	system("cls");

	// Abre o arquivo e verificando se ele existe
	if ((arq = fopen(arquivoLivros, "rb")) == NULL) {
		system("cls");
		fprintf(stderr, "\033[33mNao existe nenhum livro cadastrado!\033[m\n\n");
        system("pause");
		return;
	}

	// Cabeçalho da tabela
	printf("========================================================================\n");
	printf("%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
	printf("\n========================================================================\n");

	// Lê cada registro e exibe seus dados
	while (fread(&c, sizeof(livro), 1, arq) > 0) {
        printf("%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        printf("\n------------------------------------------------------------------------\n");
	}

	// Recupera a opcao de gerar relatorio
    printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
	scanf("%d", &num);

	// Valida a opcao escolhida
	while (num < 1 || num > 2) {
		// Retorna mensagem de erro e solicita a entrada novamente
		system("cls");
		printf("\033[31mOpcao invalida!\033[m\n");
		printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		fflush(stdin);
		scanf("%d", &num);
	}

	// Caso opcao escolhida seja de gerar relatorio
	if (num == 1) {
		// Cria ou reseta o arquivo para escrever o relatório
		if ((arq2 = fopen(arqLista"TodosLivros.txt", "w")) == NULL) {
			system("cls");
			fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"TodosLivros.txt");
			system("pause");
			return;
		}

		// Imprime o cabeçalho da tabela no arquivo
		fprintf(arq2, "Todos os livros cadastrados\n");
		fprintf(arq2, "\n========================================================================\n");
		fprintf(arq2, "%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
		fprintf(arq2, "\n========================================================================\n");

		// Define o indicador de posição para o inicio do arquivo
		rewind(arq);

		// Lê cada registro e imprime seus dados no arquivo
        while (fread(&c, sizeof(livro), 1, arq) > 0) {
            fprintf(arq2, "%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        	fprintf(arq2, "\n------------------------------------------------------------------------\n");
        }

		// Fecha o arquivo de texto
		fclose(arq2);

        system("cls");
        printf("\033[32mRelatorio gerado com sucesso!\033[m\n\n");
	    system("pause");
	}
    
	// Fecha o arquivo binário
	fclose(arq);
}

void consultaLivroCodigo(void) {
	FILE * arq;
	FILE * arq2;
	livro c;
	int codigo, num = 0, num2 = 0, achei = 0, i = 0, j = 0;

	// Enquanto continuar a pesquisa
	do{
		// Abre o arquivo e verificando se ele existe
        if ((arq = fopen(arquivoLivros, "rb")) == NULL) {
			system("cls");
			fprintf(stderr, "\033[33mNao existe nenhum livro cadastrado!\033[m\n\n");
			system("pause");
			return;
		}

		achei = 0;

		// Enquanto não achar o codigo procurado
        do {
			// Cabeçalho da função
			system("cls");
			printf("------------------------------------------\n");
			printf("\tPesquisa de livros por codigo\n");
			printf("------------------------------------------\n");

			// Recupera o codigo digitado
			printf("Codigo do Livro: ");
			fflush(stdin);
			scanf("%d", &codigo);

			// Cabeçalho da tabela
			printf("\n========================================================================\n");
			printf("%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
			printf("\n========================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(livro), 1, arq) > 0) {
				// Caso o codigo pesquisado seja igual ao codigo de registro, exibe o registro completo
				if (codigo == c.codigo) {
		 			printf("%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        			printf("\n------------------------------------------------------------------------\n");
                    achei = 1;
				}
			}

			// Caso não tenha achado nenhum registro retorna mensagem de erro
		    if (!achei) {
                printf("\n\033[31mNao existe livro cadastrado com o codigo:\033[m %d\n\n", codigo);
				system("pause");
			}
		} while (!achei);

		// Recupera a opcao de gerar relatorio
		printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}

		// Caso opcao escolhida seja de gerar relatorio
		if (num == 1) {
			// Cria ou reseta o arquivo para escrever o relatório
			if ((arq2 = fopen(arqLista"ConsultaLivrosCod.txt", "w")) == NULL) {
				system("cls");
				fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"ConsultaLivrosCod.txt");
				system("pause");
				return;
			}

			// Imprime o cabeçalho da tabela no arquivo
			fprintf(arq2, "Pesquisa de livros pelo codigo: %d\n", codigo);
			fprintf(arq2, "\n========================================================================\n");
			fprintf(arq2, "%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
			fprintf(arq2, "\n========================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(livro), 1, arq) > 0) {
				// Caso o codigo pesquisado seja igual ao codigo de registro, exibe o registro completo
				if (c.codigo == codigo) {
					fprintf(arq2,"%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        			fprintf(arq2,"\n------------------------------------------------------------------------\n");
				}
			}

			// Fecha o arquivo de texto
			fclose(arq2);
			
			system("cls");
			printf("\033[32mRelatorio gerado com sucesso!\033[m\n\n");
			system("pause");
		}
	
		// Fecha o arquivo binário
	    fclose(arq);

		// Recupera a opcao de gerar outra pesquisa
		system("cls");
		printf("Deseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
		scanf("%d", &num2);

		// Valida a opcao escolhida
		while (num2 < 1 || num2 > 2)
		{
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
		    printf("\033[31mOpcao invalida!\033[m\n");
            printf("\nDeseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
			fflush(stdin);
      		scanf("%d", &num2);
		}
	} while (num2 == 1);
}

void consultaLivroTitulo(void) {
	FILE * arq;
	FILE * arq2;
	livro c;
	int num = 0, num2 = 0, i = 0, j = 0, achei = 0;
	char titulo[50];

	// Enquanto continuar a pesquisa
	do {
		// Abre o arquivo e verificando se ele existe
		if ((arq = fopen(arquivoLivros, "rb")) == NULL) {
			system("cls");
			fprintf(stderr, "\033[33mNao existe nenhum livro cadastrado!\033[m\n\n");
			system("pause");
			return;
		}

		achei = 0;
		
		// Enquanto não achar o codigo procurado
	    do {
			// Cabeçalho da função
			system("cls");
			printf("------------------------------------------\n");
			printf("\tPesquisa de livros por Titulo\n");
			printf("------------------------------------------\n");

			// Recupera o titulo digitado
			printf("Nome do Livro: ");
			fflush(stdin);
			scanf(" %50[^\n]", titulo);

			// Cabeçalho da tabela
			printf("\n========================================================================\n");
			printf("%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
			printf("\n========================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(livro), 1, arq) > 0) {
				// Percorre os char do titulo pesquisado e substitui por o char em maiúsculo
				for (i = 0; i < (strlen(titulo)); i++) {
					titulo[i] = toupper(titulo[i]);

					// Percorre os char do titulo registrado e substitui por o char em maiúsculo
					for (j = 0; j < (strlen(c.titulo)); j++) {
						c.titulo[j] = toupper(c.titulo[j]);
					}
				}

				// Caso o titulo registrado possua parte, ou todo, o titulo pesquisado exibe o registro completo 
				if (strncmp(titulo, c.titulo, strlen(titulo)) == 0) {
					printf("%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        			printf("\n------------------------------------------------------------------------\n");
					achei = 1;
				}
			}

			// Caso não tenha achado nenhum registro retorna mensagem de erro
		    if (!achei) {
				printf("\n\033[31mNao existe livro cadastrado com o titulo:\033[m %s\n\n", titulo);
				system("pause");
			}
		} while (!achei);

		// Recupera a opcao de gerar relatorio
		printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
		scanf("%d", &num);

		// Valida a opcao escolhida
		while (num < 1 || num > 2) {
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
			printf("\033[31mOpcao invalida!\033[m\n");
			printf("\nDeseja gerar um relatorio?\n1- Sim\n2- Nao\n");
			fflush(stdin);
			scanf("%d", &num);
		}

		// Caso opcao escolhida seja de gerar relatorio
		if (num == 1) {
			// Cria ou reseta o arquivo para escrever o relatório
			if ((arq2 = fopen(arqLista"ConsultaLivroTitulo.txt", "w")) == NULL) {
				system("cls");
				fprintf(stderr, "\n\033[31mErro de abertura do arquivo\033[m %s!\n", arqLista"ConsultaLivroTitulo.txt");
				system("pause");
				return;
			}

			// Imprime o cabeçalho da tabela no arquivo
	        fprintf(arq2, "Pesquisa de livros pelo titulo: %s\n", titulo);
			fprintf(arq2, "\n========================================================================\n");
			fprintf(arq2, "%-4.4s  %-20.20s  %-15.15s  %-15.15s  %-10.10s", "Cod.", "Titulo", "Genero", "Autor", "Data Lanc.");
			fprintf(arq2, "\n========================================================================\n");

			// Define o indicador de posição para o inicio do arquivo
			rewind(arq);

			// Lê cada registro
			while (fread(&c, sizeof(livro), 1, arq) > 0) {
				// Percorre os char do titulo pesquisado e substitui por o char em maiúsculo
				for (i = 0; i < (strlen(titulo)); i++) {
					titulo[i] = toupper(titulo[i]);

					// Percorre os char do titulo registrado e substitui por o char em maiúsculo
					for (j = 0; j < (strlen(c.titulo)); j++) {
						c.titulo[j]=toupper(c.titulo[j]);
					}
				}

				// Caso o titulo registrado possua parte, ou todo, o titulo pesquisado exibe o registro completo 
				if (strncmp(titulo, c.titulo, strlen(titulo)) == 0) {
					fprintf(arq2, "%-4.4d  %-20.20s  %-15.15s  %-15.15s  %02d/%02d/%04d", c.codigo, c.titulo, c.genero, c.autor, c.data_lanc.dia, c.data_lanc.mes, c.data_lanc.ano);
        			fprintf(arq2, "\n------------------------------------------------------------------------\n");
				}
			}

			// Fecha o arquivo de texto
			fclose(arq2);
			
			system("cls");
			printf("\033[32mRelatorio gerado com sucesso!\033[m\n\n");
			system("pause");
		}

	    // Fecha o arquivo binário
	    fclose(arq);

		// Recupera a opcao de gerar outra pesquisa
	    system("cls");
		printf("Deseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
		scanf("%d", &num2);

		// Valida a opcao escolhida
		while (num2 < 1 || num2 > 2)
		{
			// Retorna mensagem de erro e solicita a entrada novamente
			system("cls");
		    printf("\033[31mOpcao invalida!\033[m\n\n");
            printf("\nDeseja realizar outra pesquisa?\n1- Sim\n2- Nao\n");
			fflush(stdin);
      		scanf("%d", &num2);
		}
	} while (num2 == 1);
}

int validarEmail(char email[51]) {
	char c;
  	int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i, tam;
	
	tam = strlen(email);

	for (i = 0; i < tam; i++) {
		c = email[i];

		if (c == '@') {
			// Caso tenha outro '@'
			if (arroba) break;

			arroba = 1;

			// Caso o nome tenha menos que 3 char
			if (i < 3) break; 
		}
		else if (arroba) { // Caso já tenha '@'
			// Caso ja tenha um '.'
			if (ponto) {
				depoisPonto++; 
			}
			else if (c == '.') { // Caso seja o primeiro '.'
				ponto = 1;

				// Caso dominio tenha menos que 3 char
				if (antesPonto < 3) break; 
			}
			else {
				antesPonto++;
			}
		}
	}

	// Caso tenha chegado no final e tenha no final algo como ".com" é válido
	if (i == tam && depoisPonto > 1) {
		return 1;
	} else {
		return 0;
	}
}

int validarTamanhoTexto(char texto[50], int maximo) {
	int length;

	length = strlen(texto);

	// Caso o tamanho do texto seja maior que o máximo
	if (length > maximo) {
		return 0;
	} else {
		return 1;
	}
}