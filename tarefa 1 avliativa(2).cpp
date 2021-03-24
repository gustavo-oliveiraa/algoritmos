/*1. Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite
de 80 km/h). */
#include<stdio.h>
#include<math.h>
int main(){
	char PLACA[7];
	int VELOCIDADE;
	printf("Digite a placa do carro:\n");
	scanf("%s", &PLACA);
	printf("Digite a velocidade do veiculo:\n");
	scanf("%d", &VELOCIDADE);
	if(VELOCIDADE > 80)
	   printf("Voce sera multado, sua velocidade %dkm excedeu o limite.\nNumero da placa:%s\n", VELOCIDADE, PLACA);
	   else{
	  	    printf("Voce nao sera multado, sua velocidade nao excedeu o limite.\n");
	  	    printf("Numero de sua placa:%s.\n", PLACA);
	  }
	return 0;
	
}
