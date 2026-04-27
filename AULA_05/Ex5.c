#include <stdio.h>
#include <float.h>
int main()
{
	float num[6];
	float menornum = FLT_MAX;

	for(int i = 0; i < 6; i++) {
		printf("Digite o %i numero: ", i+1);
		scanf("%f", &num[i]);
		if(num[i] <= menornum) {
			menornum = num[i];
		}
	}
	printf("O menor numero eh: %f ", menornum);

}