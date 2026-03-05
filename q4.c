#include<stdio.h>

int main(void)
{
    int op = 0;
    double temp, conv;

    while (op != 3)
    {
        printf("Conversor\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n3. Sair\nEscolha: ");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%lf", &temp);
            conv = (temp * 9.0/5.0) + 32.0;
            printf("A temperatura %.2f °C em Fahrenheit é %.2f °F\n", temp, conv);
        } else if (op == 2)
        {
            printf("\nDigite a temperatura em Fahrenheit para Celsius: ");
            scanf("%lf", &temp);
            conv = (temp - 32.0) * 5.0/9.0;
            printf("A temperatura %.2f °F em Celsius é %.2f °C\n", temp, conv);
        } else
        {
            printf("Saindo...\n");
            break;
        }
    }
    
    return 0;
}