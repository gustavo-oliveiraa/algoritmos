/*6. Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.*/
#include<stdio.h>
int main(){
	int numero;
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	if(numero % 2 == 0){
    printf("Este numero e par.\n");
    }else{
	printf("Este numero e impar.\n");
    }
    return 0;
}
