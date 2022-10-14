#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil ");
    
    printf("Calculadora Do IMC\n\n");
    
    float peso, altura, resultado ;
    
    printf("Coloque o valor do peso:");
    scanf("%f", &peso);
    
    printf("Coloque sua altura:");
    scanf("%f",&altura);
    
    
    resultado=peso/(altura*altura);
    
    
    printf ("Resultado do seu IMC é: %.2f", resultado);
    
    
    
    
    
    
    
    return 0;
};