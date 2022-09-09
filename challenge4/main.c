#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int annee,choix;
    printf("donner la date : ");
    scanf("%d",&annee);
    printf("1. Mois \n");
    printf("2. jours \n");
    printf("3. Heures \n");
    printf("4. Minutes \n");
    printf("5. Secondes \n");
    printf("Enter le choix : ");
    scanf("%d",&choix);
    switch(choix){
    case 1:
        printf("Mois");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    default:
        printf("autre choix !!!");
    }
    return 0;
}
