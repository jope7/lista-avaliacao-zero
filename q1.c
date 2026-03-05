#include<stdio.h>

int main(void)
{

    int num;
    printf("Digite um número positivo inteiro: ");
    scanf("%d", &num);

    if (num >= 1) {
        for (int i = 1; i <= num; i++)
        {
            printf("%d; ", i);
        }
    } else {
        printf("O numero tem que ser inteiro e positivo!\n");
    }

    return 0;
}