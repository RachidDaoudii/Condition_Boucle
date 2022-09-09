#include<stdio.h>
#include<stdlib.h>

int main(){
    float largeur,longueur,P,S;
    printf("donner la largeur :\n");
    scanf("%f",&largeur);
    printf("donner la longueur :\n");
    scanf("%f",&longueur);
    P = (largeur + longueur)*2;
    S = largeur + longueur;
    printf("le perimetr et :%f \n",P);
    printf("la surface et :%f \n",S);
}
