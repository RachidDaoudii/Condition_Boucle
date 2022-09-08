#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,s;
    printf("donner deux nombre : ");
    scanf("%f%f",&a,&b);
    s = a+b;
    if (a==b)
        printf("la somme est : %.2f",s*3);
    else
        printf("le somme est :%f",s);

    return 0;
}
