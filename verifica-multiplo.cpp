// Programa: Verificar se um n�mero � m�ltiplo de outro
#include <stdlib.h> //para o system(�pause�);
#include <stdio.h> //entrada e sa�da
#include <locale.h> //cinfigura��o de linguagem
#include <windows.h> //cabe�alho
main(){
	int numero=0, multiplo=0;

	setlocale(LC_ALL, "Portuguese"); //comando de regionaliza��o
	SetConsoleTitle("Verificar se um numero e multiplo de outro"); //t�tulo do programa

	printf ("Este programa verifica se um determinado n�mero � m�ltiplo de outro.\n\n");

	printf("O n�mero: ");//pede o n�mero
	scanf ("%d", &numero);//armazena na vari�vel "numero"
	printf(" � m�ltiplo de: ");//pede o m�ltiplo
	scanf ("%d", &multiplo);//armazena na vari�vel "multiplo"

	if (numero%multiplo==0)//verifica se o resto da divis�o de "numero" por "multiplo" � 0
		printf ("\n\nResposta: SIM \n\n");//sim,  � m�ltiplo
	else
		printf ("\n\nResposta: N�O \n\n");//n�o,  n�o � m�ltiplo

	system("pause");
}
