#include<stdio.h>
#include<conio.h>

void Secara_Nilai(float a, float b, char c){
   float *Alamat_A;
   Alamat_A  = &a ;
   a =7;
   printf ("Lokal A = %f, alamat A =%p\n" ,a,Alamat_A);
   printf  ("Lokal B = %f\n",b);
   printf (" Lokal C =%f\n",c);

}
int main(){

float a=25,*Alamat_A;
char c= 'a';
Alamat_A=&a ;
Secara_Nilai(a,a/3,c);
printf("Main A = %f, alamat A = %p\n",a,Alamat_A);
printf("Main A/3 = %f\n",(a/3));
printf("Main C = %c\n",c);
getch();

}
