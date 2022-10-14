#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil ");
    
    printf("Calculadora\n\n");
    
    
    int a,b,c;
    float f1, f2, f3, f4;
    
    printf("Coloque quantos minutos:");
    scanf("%d",&a);
    
    printf("Coloque valor b:");
    scanf("%d",&b);
    
    printf("Coloque valor c:");
    scanf("%d",&c);
    
    
    f1=(a*b)/c;
    f2=(a*a)+b+5*c;
    f3=a+b+c+b+c/3*5-1;
    f4=((a*b*c)*(a*b*c)*(a*b*c))/2;
    
    printf("O resultados foi: \n%.3f\n %.3f\n  %.3f\n %.3f\n", f1,f2, f3, f4);
    
    
    
    
    
    
    
    return 0;
};