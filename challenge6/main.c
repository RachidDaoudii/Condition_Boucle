#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mot1[4],mot2[4];
    int res;
    printf("Enter le premier mot :");
    scanf("%s",&mot1);
    printf("Enter la deuxeme mot :");
    scanf("%s",&mot2);
    res =strncmp(mot1,mot2,4);
    if (res==0 || res >0)
        printf("les mots ont les memes lettres");
    if(res <0)
        printf("les mots non les memes lettres \n");
    printf("%d",res);
        /*
        for(i=1;mot1[i]== mot2[i] && mot1[i]=='\0';i++){
            if(mot1[i]>mot2[i] && mot1[i]<mot2[i])
                printf("les mots non les memes lettres \n");
            else
                printf("les mots ont les memes lettres \n");
        }*/

    return 0;
}
