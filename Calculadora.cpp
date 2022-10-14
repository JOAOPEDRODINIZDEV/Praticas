#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");
    
    printf("Calculadora\n\n");
    
    float valor1,valor2;
    float multplicacao,divisao,adicao,subtracao  ;
    
    printf("Digie um númmero:");
    scanf("%f",&valor1);
    
    printf("Digite um númmero:");
    scanf("%f",&valor2);
    
    multplicacao=valor1*valor2;
    
    divisao=valor1/valor2;
    
    adicao=valor1+valor2;
    
    subtracao=valor1-valor2;
    
    printf("Resultado é de: \n %.2f \n %.2f  \n %.2f \n %.2f ", multplicacao,divisao,adicao,subtracao);
    
                                                            
    
                                                                                               
               
    
    

    
    return 0;
};
