#include <stdio.h>
#include <stdlib.h>

int main()
{
int secim;
menu:printf("1)Gul\n");
printf("2)Papatya\n");
printf("3)Lale\n");
printf("4)Nergis\n");
printf("Lutfen seciminizi yapiniz\n");
scanf("%d",&secim);

switch (secim){
    case 1:
    printf("Gul cicegi, yazin haftada en az iki kere,kis aylarinda ise haftada bir kere saksi ustten sulanmalidir");
    break;
    case 2:
    printf("Haftada bir kez sulamak yeterli olacaktir");
    break;
    case 3:
    printf("Haftada iki kere saksi ustten sulanmalidir");
    break;
    case 4:
    printf("Topragi kurumayacak sekilde nemli tutulmalidir.3-4 gunde bir kontrol edilerek sulanir.");
    break;
    default:
    printf("yanlis secim yaptiniz.");
    goto menu;
    break;






}


    return 0;
}

