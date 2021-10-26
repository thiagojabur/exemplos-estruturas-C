#include <stdio.h>
//#include <stdlib.h> //para o system("pause");
#include <cstdlib> //também usado para o system("pause");

main(){
    int a,b,c;
    printf("Digite o 1o Numero: ");
    scanf("%d",&a);
    printf("\nDigite o 2o Numero: ");
    scanf("%d",&b);
    printf("\nDigite o 3o Numero: ");
    scanf("%d",&c);

    if (a > b)
    	if (a > c)
    		printf("\n O Maior e %d",a);
    	else
    		printf("\nO Maior e %d",c);
    else
    	if (b > c)
    		printf("\nO Maior e %d",b);
    	else
    		printf("\nO Maior e %d",c);

    system("pause");
}
