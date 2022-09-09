#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mot1[100],mot2[100];
    int res;
    printf("Enter le premier mot :");
    scanf("%s",&mot1);
    printf("Enter la deuxeme mot :");
    scanf("%s",&mot2);
    res =strncmp(mot1,mot2,100);
    if (res<0 || res==0)
        printf("les mots ont les memes lettres");
    else
        printf("les mots non les memes lettres");


    return 0;
}
