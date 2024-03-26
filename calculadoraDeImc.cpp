#include <iostream>

int main () {
    float a, b, c;
    printf("Me informe seu peso (em KG): ");
    scanf("%f", &a);
    printf("Me informe sua altura (em M): ");
    scanf("%f", &b);
    float conta = a/(b * b); 
    printf("O seu IMC é de %f \n", conta);
    
  

    return 0;
}