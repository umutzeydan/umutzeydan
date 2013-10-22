#include <stdio.h>
#include<conio.h>
#include <ctype.h>
void main()
{
  int secim,e,c,g,b;
  
 char kullanici_adi[40];
 int k_sifre;                //kullanıcı adı hesap numarası sıfre gıbı bılgılerın verıldıgı yer
 int Hesap_para=500;
 float Hesap_No;



 printf("Kullanici Adini Giriniz:");
 scanf("%s",kullanici_adi);
 
 printf("Sifreyi giriniz:");
 scanf("%d",&k_sifre);

 while (k_sifre!=1234)
 {
	 printf("Yanlış Girdin Tekrar Sifreyi giriniz:");//burda while dongusune sokarak yanlıs bır sıfre gırdıgı takdırde tekrar kapanmadan calısmasını saglıyorum
     scanf("%d",&k_sifre);
 }

 

 while(1)
 {

 
  printf("Hesabinizda bulunan para=%d TL\n",Hesap_para );
 
 


 printf("********MENU**********\n");//burda menu olusturuyorum ve kısının tercıh gırmesını saglıyorum

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
	  printf("Hesabinizda bulunan para=%d TL\n",Hesap_para );// if else kullanarak tercıhlerı sıralıyorum..
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

 if(c>Hesap_para)// burdakı ıf else le bakıyeden fazla gırıldıgı takdırde uyarılmasını saglıyorum..
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
				  Hesap_para=Hesap_para-g;//hesaptakı paradan gonderılen parayı cıkarınca kalan parayı gostermesını saglıyorum
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
 printf("Devam Etmek istiyomusunuz Y/H ?:");// E H seceneklerını olustururarak devam etmek ısteyıp ıstemedıgını sagladım
 
 cevap=getche();
 
 if(cevap=='H' || cevap=='h' )//eger cevap hayırsa break le ıslem sonlandırılıyor..
 {
	 break;}
 }

 
}