#include<stdio.h>
#include<conio.h>
void main()
{
	int sayi,birler,onlar,yüzler,binler;
	printf("4 basamakli bir sayi giriniz..\n (cikmak istiyorsaniz  1  basin)  :");
	scanf("%d",&sayi);
	while(sayi!=1)// 1 sayisi gýrýlene kadar islemin donmesýný saglar whýle dongusu
	{
		if(sayi>=1000 && sayi<=9999)//4 basamaklý sayýdan kucuk veya buyuk gýrýlmemesýný saglýyorum
		{
		binler=sayi/1000;
		yüzler=sayi%1000/100;//modlarýný alýp bölerek kac tane býnlýk yuzluk onluk býrlýk oldugunu buluyorum
		onlar=(sayi%100)/10;  
        birler=sayi%10;  
		printf("\n\t%d tane binlik sayi \n", binler);
        printf("\n\t%d tane yuzluk sayi \n", yüzler);
        printf("\n\t%d tane onluk sayi \n", onlar);
        printf("\n\t%d tane birlik sayi \n", birler); 
		}
			   else         // 4 basamaklý sayýdan kucuk veya buyuk gýrýldýgý takdýrde tekrar denemesýný soluyorum
          {             
            printf("\n\tYanlis giris yaptiniz tekrar deniyiniz..\n");    
          }                                               
              
        printf("4 basamakli bir sayi giriniz   : "); 
        scanf("%d", &sayi);                        
      }                                               
          
      printf("\nprogram kapanmistir.. ");//1 e basýldýgý takdirde programýn sona ermesýný yazdýrýyorum
      
    
				
		}