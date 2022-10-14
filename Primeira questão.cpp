#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    
    printf("Calculadora\n\n");
    
    int minutos, segundos;
    
    printf("Digite a quantidade de minutos que você deseja converter:");
    scanf("%d", &minutos);
    
    
    segundos=minutos*60;
    
    printf("Resultado em segundos %d", segundos);
    
    
    
    
    
    
    return 0;
};