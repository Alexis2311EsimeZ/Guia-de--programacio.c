#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main ()
{
    printf("contine este programa los ejercicios del 1 al 12");
//Ejercicio 1
int a=4, b=10, c=4;
float z, d =1.1;
printf("Ejercicio 1\n");
printf("Realiza la siguinete operacion:z=a+b/c*d \n");
z= a+b/c*d;
printf("El valor de la operacion es:%f \n",z);
// ejercicio 2
printf("Ejercicio 2\n");
int n=2, m=5 ,g;
printf("Realiza las siguientes operaciones \n");
    g=(n+m)==2;
    printf("(n+m)==2:%d\n",g);
    g=(n>m)==!(m==5);
printf("(n>m)==!(m==5):%d\n",g);
    g=(m%n)>5;
printf("(m%n)>5:");
printf("%d",g);
    g=((m-n)*10)%4==1;
printf("((m-n)*10)%4:%d\n",g);
//ejercicio 3
printf("Edjercicio 3\n");
    int x=2, y=80, k=3, h;
    h=x==1;
 printf("x==1:%d\n",h);
    h=!(y==80);
 printf("!(y==80):%d\n",h);
    h=(x>y)||(z<x*2);
printf("(x>y)||(z<x*2):%d\n",h);
    h=(y%x)>(x==1);
printf("(y%x)>(x==1):%d\n",h);
//ejercicio.-4
{
  printf("ejercico 4\n");
	float altura, peso;
	int edad;

	printf("escriba su altura en metros:\n");
	scanf("%f",&altura);
	printf("escriba su edad:\n");
	scanf("%d",&edad);

	peso=altura*100-100+.10*edad*.9;
	printf("el peso recomendado es:%f\n",peso);
}
//ejercicio.-5
// el simbolo π no me deja meterlo en codigo del programa asi que lo escribi como se pronuncia
printf("ejercico 5\n");
{
    float area;
	float r;
	float pi=3.1415926536;
	printf("escriba el radio de una circunferencia:\n");
	scanf("%f",&r);
	area=pi*r*r;
		printf("el area de la circunferencia es: %f\n",area);
	}
//ejercicio.-6
  printf("ejercicio 6\n");
  {
	int num,k;
	printf("Escriba un numero:\n");
	scanf("%d",&num);
	k=num%2;
	if(k==0){
	printf("el numero es par\n");
	} else{
		printf("el numero es impar\n");
		}
	}
//ejercicio.-7
  printf("ejercico7\n");
  int num1, num2, num3, mayor, menor;
	printf("escriba el primer numero:");
	scanf("%d",&num1);
	printf("escriba el sgundo numero:");
	scanf("%d",&num2);
	printf("escriba el tercer numero:");
	scanf("%d",&num3);
	if(num1>num2){
		if(num1>num3){
			mayor=num1;
		}
		else {
			mayor=num3;
		}
	}
	else {
		if(num2>num3){
			mayor=num2;
		}
		else {
			mayor=num3;
		}
	}
		printf("el mayor de los 3 es: %d\n",mayor);
//ejercicio.-8
 printf("ejercicio8\n");
 int  main(){
float a;
int r1,r2,r3,r4,r5,r6,r7,r8, r9,r10,r11;
printf ("Conozca la cantidad mínima de billetes y monedas de su salario.\n");
printf ("Introducir la cantidad de dinero:\n");
scanf ("%f",&a);

r1=a/1000;
r2=( fmod (a,1000))/500;
r3=( fmod (a,500))/200;
r4=( fmod (a,500)-(r3*200 ))/100;
r5=( fmod (a,100))/50;
r6=( fmod (a,50))/20;
r7=( fmod (a,50)-(r6*20))/10;
r8=( fmod (a,10))/5;
r9=( fmod (a,5))/2;
r10=( fmod (a,5)-(r9*2))/1;
r11=( fmod (a,1 ))/0.5;

printf ( "%d billetes de 1000.\n",r1);
printf ( "%d billetes de 500.\n",r2);
printf ( "%d billetes de 200.\n",r3);
printf ( "%d billetes de 100.\n",r4);
printf ( "%d billetes de 50.\n",r5);
printf ( "%d billetes de 20.\n",r6);
printf ( "%d monedas de 10.\n",r7);
printf ( "%d monedas de 5.\n",r8);
printf ( "%d monedas de 2.\n",r9);
printf ( "%d monedas de 1.\n",r10);
printf ( "%d monedas de 0,5.\n",r11);
}
//ejercicio.-9
//ejercicio.-10
{
    printf("ejercicio10\n");
 int gasto,pesos;
  printf("digite los litros gastados:\n");
  scanf("%d",&gasto);
  if( gasto<=50);
  {
		printf("el total a pagar es:0\n");
	}
	if(gasto>50 && gasto<200);
	{
		pesos=gasto*20;
    printf("totoal a pagar es:%d\n",pesos);
	}
	}
//ejercicio.-11 cambie las variables n y d ya que las habia usado en otros problemas por variables t y g
{
printf("ejercicio11\n");
float t,max=0,min=9999999,w,cont=0,med;
printf ("Maximo, minimo y media de una lista de 10 numeros.\n" );
for (w=1; w<=10; w++){
 printf ("Introducir un numero:\n");
 scanf ("%f", &t);
  if (t>max){
  max=t;
  }
  if (t<min){
  min=t;
  }
 cont=cont+t;
 }
med=cont/w;
printf ("El número mayor es% fy el menor es%f.\n La media es:% f.",max,min,med);
}
//ejercicio.-12
printf("ejercio12");
 {int i,num,cont=0;
 printf("digite un numero:\n ");
 scanf("%d",&num);
 for (i=1; i<=num; i++){
 	if(num%i==0){
 		cont++;
 		}

 }
 if (cont>2){
 	printf("\n el numero es compuesto");
 }
 else {
 	printf("\n el numero es primo");
  }
}
}
