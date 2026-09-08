/* Ler um vetor A com 12 elementos reais: Colocar seus elementos em ordem crescente.
 * Ler um vetor B da mesma forma.
 * Construir um vetor C, sendo cada elemento a soma correspondente de A e B.
 * Critério: Criar uma função para cada tarefa do programa*/

#include <stdio.h>

void inputArray(float arr[]);
void sortArray(float arr[]);
void fillArrayBySum(float arr1[], float arr2[], float final[]);
void showArray(float arr[]);

int main(void){
	float a[12], b[12], c[12];
	printf("\n=== VETOR A ===\n");
	inputArray(a); sortArray(a);
	printf("\n=== VETOR B ===\n");
	inputArray(b); sortArray(b);
	printf("\n=== RESULTADO: VETOR C ===\n");
	fillArrayBySum(a, b, c);
	showArray(c);
	return 0;
}

void inputArray(float arr[]){
	for (int i = 0; i < 12; i++){
		printf("[VALOR %d]: ", i+1);
		scanf("%f", &arr[i]);
	}
	return;
}

void sortArray(float arr[]){
	float swap;
	for (int i = 0; i < 11; i++){
		for (int j = i; j < 12; j++){
			if (arr[i] > arr[j]) {
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
			}
		}	
	}
	return;
}

void fillArrayBySum(float arr1[], float arr2[], float final[]){
	for (int i = 0; i < 12; i++){
		final[i] = arr1[i] + arr2[i];
	}
	return;
}

void showArray(float arr[]){
	for (int i = 0; i < 12; i++){
		printf("[VALOR %d] = %.2f\n", i+1, arr[i]);
	}
	return;
}
