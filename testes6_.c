#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numero;
printf("digite um numero:");
scanf("%d", &numero);

 switch (numero % 2)
    {
    case 0:
        printf("%d e multiplo de 2.\n",numero);
        break;
    default:
        printf("%d nao e multiplo de 2.\n",numero);
    }
switch (numero % 3)
    {
    case 0:
        printf("%d e multiplo de 3.\n",numero);
        break;

    default:
        printf("%d nao e multiplo de 3.\n",numero);
    }
switch (numero % 5)
    {
    case 0:
        printf("%d e multiplo de 5.\n",numero);
        break;

    default:
        printf("%d nao e multiplo de 5.\n",numero);
    }

return 0;
}
