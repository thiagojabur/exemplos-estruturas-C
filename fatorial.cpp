/* Fatorial  */
#include <stdio.h>
int main (){
	int k, n, f=1;

	do{
		printf("Digite um valor inteiro nao negativo: ");
		scanf ("%d", &n);
	} while (n<0);

	for (k = 1; k <= n; k++)
		f *= k;

	printf(" Fatorial de %d = %d\n", n, f);
}
