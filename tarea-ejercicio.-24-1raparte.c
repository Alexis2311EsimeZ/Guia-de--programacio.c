#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main (void)
{
    //ejercicio.-24
printf("ejerccio 24 primera parte\n");
{
   int indicador;
printf("Introduzca un valor para reconocer la temperatura de su zona:\n");
scanf("%d",&indicador);
switch(indicador){
	case 1:
	printf("Calor");
	break;
	case 2:
	printf("Templado");
	break;
	case 3:
	printf("Frio");
	break;
	case 4:
	printf("Fuera de rango");
	break;
	default:
	printf("Introduzca un valor menor que 5.\n");
}

}

}
