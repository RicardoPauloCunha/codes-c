#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frase[10001];
int aparece = 0;

void swap(char *x, char *y)
{
    char ch = *x;
    *x = *y;
    *y = ch;
};

void permutate_(char *str, size_t index)
{
    size_t i = 0;
    size_t slen = strlen(str);
    char lastChar = 0;
    int l, j, k, a, igual = 0, tamFrase, tamPalavra;

    if (index == slen)
    {
        tamFrase = strlen(frase);
        tamPalavra = strlen(str);

        for (l = 0; l < tamFrase; l++)
        {
            if (frase[l] == str[0])
            {
                int a = l;
                for (j = 0; j < tamPalavra; j++)
                {
                    if (frase[a] == str[j])
                    {
                        igual++;
                        a++;
                    }
                    else
                    {
                        break;
                    }
                }

                if (igual == tamPalavra)
                {
                    aparece++;
                }

                igual = 0;
            }
        }
        return;
    }

    for (i = index; i < slen; i++)
    {
        if (lastChar == str[i])
            continue;
        else
            lastChar = str[i];

        swap(str + index, str + i);
        permutate_(str, index + 1);
        swap(str + index, str + i);
    }
}

static int cmpch(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

void permutate(char *str)
{
    qsort(str, strlen(str), sizeof(str[0]), cmpch);
    permutate_(str, 0);
}

int main()
{
    char palavra[10001];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        aparece = 0;
        fflush(stdin);
        gets(frase);
        fflush(stdin);
        gets(palavra);

        if (strlen(frase) < strlen(palavra))
        {
            printf("ERRO\n");
        }
        else
        {
            permutate(palavra);

            printf("%d\n", aparece);
        }
    }

    return 0;
}