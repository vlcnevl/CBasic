#include <stdio.h>
#include <stdlib.h>

void bubble(int dizi[],int n)
{
int i,j,gecici;
for(i=0;i<n-1;i++)
{
    for(j=n-1;j<i;j--)
    {
        if(dizi[j]<dizi[j-1])
        {
            gecici=dizi[j-1];
            dizi[j-1]=dizi[j];
            dizi[j]=gecici;
        }
    }
}
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
