#include <stdio.h>
#include <stdlib.h>

void shell(int dizi[],int n)
{
    int tut,artim,i,j;
    artim=n/2;
    while(artim!=0)
    {
        for(i=artim;i<n;i++)
        {
            tut=dizi[i];
            j=i-artim;
            while(j>=0 && tut<dizi[j])
            {
                dizi[j+artim]=dizi[j];
                dizi[j]=tut;
                j=j-artim;
            }
        }artim=artim/2;
    }
}



int main()
{
	int 	dizi[10]={1,3,7,9,6,54,540,5,57,359};
//	dizi[10]={1,3,7,9,6,54,540,5,57,359};
	shell(dizi,10);
}
