/* calculadora de quatro operações */
#include <stdio.h>
main (){
	float num1, num2;
	char op;
	printf("Digite: numero operador numero\n");
	scanf ("%f %c %f", &num1, &op, &num2);

	switch (op){
		case '+': printf(" = %f\n", num1+num2); break;
		case '-': printf(" = %f\n", num1-num2); break;
		case '*': printf(" = %f\n", num1*num2); break;
		case '/': printf(" = %f\n", num1/num2); break;
		default: printf("Operador inválido!\n"); break;
	}
}

