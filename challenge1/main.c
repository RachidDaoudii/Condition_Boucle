#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf("Donner un nombre : ");
    scanf("%d",&nbr);
    if(nbr%2==0)
        printf("nombre est paire");
    else
        printf("nombre est impaire");
    return 0;
}
