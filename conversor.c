#include <stdio.h>
#include <stdlib.h>



float metrosParaCentimetro(float m){

    printf("\n\nInforme o valor em metros, cujo valor em centimetros deseja saber.\n");
    scanf("%f", &m);


    return (m * 100);
}


float metrosParaQuilometro(float m){

    printf("\n\nInforme o valor em metros, cujo valor em quilometros deseja saber.\n");
    scanf("%f", &m);


    return (m * 0.001);

}


float quilometrosParaMetros(float m){
    
    printf("\n\nInforme o valor em quilometros, cujo valor em metros deseja saber.\n");
    scanf("%f", &m);


    return (m * 1000);
}



float centimetrosParaMetros(float m){
    
    printf("\n\nInforme o valor em centimetros, cujo valor em metros deseja saber.\n");
    scanf("%f", &m);


    return (m * 0.01);
}




int main(){

    int op = 0;
    float valor = 0, convertido;

    
    do{

        printf("\n\n--Conversor de Distancia--\n1-Metros para Centimetros.\n2-Metros para Quilometros.\n3-Quilometros para Metros.\n4-Centimetros para Metros.\n5-Sair.\n");
        scanf("%d", &op);

        switch(op){

            case 1:
                
                convertido = metrosParaCentimetro(valor);
                printf("\nValor em Centimetros: %.2f cm\n\n\n", convertido);
                break;


            case 2:
                convertido = metrosParaQuilometro(valor);
                printf("\nValor em Quilometros: %.3f km\n\n\n", convertido); 
                break;


            case 3:
                convertido = quilometrosParaMetros(valor);
                printf("\nValor em Metros: %.2f m\n\n\n", convertido); 
                break;


            case 4:
                convertido = centimetrosParaMetros(valor);
                printf("\nValor em Metros: %.2f m\n\n\n", convertido); 
                break;

            default:
                if(op != 5){
                    printf("Opcao invalida.\n\n\n");
                }
                break;
                
            


        }


    }while(op != 5);
    printf("Programa Encerrado!\n\n");
    
    
   

    return 0;
}