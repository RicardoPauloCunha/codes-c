import java.io.*;
import java.util.ArrayList;
public class industria {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String linha;
        try{
            while ((linha = br.readLine()) != null) {
                String[] n = linha.split(" ");
                Integer qtd =  Integer.parseInt(n[0]);
                Integer passo = Integer.parseInt(n[1]);

                if (qtd <= 1 || qtd >= 50000 || passo <= 1 || passo >= 5000){
                    System.exit(1);
                }

                Integer[] garrafas = new Integer[qtd];
                Integer contador = 1;
                Integer ultimaGarrafa = 0;
                Integer qtdGarrafasRetiradas = 0;
                
                for (Integer i = 0; i < qtd; i++){
                    garrafas[i] = 0;
                }

                while (qtdGarrafasRetiradas != qtd){
                    for (Integer i = 0; i < qtd; i++){

                        if(garrafas[i] != 1){
                            if(contador < passo){
                                contador++;
                            }else if(contador == passo){
                                garrafas[i] = 1;
                                contador = 1;
                                ultimaGarrafa = i + 1;
                                qtdGarrafasRetiradas ++;
                            }
                        }

                    }
                }

                System.out.println(ultimaGarrafa);
            }
        } catch(Exception e){
            System.out.println(e);
        }
        
    }
}
