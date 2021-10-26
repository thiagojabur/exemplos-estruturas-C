// Programa: Verificar se um número é múltiplo de outro
#include <stdlib.h> //para o system(“pause”);
#include <stdio.h> //entrada e saída
#include <locale.h> //cinfiguração de linguagem
#include <windows.h> //cabeçalho
main(){
	int numero=0, multiplo=0;

	setlocale(LC_ALL, "Portuguese"); //comando de regionalização
	SetConsoleTitle("Verificar se um numero e multiplo de outro"); //título do programa

	printf ("Este programa verifica se um determinado número é múltiplo de outro.\n\n");

	printf("O número: ");//pede o número
	scanf ("%d", &numero);//armazena na variável "numero"
	printf(" é múltiplo de: ");//pede o múltiplo
	scanf ("%d", &multiplo);//armazena na variável "multiplo"

	if (numero%multiplo==0)//verifica se o resto da divisão de "numero" por "multiplo" é 0
		printf ("\n\nResposta: SIM \n\n");//sim,  é múltiplo
	else
		printf ("\n\nResposta: NÃO \n\n");//não,  não é múltiplo

	system("pause");
}
