#include <stdio.h>
// klavyeden girilen sayı pozitif mi negatif mi sıfır mı?

int main() 

{
 
 int sayi;
 
 printf("sayi girin: ");
 scanf("%d",&sayi);
 
 if(sayi > 0)
 {
  printf("%d pozitiftir.",sayi);
 }
  
 else if(sayi < 0)
 {
  printf("%d negatiftir.",sayi);
 }
  
 else
 {
  printf("%d sifirdir.",sayi);
 } 
  
 return 0;

}