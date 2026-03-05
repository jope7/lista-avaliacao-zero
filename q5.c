#include<stdio.h>

int main(void)
{
    char texto[100];
    int cont = 0;

    printf("Digite: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] != '\n')
        {
            cont++;
        }
    }

    printf("Total de caracteres: %d", cont);

    return 0;
}