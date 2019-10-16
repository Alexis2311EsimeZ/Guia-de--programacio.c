#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
    printf("En este programa solo esta el 14 ya que el de tarea-2parte no lo hacia\n");
char letra;
printf("Conozca si una letra es vocal o consonante.\n");
printf("Introduce una letra:\n");
scanf("%c",&letra);
if('a'==letra||'e'==letra||'i'==letra||'o'==letra||'u'==letra||'A'==letra||'E'==letra||'I'==letra||'O'==letra||'U'==letra){
 printf("La letra %c es una vocal.\n",letra);
}
else
printf("La letra %c es una consonante.\n",letra);
}
