/*4. Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída
uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo
feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
Ilma Sra. Ana Rita*/
#include<stdio.h>
int main(){
	char NOME[50], SEXO;
	printf("Digite seu nome:\n");
    scanf("%s", &NOME);
	printf("Digite o seu sexo (M para Masculino e F para Feminino):\n");
	scanf("%s", &SEXO);
	if(SEXO == 'M'){
		  printf("Ilmo Sr. %s", NOME);
    }else{
    	  printf("Ilma Sra. %s", NOME);
	}
	return 0;
	}
