#include <stdio.h>
#include <stdlib.h>


// kendisinden sonra gelen b�t�n elemanla kar��la�t�r en kucuk elemanla yer deg�s�t�r�r
// 1 elemanda �al��maya ba�lar ve kend�s�nden sonra gelen tum elemanlar kars�last�r�r
//position 5 4 3 1 2
//after swap 1 4 3 5 2
//bir sonraki sat�rda 2 elemanda ba�la
//after swap 1 2 3 5 4
//3 elemana konumlan
// after swap 1 2 3 5 4
//4 elemana konumlan
//after swap 1 2 3 4
// 0n2 karmas�kl�g�

void selection(int dizi[],int n)
{
    int i,j,min,gecici;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if(dizi[j]<dizi[min])
                min=j;

        }
        gecici=dizi[min];
        dizi[min]=dizi[i];
        dizi[i]=gecici;
        printf("%d",dizi[i]);
    }
}

int main()
{

}
