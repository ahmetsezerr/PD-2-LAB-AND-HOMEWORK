#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int z1,z2;
    int toplam,puan=0,puan2=0, control=0;
  
    srand(time(NULL));
  
  
    z1 = rand() % 6 + 1;
    z2 = rand() % 6 + 1;
  
    toplam=z1+z2;
  	
  	if( toplam==7 ||toplam==11)
  	{
  		printf("Tebrikler Oyunu Kazandiniz!");
		  return 0;
  	}
		else if( toplam==2 || toplam==3 || toplam==12)
		{
			printf("Oyunu Kaybettiniz!");
			return 0;
		}
  		else if(toplam==4 || toplam==5 || toplam==6 || toplam==8 || toplam==9 || toplam==10)
  		{
  			puan=toplam;
			printf("Tebrikler Puan Kazandiniz! ");
			control = 1;
        }
		while(control)
		{
			printf("\nZarlar Tekrar Atiliyor... \n");
			
			z1 = rand() % 6 + 1;
  			z2 = rand() % 6 + 1;
  			toplam=z1+z2;
  			
  			if(puan==toplam)
  			{
  			    printf("Tebrikler Oyunu Kazandiniz");
  		        
  			    break;
		    }
  			else if (puan==7)
  			{
  			    printf("Oyunu Kaybettiniz!");
  			    break;
			}
		}
}
