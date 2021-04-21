/*13. Faça e apresente o chinesinho do seu algoritmo do exercício 12.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int DDD;
	printf("Digite o DDD:\n");
	scanf("%d", &DDD);//DDD== 32
	if(DDD == 61) {//(32==61) não é esta cidade.
	        printf("O DDD %d é de Brasília.\n", DDD);
    }else if(DDD == 71){//(32==71) não é esta cidade.
    	    printf("O DDD %d é de Salvador.\n", DDD);
	}else if(DDD == 11){//(32==11) não é esta cidade.
		    printf("O DDD %d é de São Paulo.\n", DDD);
	}else if(DDD == 21){//(32==21) não é esta cidade.
		    printf("O DDD %d é do Rio de Janeiro.\n", DDD);
	}else if(DDD == 32){//(32==32) é esta cidade.
	        printf("O DDD %d é de Juiz de Fora.\n", DDD);// O DDD 32 é de Juiz de Fora.
    }else if(DDD == 19){
    	    printf("O DDD %d é de Campinas.\n", DDD);
	}else if(DDD == 27){
		    printf("O DDD %d é de Vitória.\n", DDD);
	}else if(DDD == 31){
	        printf("O DDD %d é de Belo Horizonte.\n", DDD);
    }else{
    	    printf("Cidade sem identificação.");
    }
	 return 0;       
	        
}
