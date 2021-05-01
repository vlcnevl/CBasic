#include <stdio.h>
#include <stdlib.h>


// kendisinden sonra gelen bütün elemanla karþýlaþtýr en kucuk elemanla yer degýsýtýrýr
// 1 elemanda çalýþmaya baþlar ve kendýsýnden sonra gelen tum elemanlar karsýlastýrýr
//position 5 4 3 1 2
//after swap 1 4 3 5 2
//bir sonraki satýrda 2 elemanda baþla
//after swap 1 2 3 5 4
//3 elemana konumlan
// after swap 1 2 3 5 4
//4 elemana konumlan
//after swap 1 2 3 4
// 0n2 karmasýklýgý

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
