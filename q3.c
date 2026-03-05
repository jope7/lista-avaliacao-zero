#include<stdio.h>

int main(void)
{
    int nums[5];
    int tam = sizeof(nums) / sizeof(nums[0]);
    int soma = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o inteiro n. %d da array: ", i);
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    printf("A soma de todos os números da array é %d", soma);

    return 0;
}