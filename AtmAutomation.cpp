/*
	VEL›CAN EVL›
	16010011030
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
/*
	musteri[0][0] -> m¸˛teri numarasi
	musteri[0][1] -> ˛ifre
	musteri[0][2] -> bakiye
	musteri[0][3] -> telefon numaras˝
*/
long int musteri[3][4]={{1560,1453,10000,543418},{1561,1454,500,543419},{1998,454,100000,543418}}; 
void kartsizislem();
int kartlislem(int a);
int altmenu(int a);
int hesapbilgileri(int a);
int parayatir(int a);
int paracekme(int a);
int paragonder(int a);
int odemeler(int a);
void dovizkur();

void anamenu()
{
	int secim;
		system("cls");
		printf("\n\n\t\t\tABC BANKA HOSGELDINIZ ");
	a: printf("\n\n\t1->Kartsiz Islemler\n\n\t2->Kartli Islemler\n\n\t3->Cikis\n\n\tSecim :"); scanf("%d",&secim);
	switch(secim)
	{
		case 1 : kartsizislem(); goto a; break;
		case 2 : kartlislem(0); goto a; break;
		case 3 : printf("\n\n\tBizi Tercih Ettiginiz Icin Tesekkur Ederiz."); exit(0); break;
		default :	system("cls"); printf("\n\n\tYanlis Giris Yapildi."); goto a;
	}
}
void kartsizislem()
{	
	int secim,x,y,hesapno,i=0,tutar;
	srand(time(NULL));
	x=rand()%30;
	y=rand()%12;
z:	system("cls");
	printf("\n\n\tKARTSIZ ISLEMLER\n\n\t");
	printf("\n\t\t1->Para Yatirma\n\t\t2->Para Gonderme\n\t\t3->Doviz Kurlari\n\t\t5->Geri\n\t\t6->Cikis\n\n\tSecim :");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1 :
	char secim;
	printf("\n\t\tLutfen Yatirmak Istediginiz Hesap Numarasini Giriniz :");	scanf("%d",&hesapno);
	printf("\n\t\tLutfen Yatirmak Istediginiz Tutari Giriniz :");	scanf("%d",&tutar);
	while(i<=3)
	{
		if(hesapno==musteri[i][0])
		{
			printf("\n\t\tPara Yatirilan Hesap Musterimiz Oldugundan Isleminizden Herhangi Bir Ucret Tahsil Edilmeyecektir.");
			musteri[i][0]+=tutar;
			printf("\n\t\t%d Nolu Hesaba %d TL Basari Ile Yatirildi.",hesapno,tutar);
	printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tYatirilan Hesap : %d\n\t\tYatirilan Tutar:%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",hesapno,tutar,x,y); getch(); altmenu(0); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); goto z;
	}

		}
		else
		{
				printf("\n\t\tPara Gonderilen Hesap Musterimiz Olmadigindan Isleminizden 5 tl Ucret Tahsil Edilecektir.");
				printf("\n\t\tIslem Basariyla Gerceklestirildi.");
				printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tYatirilan Hesap : %d\n\t\tYatirilan Tutar:%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",hesapno,tutar,x,y); getch(); goto z; 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); goto z;
	}

		}
		i++;
	}
	musteri[0][2]+=tutar;
	printf("\n\t\t%d TL %d Nolu Hesaba Basariyla Yatirildi .",tutar,hesapno);
	printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tYatirilan Tutar : %d\n\t\tYeni Bakiye:%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",hesapno,tutar,x,y); getch(); goto z; 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); goto z;
	}
	break; 
		case 2 :	printf("\n\t\tPara Gonderme\n\t\t Hesap Numarasi :"); scanf("%d",&hesapno);
	while(i<=3)
	{
		if(hesapno==musteri[i][0])
		{
			printf("\n\t\tPara Gonderilen Hesap Musterimiz Oldugundan Isleminizden Herhangi Bir Ucret Tahsil Edilmeyecektir.");
			printf("\n\t\tGonderilecek Tutar :"); scanf("%d",&tutar);
		
			musteri[i][2]+=tutar;
			 printf("\n\t\t%d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tGonderilen Hesap :%d\n\t\tGonderilen Tutar : %d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",hesapno,tutar,x,y); getch(); goto z; 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); goto z;
	}
		}
		else
		{
			printf("\n\t\tGonderilecek Tutar :"); scanf("%d",&tutar);
			printf("\n\t\t%d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tGonderilen Hesap :%d\n\t\tGonderilen Tutar : %d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",hesapno,tutar,x,y); getch(); goto z; 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); goto z;
	}
		}
	} break; 
		case 3 : dovizkur(); goto z ; break; 
		case 4 : system("cls"); anamenu(); break; 
		case 5 : printf("\n\t\tBizi Tercih Ettiginiz Icin Tesekkur Eder Iyi Gunler Dileriz !!"); exit(0); break;
		default :  system("cls"); printf("\n\n\t\tYanlis Giris Yapildi."); goto z;
	}
}
int kartlislem(int a)
{
	int mn,i=0,j=1,musteriNo,sifre,sayac=2,sayac1=2;
	system("cls");
	printf("\n\t\tKARTLI ISLEMLER");
	
	b:printf("\n\n\t\tLutfen Musteri Numaranizi Giriniz :"); scanf("%d",&musteriNo);
	
		while(i<3 || j<3)
	{
		
		while(sayac>0)
		{
		if(musteri[i][0]==musteriNo)
		{
			x :printf("\n\t\tSifreniz :"); scanf("%d",&sifre);
			while(sayac1>0)
			{
				if(musteri[i][1]==sifre)
				{
					altmenu(i); 
					return i;
					break;
				}
				else
				{
						printf("\n\t\tYanlis Sifre Girdiniz! Kalan Deneme Sayisi :%d",sayac1); getch(); system("cls");
										sayac1--;
										goto x;
				}
			}
			if(sayac1==0)
			printf("\n\t\t3 defa Yanlis Sifre Girisi Yaplidi .Lutfen Daha Sonra Tekrar Deneyiniz!!"); exit(0);
		}
		else if( musteri[j][0]==musteriNo)
		{
			c :printf("\n\t\tSifreniz :"); scanf("%d",&sifre);
			while(sayac1>0)
			{
				if(musteri[j][1]==sifre)
				{
					altmenu(j);
					return j;
					break;
				}
				else
				{
						printf("\n\t\tYanlis Sifre Girdiniz! Kalan Deneme Sayisi :%d",sayac1); getch(); system("cls");
										sayac1--;
										goto c;
				}
			}
			if(sayac1==0)
			printf("\n\t\t3 defa Yanlis Sifre Girisi Yaplidi .Lutfen Daha Sonra Tekrar Deneyiniz!!"); exit(0);
		}
		else
		{
			printf("Yanlis Musteri No Girisi ! Kalan Deneme sayisi %d",sayac);
			sayac--;
			goto b;
		}
			
		}
		printf("3 kere musteri numarasi yanlis girildi sonra dene"); exit(0);
		i++;
		j++;
	}	
}

int altmenu(int a)
{
	int secim;
	system("cls");
	printf("\n\t\tKartli Islemler\n");
	z:printf("\n\t\t1->Hesap Bilgilerini Goruntule\n\t\t2->Para Yatirma\n\t\t3->Para Cekme\n\t\t4->Para Gonderme\n\t\t5->Odemeler\n\t\t6->Doviz Kurlari\n\t\t7->Geri\n\t\t8->Cikis\n\n\tSecim :");
	scanf("%d",&secim);	
	
	switch(secim)
	{
		case 1 : hesapbilgileri(a); goto z; break;
		case 2 : parayatir(a); goto z; break;
		case 3 : paracekme(a); goto z; break;
		case 4 : paragonder(a); goto z; break;
		case 5 : odemeler(a); goto z ; break;
		case 6 : dovizkur(); goto z; break;
		case 7 : system("cls"); anamenu(); break; 
		case 8 : printf("\n\t\tBizi Tercih Ettiginiz Icin Tesekkur Eder Iyi Gunler Dileriz !!");
		printf("\n\t\tLutfen Kartinizi Almayi Unutmayiniz !"); exit(0); break;
		default :  system("cls"); printf("\n\n\t\tYanlis Giris Yapildi."); goto z;		
	}
}
int hesapbilgileri(int a)
{
	system("cls");
	int i=0,j;
	for(j=0;j<8;j++)
	{
		if(j==0)
		{
			printf("\n\t\tHesap Numaraniz :%ld\n",musteri[a][j]);	
		}
		if(j==1)
		{
			printf("\n\t\tSifreniz :%ld\n",musteri[a][j]);	
		}
		if(j==2)
		{
			printf("\n\t\tBakiyeniz :%ld\n",musteri[a][j]);	
		}
		if(j==3)
		{
			printf("\n\t\tTelefon Numaraniz :%ld\n",musteri[a][j]);	
		}
	}
	int secim,degisken,yeni,yeni2,sayac=2;
	char x;
	printf("\n\t\tBu Bilgilerde Herhangi bir degisiklik yapmak istiyormusunuz (e/h)?"); scanf("%s",&x);
	if(x=='e' || x=='E')
	{
	x:	printf("\n\t\t1->Hesap Numarasi\n\t\t2->Sifre\n\t\t3->Bakiye\n\t\t4->Telefon Numarasi\n\t\t5->Geri\n\t\tSecim :");
		scanf("%d",&secim);
			if(secim==1 || secim==3)
			{
				system("cls"); printf("Hesap Numarasi ve Bakiye Bilgileri Yonetici Harici Degistirlemez !!"); goto x;
			}
			switch(secim)
			{
			z:	case 2 : printf("\n\t\tEski Sifrenizi Giriniz :"); scanf("%d",&degisken); 
				if(degisken==musteri[a][1])
				{
				y:	printf("\n\t\tYeni Sifrenizi Girin :"); scanf("%d",&yeni);
					printf("\n\t\tYeni Sifrenizi Tekrar Girin :"); scanf("%d",&yeni2);
					if(yeni==yeni2)
					{
						printf("\n\t\tSifreniz Basariyla Degistirildi.");
						musteri[a][1]=yeni;
						break;
					}
					else
					{
						printf("\n\t\tGirdiginiz Sifreler Eslesmiyor!\n\t\tKalan Deneme Hakk˝ :%d",sayac); goto y;
						sayac--;
						if(sayac==0)
						{
							printf("\n\t\t3 defa yanlis Giris Yapildi.Bir Ust Menuye Yonlendiriliyorsunuz."); goto x;
						}
					}
				}
				else printf("\n\t\tEski Sifre Yanlis Girildi !"); goto z;
				
				break;
				case 4 : 
			q:	printf("\n\t\tEski Telefon Numaranizi Giriniz :"); scanf("%d",&degisken); 
				if(degisken==musteri[a][3])
				{
				t:	printf("\n\t\tYeni Telefon Numaranizi Girin :"); scanf("%d",&yeni);
					printf("\n\t\tYeni Telefon Numaranizi Tekrar Girin :"); scanf("%d",&yeni2);
					if(yeni==yeni2)
					{
						printf("\n\t\tTelefon Numaraniz Basariyla Degistirildi.");
						musteri[a][3]=yeni;
						break;
					}
					else
					{
						printf("\n\t\tGirdiginiz Telefon Numaralari Eslesmiyor!\n\t\tKalan Deneme Hakk˝ :%d",sayac); goto t;
						sayac--;
						if(sayac==0)
						{
							printf("\n\t\t3 defa yanlis Giris Yapildi.Bir Ust Menuye Yonlendiriliyorsunuz."); goto x;
						}
					}
				}
				else printf("\n\t\tEski Telefon Numarasi Yanlis Girildi !"); goto q;
				
				break;
				case 5 : altmenu(a); break;
				default : printf("\n\t\tYanlis Giris Yapildi."); goto x;
			}
	}
	else altmenu(a);
}
int parayatir(int a)
{
	int yatirilan,eskib,x,y;
	srand(time(NULL));
	x=rand()%30;
	y=rand()%12;
	
	eskib=musteri[a][2];
	char secim;
	printf("\n\t\tLutfen Yatirmak Istediginiz Tutari Giriniz :");	scanf("%d",&yatirilan);
	musteri[a][2]+=yatirilan;
	printf("\n\t\t%d TL Hesabiniza Basariyla Yatirildi .",yatirilan);
	printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tYatirilan Tutar : %d\n\t\tYeni Bakiye:%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,musteri[a][2]-eskib,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}

}
int paracekme(int a)
{
	srand(time(NULL));
	int cekilen,eskib,x,y;
	char secim;
	srand(time(NULL));
	x=1+rand()%30;
	y=1+rand()%12;
	eskib=musteri[a][2];
	printf("\n\t\tLutfen Cekmek Istediginiz Tutari Giriniz :"); scanf("%d",&cekilen);
	if(cekilen>musteri[a][2])
	{
		printf("Bu Miktar icin Bakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?");
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=cekilen;
			 printf("\n\t\tHesabinizdan %d TL cekildi.",cekilen); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tCekilen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,eskib-musteri[a][2],musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
	}

	musteri[a][2]-=cekilen;
	printf("Hesabinizdan %d TL cekildi.",cekilen); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tCekilen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,cekilen,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}

}
int paragonder(int a)
{
	srand(time(NULL));
	int i=1,tutar,eskib=musteri[a][2],x,y;
	char secim;
	x=1+rand()%30;
	y=1+rand()%12;
	long int hesapno;
	system("cls");
	printf("\n\t\tPara Gonderme\n\t\t Hesap Numarasi :"); scanf("%d",&hesapno);
	while(i<=3)
	{
		if(hesapno==musteri[a][0])
		{
			printf("\n\t\tPara Gonderme Isleminden 5 tl Ucret Tahsil Edilecektir.");
			printf("\n\t\tGonderilecek Tutar :"); scanf("%d",&tutar);
			if(tutar>musteri[a][2])
			{
		printf("Bu Miktar icin Bakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=tutar;
			if(a!=0)
			musteri[0][2]+=tutar;
			else
			musteri[1][2]+=tutar;
			 printf("Hesabinizdan %d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tGonderilen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,tutar,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
	}
	else
	{
		musteri[a][2]-=tutar;
		printf("Hesabinizdan %d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno);
	printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tGonderilen Tutar : %ld\n\t\tYeni Bakiye :%d\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,eskib-musteri[a][2],musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}	
		
	}
		}
		
		else if(hesapno!=musteri[a][0])
		{
			printf("\n\t\tPara Gonderme Isleminden 5 tl Ucret Tahsil Edilecektir.");
				printf("\n\t\tGonderilecek Tutar :"); scanf("%d",&tutar);
			if(tutar>musteri[a][2])
			{
		printf("\n\t\tBu Miktar icin Bakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=tutar+5;
			if(a!=0)
			musteri[0][2]+=tutar;
			else
			musteri[1][2]+=tutar;
			 printf("\n\t\tHesabinizdan %d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tGonderilen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,tutar,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
	}
	else
	{
		musteri[0][2]-=tutar;
		printf("Hesabinizdan %d TL %ld Hesabina Basari ile Gonderildi.",tutar,hesapno);
	printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tGonderilen Tutar : %ld\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,eskib-musteri[a][2],musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}	
	}
	
		}
		i++;
}
	
}
int odemeler(int a)
{
	srand(time(NULL));
	int secim,abone,borc,eskib=musteri[a][2],x,y;
	x=1+rand()%30;
	y=1+rand()%12;
	borc=rand()%500;
	system("cls");
a:	printf("\n\t\tODEMELER");
	printf("\n\t\tOdeme Islemlerinde 5 TL Ucret Tahsil Edilir.");
	printf("\n\t\t1->Elektrik Faturasi\n\t\t2->Su Faturasi\n\t\t3->Dogalgaz Faturasi\n\t\t4->Internet Faturasi\n\t\t5->Telefon Faturasi\n\t\t6->Vergi Odemeleri\n\t\t7->Kurum Odemeleri\n\t\t8->Geri\n\t\tSecim :");	
	scanf("%d",&secim);
	switch(secim)
	{
		case 1 : printf("\n\t\tElektrik Abone Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tFatura Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Elektrik Faturaniz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
	
		
		case 2 :  printf("\n\t\tSu Abone Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tFatura Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Su Faturaniz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
		case 3 :  printf("\n\t\tDogalgaz Abone Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tFatura Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Dogalgaz Faturaniz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
		case 4 :  printf("\n\t\tIntermet Abone Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tFatura Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Elektrik Faturaniz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
		case 5 : printf("\n\t\tTelefon Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tFatura Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Telefon Faturaniz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Fatura Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
		case 6 : printf("\n\t\tVergi Numaraniz :"); scanf("%d",&abone);
		printf("\n\t\tFatura Tutariniz :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[a][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tVergi Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Vergi Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Vergi Borcunuz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Vergi Tutari : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
	case 7:	printf("\n\t\tOdeme Yapilacak Kurum Numarasi :"); scanf("%d",&abone);
		printf("\n\t\tOdemeniz Gereken Tutar :%dTL",borc); 
		printf("\n\t\tOdemek Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
				if(borc>musteri[0][2])
			{
		printf("\n\t\tBakiyeniz Yetersiz.Bankaya Borclanmak Istiyormusunuz (e/h)?"); scanf("%s",&secim);
		if(secim=='e' || secim=='E')
		{
			musteri[a][2]-=borc+5;
			 printf("\n\t\tKurum Odemeniz Basari Ile Gerceklestirildi."); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti : 5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else
		{
			altmenu(a);
		}
		}
		musteri[a][2]-=borc+5;
	printf("\n\t\tHesabinizdan %d TL tutarindaki Kurum Borcunuz Odendi.",borc); 
			 printf("\n\t\tMakbuz Almak Istermisiniz(e/h)?"); scanf("%s",&secim);
	if(secim=='e' || secim=='E')
	{
		printf("\n\t\tEski Bakiye :%d\n\t\tOdenen Tutar : %d\n\t\tYeni Bakiye :%d\n\t\tIslem Ucreti :5\n\t\tIslem Tarihi :%d/%d/2018\n\t\t",eskib,borc,musteri[a][2],x,y); getch(); altmenu(a); 
	}
	else
	{
		printf("\n\t\tBir Ust Menuye Yonlendiriliyorsunuz ..."); getch(); altmenu(a);
	}
		}
		else goto a;
		break;
		case 8 : system("cls"); altmenu(a);break;
		default : printf("\n\t\tYanlis Giris Yapildi."); goto a;
	}
	
}	
void dovizkur()
{
	char secim;
	float tl,dol,eur,ster,yen;
	srand(time(NULL));
	tl=1+rand()%20,10;									
	dol=1+rand()%10,2;
	eur=1+rand()%8;
	ster=1+rand()%6;
	yen=1+rand()%4;
	printf("\n\t\tTurk Lirasi :%.2f\n\t\tAmerikan Dolari :%.2f\n\t\tEuro :%.2f\n\t\t›ngiliz Sterlini :%.2f\n\t\tJapon Yeni :%.2f",tl,dol,eur,ster,yen);
	getch();
system("cls");

}
int main()
{
	anamenu();
}
