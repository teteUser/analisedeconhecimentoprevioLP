#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Atividade 2 v5
// Author: Tennison Capra

/*
	float converterParaCelsius(float F){
		float C = (F-32)*5/9;
		return C;
	}
	
	float converterParaKelvin(float F){
		float K = converterParaCelsius(F) + 273.15;
		return K;
	}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float F, C;
	int n, frio=0;
	
	printf("Quantas vezes você deseja fazer a conversão de temperatura? ");
	scanf("%d", &n);
	float vect[n];
	
	for(int i=0; i<n; i++){
		printf("\nDigite a temperatura em graus Fahrenheit: ");
		scanf("%f", &F);
			
		printf("\nSegue a temperatura em Celsius: %.2f \ºC\nSegue a temperatura em Kelvin: %.2f \ºK.\n\n", converterParaCelsius(F), converterParaKelvin(F));
		C = converterParaCelsius(F);
		printf("Sensação térmica: ");
		if(C<15){
			printf("Frio\n");
			frio++;
		}else{
			if(C<=30){
				printf("Normal\n");
			}else{
				printf("Quente\n");
			}
		}
	}
	
	printf("\n--- Quantidade de temperaturas frias digitadas: %d  ---\n", frio);
	printf("\n-------------  Programa Finalizado  --------------\n");	
	
	return 0;
}
*/
	

