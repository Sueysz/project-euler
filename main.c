#include <stdio.h>
#include <stdlib.h>

void main()
{
//je veux une variable qui s'appel R dedans il y � 3+3
//cr�ation de e la somme de tous les modulos
    int i = 0;
    int e = 0;
//je veux une restriction qui vas jusqu'� 1000 en utilisant R
    while (i < 1000)
    {
        i = i + 1;
        if (i % 3 == 0 || i % 5 == 0) {
            e=e+i;

        }
    }
        printf("%d\n", e);

}
