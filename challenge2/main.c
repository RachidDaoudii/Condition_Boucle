#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char v[5]="aeoui";
    char c;
    printf("donner un caractere :");
    scanf("%c",&c);
    switch(c ){
    case 'a': case 'e': case 'u': case 'i': case 'o':
        printf("caractere est voyelle");
        break;
    default:
        printf("caractere est consone");
        break;
    }
    return 0;
}
