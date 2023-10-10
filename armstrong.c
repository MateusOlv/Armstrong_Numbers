#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	int abc, a, b, c;
	printf("\t\t\t\t\t\t ====== NÚMERO DE ARMSTRONG ======\n");
	
	printf("\n\t\t\t\t ==============================================================\n");
	printf("\t\t\t\t ||SOMENTE NÚMEROS INTEIROS, MAIORES QUE 0 E MENORES QUE 1000||");
	printf("\n\t\t\t\t ==============================================================\n");
	
	printf("\nDigite um número: ");
	scanf("%d", &abc);
	
	while(abc != 0 && abc < 1000){
	c = abc % 10;
	b = abc / 10 % 10;
	a = abc / 100;
	
	if(abc < 10){
		printf("%d é um Número de Armstrong!\n", abc); 
	}
	else{
		if(abc > 10 && abc < 100){
			if(pow(b, 2) + pow (c, 2) == abc){
				printf("%i é um Número de Armstrong!\n", abc);
			}else(printf("%i NÃO é um Número de Armstrong!\n", abc));
		}
		else{
			if(pow (a, 3) + pow (b, 3) + pow (c, 3) == abc){
				printf("%i é um Número de Armstrong!\n", abc);
			}
			else(printf("%i NÃO é um Número de Armstrong!\n", abc));
		}
	}
	
	printf("\nDigite um número: ");
	scanf("%d", &abc);
	
	}
	
	return 0;
}
