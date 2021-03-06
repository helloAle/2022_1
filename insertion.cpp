#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

void insertion_sort(int v[], int n);
void preencheVetor(int v[], int n);
void printVector(int v[], int n);

int main() {
	
	int vetor[TAMANHO];
	preencheVetor(vetor, TAMANHO);
	printVector(vetor, TAMANHO);
	printf("\n");
	
	insertion_sort(vetor, TAMANHO);
	printf("\n");
	printVector(vetor, TAMANHO);
}

void preencheVetor(int v[], int n) {
	srand(time(NULL));
	for (int i=0; i<n; i++) {
		v[i] = rand() % 1000 + 1;
	}
}

void insere(int x, int v[], int n) {
	while (n>0 && x < v[n-1]) {
		v[n] = v[n-1];
		n--;
	}
	v[n] = x;
}

void insertion_sort(int v[], int n) {	
	
	for (int i=0; i<n; i++) {
		printf("\t %i",i+1);
		insere(v[i], v, i);
	}
	printf("\n Houveram %i Trocas\n", TAMANHO);
	
}

void printVector(int v[], int n) {
	for (int i=0; i<n; i++) {
		printf("%3d ", v[i]);
	}
	printf("\n");
}
