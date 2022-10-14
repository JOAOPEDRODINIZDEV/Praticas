#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil ");
    
    printf("Calculadora Do Troco\n\n");
    
    int resultado, resto , valor;
    
    printf("Valor insirido pelo cliente: :");
    scanf("%d", &valor);
    
    
     resultado=valor/7;
   
    
    printf ("O cliente vai receber quantos copos de café: %d \n", resultado);
    
    resto=(valor)%7;

    
    printf("O troco foi de: %d", resto);
    
    
    
    return 0;
};
