#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    
    printf("Calculadora\n\n");
    
    
    
    float base, altura, resultado;
    
    printf("Coloque o valor da Base:");
    scanf("%f",&base);
    
    printf("Coloque o valor da Altura:");
    scanf("%f",& altura);
    
    
    resultado=(base*altura)/2;
    
    printf("O Resultado foi: %.2f", resultado);
    
    
    
    
    
    
    
    return 0;
};