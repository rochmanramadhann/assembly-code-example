#include <stdio.h>

int main(){
   int num;
   printf("Masukkan bilangan interger yang ingin dicek: ");
   scanf("%d",&num);
   if((num%2)==0)      /* Kondisi menggunakan if else*/
         printf("%d adalah Genap.",num);
   else
         printf("%d adalah Ganjil.",num);
   return 0;
}