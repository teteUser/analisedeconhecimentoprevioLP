#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Atividade 2 v

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float F, C, K;
	int n, q=0;
	
	printf("Quantas vezes você deseja fazer a conversão de temperatura? ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		printf("\nDigite a temperatura em graus Fahrenheit: ");
		scanf("%f", &F);
		C = (F-32)*5/9;
		K = C + 273.15;
		
		printf("\nSegue a temperatura em Celsius: %.2f \ºC\nSegue a temperatura em Kelvin: %.2f \ºK.\n\n", C, K);
		printf("Sensação térmica: ");
		if(C<15){
			printf("Frio\n");
			q++;
		}else{
			if(C<=30){
				printf("Normal\n");
			}else{
				printf("Quente\n");
			}
		}
		
	}
	
	printf("\n--- Quantidade de temperaturas frias digitadas: %d  ---\n", q);
	printf("\n-------------  Programa Finalizado  --------------\n");	
	
	return 0;
}


