/*2. Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor 
absoluto) elaborando os c�lculos matem�ticos para isso.*/

#include<stdio.h>
int main(){
	int numero;
	printf("Digite o numero:\n");
	scanf("%d", &numero);
	if(numero < 0){
		numero = -1 * numero;
		printf("O modulo do numero e %d", numero);
	}
	else{
		printf("O modulo do numero e %d", numero);
	}
	return 0;
}
