#include<stdio.h>
#include<conio.h>
void main()
{
	int sayi,birler,onlar,y�zler,binler;
	printf("4 basamakli bir sayi giriniz..\n (cikmak istiyorsaniz  1  basin)  :");
	scanf("%d",&sayi);
	while(sayi!=1)// 1 sayisi g�r�lene kadar islemin donmes�n� saglar wh�le dongusu
	{
		if(sayi>=1000 && sayi<=9999)//4 basamakl� say�dan kucuk veya buyuk g�r�lmemes�n� sagl�yorum
		{
		binler=sayi/1000;
		y�zler=sayi%1000/100;//modlar�n� al�p b�lerek kac tane b�nl�k yuzluk onluk b�rl�k oldugunu buluyorum
		onlar=(sayi%100)/10;  
        birler=sayi%10;  
		printf("\n\t%d tane binlik sayi \n", binler);
        printf("\n\t%d tane yuzluk sayi \n", y�zler);
        printf("\n\t%d tane onluk sayi \n", onlar);
        printf("\n\t%d tane birlik sayi \n", birler); 
		}
			   else         // 4 basamakl� say�dan kucuk veya buyuk g�r�ld�g� takd�rde tekrar denemes�n� soluyorum
          {             
            printf("\n\tYanlis giris yaptiniz tekrar deniyiniz..\n");    
          }                                               
              
        printf("4 basamakli bir sayi giriniz   : "); 
        scanf("%d", &sayi);                        
      }                                               
          
      printf("\nprogram kapanmistir.. ");//1 e bas�ld�g� takdirde program�n sona ermes�n� yazd�r�yorum
      
    
				
		}