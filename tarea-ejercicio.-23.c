#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main (void)
{//ejercicio.-23
    printf("en este programas solo esta el ejercicio 23 con sus partes que pide el ejercicio\n");
printf("ejercicio 23 primera parte\n");
{
    int i=2,n=1,s=0;
printf("Suma de cada tercer numero cuando i=2.\n");
while(n<100){
 printf("%d+%d=",s,i);
 s=s+i;
 i+=3;
 printf("%d\n",s);
 n++;
 }
printf("El resultado de la suma es:%d\n",s);
}
printf("ejerccio 23 segunda parte\n");
{
    int i=2,n=1,s=0;
printf("Suma de cada tercer numero cuando i=2.\n");
do{
 printf("%d+%d=",s,i);
 s=s+i;
 i+=3;
 printf("%d\n",s);
 n++;
 } while(n<100);
printf("El resultado de la suma es:%d\n",s);
}
printf("ejercicio 23 tercera parte\n");
{
    int i=2,n,s=0;
printf("Suma de cada tercer numero cuando i=2.\n");
for(n=1;n<100;n++){
 printf("%d+%d=",s,i);
 s=s+i;
 i+=3;
 printf("%d\n",s);
 }
printf("El resultado de la suma es:%d\n",s);
}
}
