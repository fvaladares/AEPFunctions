/*Onde colocar os parâmetros, quando colocar


exemplo que só pode ser resolvido com recursividade
 ============================================================================
 Name        : Aula2610.c
 Author      : Fabricio Valadares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int somaPassagemValor(int a, int b){
	a += b;
	return (a);
}

int somaPassagemReferencia(int* a, int* b){
	*a += *b;// Valor da variável apontada pelo ponteiro
	return (*a);
}


void testeParametros(){
	int x, y, r;

	x = 10;
	y = 35;

	r = somaPassagemValor(x, y);
	printf("Passagem por valor:\n");
	printf("x = %i, y = %i, r = %i \n", x, y, r);

	r = somaPassagemReferencia(&x, &y);
	printf("Passagem por referência:\n");
	printf("x = %i, y = %i, r = %i \n", x, y, r);
}

// vetor == array; n = tamanho do vetor;
void imprimeVetor(int vetor[], int n){
	for ( int i = 0; i < n; i++ ){
		if (i != n-1){
			printf("%i, ", vetor[i]);
		} else {
			printf("%i\n", vetor[i]);
		}
	}
}

void testeImprimeVetor(){
	int vetor[] = {5, 3, 2, 10, 25, 40};
	int n = 6;
	imprimeVetor(vetor, n);
}

int main(void) {

//	testeParametros();
//	testeImprimeVetor();
	int x = 1;
	int r = x;
	for (int i = x-1; i > 0; i--){
		r *= i; // r = r * i;
	}

	printf("%d! = %d ", x, r );


	return EXIT_SUCCESS;
}






