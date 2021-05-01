#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Liste{
int numara;
struct Liste *sonraki;
}BListe;

BListe *ilk=NULL,*son=NULL;
void Ekle(BListe *bilgi){
BListe *gecici;
if(ilk==NULL)
    {
        ilk=bilgi;
        son=ilk;
        son->sonraki=NULL;
    }
    else
    {
        gecici=ilk;
        ilk=bilgi;
        ilk->sonraki=gecici;
    }
}
void Listele(){
    BListe *gecici;
    gecici=ilk;
    while(gecici)
    {
        printf("%d\n",gecici->numara);
        gecici=gecici->sonraki;
    }
    printf("***ListeSonu***\n");

}
void Silme(){
    BListe *gecici;
        gecici=ilk;
        ilk=gecici->sonraki;
        free(gecici);

}

int main(){
BListe *Bilgi;
char secim;
while (1==1)
{
    puts("\nEkleme: e\nListele : l\nSil: s\nCikis : c\n");
    secim=getch();
    switch(secim)
    {
    case 'e':
        {
            Bilgi=(BListe*)malloc(sizeof(BListe));
            if(Bilgi==NULL)
                break;
            printf("Sayiyi gir: ");
            scanf("%d",&Bilgi->numara);
            Ekle(Bilgi);
            break;
        }
    case 'l':
        {
            Listele();
            break;
        }
    case 'c':
        {
            return 0;
            break;
        }
    case 's':
        {
            Silme();
            break;
        }
    default:
        {
            printf("Hatali giris\n");
            break;
        }
    }
}

    return 0;
}
