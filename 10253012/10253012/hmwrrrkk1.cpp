#include <stdio.h>
#include<conio.h>
#include <ctype.h>
void main()
{
  int secim,e,c,g,b;
  
 char kullanici_adi[40];
 int k_sifre;                //kullan�c� ad� hesap numaras� s�fre g�b� b�lg�ler�n ver�ld�g� yer
 int Hesap_para=500;
 float Hesap_No;



 printf("Kullanici Adini Giriniz:");
 scanf("%s",kullanici_adi);
 
 printf("Sifreyi giriniz:");
 scanf("%d",&k_sifre);

 while (k_sifre!=1234)
 {
	 printf("Yanl�� Girdin Tekrar Sifreyi giriniz:");//burda while dongusune sokarak yanl�s b�r s�fre g�rd�g� takd�rde tekrar kapanmadan cal�smas�n� sagl�yorum
     scanf("%d",&k_sifre);
 }

 

 while(1)
 {

 
  printf("Hesabinizda bulunan para=%d TL\n",Hesap_para );
 
 


 printf("********MENU**********\n");//burda menu olusturuyorum ve k�s�n�n terc�h g�rmes�n� sagl�yorum

 printf("1-Para miktari\n");
 printf("2-Para ekleme\n");
 printf("3-Para cekme\n");
 printf("4-Para gonderme\n");
 printf("5-Cikis\n");
 printf("\n");
 printf("tercihinizi giriniz= (1/2/3/4/5):");
 scanf("%d",&secim);
  printf("\n");

  if(secim==1)
 {
	  printf("Hesabinizda bulunan para=%d TL\n",Hesap_para );// if else kullanarak terc�hler� s�ral�yorum..
 }
  else if(secim==2)
 {
 printf("Eklemek istediginiz miktar:\n");
 scanf("%d",&e);
 Hesap_para=Hesap_para+e;
 printf("Son miktar=%d TL\n",Hesap_para);
 }
  else if(secim==3)
 {
  printf("Cekmek istediginiz miktar:");
 scanf("%d",&c);

 if(c>Hesap_para)// burdak� �f else le bak�yeden fazla g�r�ld�g� takd�rde uyar�lmas�n� sagl�yorum..
		{
			printf("Bakiye yetersiz..");
		}
		else
		{
			Hesap_para=Hesap_para-c;
			printf("Kalan miktar=%d TL\n",Hesap_para);
		}
 }
  else if(secim==4)
 {
  
	 printf("Gondermek istediginiz hesap numarasi:");
	 scanf("%f",&Hesap_No);
    // gets(Hesap_para1);
	 if(Hesap_No==12345678)
		  {
		
			 printf("Gondermek istediginiz para miktarini giriniz:");
			 scanf("%d",&g);

			 if(g>Hesap_para)
			  {
				  printf("Bakiye yetersiz..");
			  }
			  else
			  {
				  Hesap_para=Hesap_para-g;//hesaptak� paradan gonder�len paray� c�kar�nca kalan paray� gostermes�n� sagl�yorum
				  printf("Kalan miktar:%d TL\n",Hesap_para);
			   }
		   }
		  else
	      {
			  printf("yanlis hesap numarasi girdiniz..");
		  }
  
 }
  else if(secim==5)
  {
	  return ;

 
  }

 char cevap;
 printf("Devam Etmek istiyomusunuz Y/H ?:");// E H secenekler�n� olustururarak devam etmek �stey�p �stemed�g�n� saglad�m
 
 cevap=getche();
 
 if(cevap=='H' || cevap=='h' )//eger cevap hay�rsa break le �slem sonland�r�l�yor..
 {
	 break;}
 }

 
}