#include <stdio.h>
#include <locale.h>
#define n 10

void most_vet (int num[],int tam) {
	for (int c = 0;c < tam; c++) {
		printf("Idade %d : %d\n",c + 1,num[c]);
	}
	printf("\n");
}

void selec_sort (int num[], int tam) {
	int c,i,maior,aux;
	
	for(c = 0;c < tam;c++) {
		maior = c;
		for(i = (c +1);i < tam;i++) {
			if (num[i] > num[maior]) {
				maior = i;
			}
		}
		if (c != maior) {
			aux = num[c];
			num[c] = num[maior];
			num[maior] = aux;
		}
	}
}

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int num[n],c;
	
	printf("Digite suas idades: ");
	for(c = 0;c < n;c++) {
		printf("\n%d idade: ",c + 1);
		scanf("%d",&num[c]);	
	}
	
	printf("\nIdades em ordem decrescente: \n");
	
	selec_sort(num,n);
	most_vet(num,n);
	
	
	return 0;
}
