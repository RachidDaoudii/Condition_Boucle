#include <stdio.h>
#include <stdlib.h>

void Afficher_Menu(){

    printf("\n ** Distributeur de boissons ** ");
    printf("\n faites votre chiox et validez!!");
    printf("\n 1. Cafe noir................(30 DH)");
    printf("\n 2. Cafe au lait.............(25 DH)");
    printf("\n 3. The......................(20 DH)");
    printf("\n 4. Chocolat au lait.........(35 DH)");
    printf("\n 5. Cappuccino...............(40 DH)");
    printf("\n 0. Annuler");
}
void selectionner(int choix){
    switch(choix){
        case 1:
            printf("Vous avez choisi un cafe noir . Merci de pays 30 DH !!! \n");
            return 30;
            break;
        case 2:
            printf("Vous avez choisi un cafe au lait . Merci de pays 25 DH !!! \n");
            return 25;
            break;
        case 3:
            printf("Vous avez choisi un The . Merci de pays 20 DH !!! \n");
            return 20;
            break;
        case 4:
            printf("Vous avez choisi un Chocolat au lait . Merci de pays 35 DH !!! \n");
            return 35;
            break;
        case 5:
            printf("Vous avez choisi un Cappuccino . Merci de pays 40 DH !!! \n");
            return 40;
            break;
        default :
            printf("Vous avez rein choix");
            return 0;
            break;
    }
}
int payer(int choix,int prix){
    int total = 0,rendu= 0,piece = 0;
    while(total < prix){
        printf("Merci s'il vous plait enter une piece 5,10,20 ou 50 \n");
        scanf("%d",&piece);
        total += piece;
    }
    if(total > prix){
        rendu = total - prix;
    }
    return rendu;
}
void Afficher_rendu(int rendu){
    if(rendu >= 50){
        printf("\n %d piece de 50 DH ",rendu/50);
        rendu = rendu % 50;
    }
    if(rendu >= 20){
        printf("\n %d piece de 20 DH ",rendu/20);
        rendu = rendu % 20;
    }
    if(rendu >= 10){
        printf("\n %d piece de 10 DH ",rendu/10);
        rendu = rendu % 10;
    }
    if(rendu >= 5){
        printf("\n %d piece de 5 DH ",rendu/5);
        rendu = rendu % 5;
    }
}
int main(int argc,char argv[])
{
    int choix = -1,rendu = 0,prix = 0;


    while(choix != 0){
            Afficher_Menu();
            printf("\n selectionner votre choix!!! : ");
            scanf("%d",&choix);
            prix = selectionner(int choix);
            rendu payer(prix);
            Afficher_rendu(rendu);
    }
    return 0;
}
