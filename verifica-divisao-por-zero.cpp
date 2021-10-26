#include <stdio.h>
#include <cstdlib>
#include <conio.h>

main ( )
{

float a,b;
printf("Digite 2 numeros: ");
scanf("%f",&a);
scanf("%f",&b);

if (b)
	printf("%f",a/b);
else
	printf("Nao posso dividir por zero\n");

	getch();
}
