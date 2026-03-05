#include<stdio.h>

int main(void)
{
    int num, fator;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    if (num == 0)
    {
        fator = 1;        
    } else if (num < 0)
    {
        printf("Digite um número inteiro não nulo!");
        return 1;
    } else {
        fator = 1;
        for (int i = 2; i < num+1; i++)
        {
            fator = fator * i;
        }
    }
    
    printf("%d", fator);
    return 0;
}