import java.util.Scanner;

public class fluxonator {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        Integer qtdTestes = Integer.parseInt(entrada.nextLine());

        for (Integer i = 1; i <= qtdTestes; i++){
            String eletrons = entrada.nextLine();
            String[] saidaEletrons =  new String[eletrons.length()];

            Integer l1 = 0;
            Integer l2 = 0;
            Integer l3 = 0;

            for (Integer j = 0; j < eletrons.length(); j ++){
                if(eletrons.charAt(j) == 'A'){
                    if(l1 == 0){
                        saidaEletrons[j] = "D";
                        l1 = 1;
                    } else {
                        l1 = 0;
                        if(l2 == 0){
                            saidaEletrons[j] = "D";
                            l2 = 1;
                        } else{
                            saidaEletrons[j] = "E";
                            l2 = 0;
                        }
                    }
                } else if(eletrons.charAt(j) == 'C'){
                    if(l3 == 1){
                        saidaEletrons[j] = "E";
                        l3 = 0;
                    } else {
                        l3 = 1;
                        if(l2 == 0){
                            saidaEletrons[j] = "D";
                            l2 = 1;
                        } else{
                            saidaEletrons[j] = "E";
                            l2 = 0;
                        }
                    }
                } else if(eletrons.charAt(j) == 'B'){
                    if(l2 == 0){
                        saidaEletrons[j] = "D";
                        l2 = 1;
                    } else{
                        saidaEletrons[j] = "E";
                        l2 = 0;
                    }
                }
            }
            for (int k = 0; k < saidaEletrons.length; k ++){
                System.out.print(saidaEletrons[k]);
            }
            System.out.println();
        }

        entrada.close();
    }
}
