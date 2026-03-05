#include<stdio.h>

int main(void)
{
    int num;
    int cont_div = 0;

    printf("Digite um número (maior que 1): ");
    scanf("%d", &num);

    if (num > 1) {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0) {
                cont_div++;
            }
        }
        if (cont_div > 2) {
            printf("%d não é primo\n", num);
        } else if (cont_div == 2) {
            printf("%d é um número primo\n", num);
        }
    } else {
        printf("Não existem números primos menores que 2\n");
    }
} 