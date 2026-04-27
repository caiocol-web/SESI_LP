
#include <stdio.h>

int main()
{
	float saques[3];
	float totalsaque = 0;
	float maiorsaque = 0;
	int acimade500 = 0;

	for(int i = 0; i <3; i++) {
		printf("Digite o valor do %i saque: ", i+1);
		scanf("%f", &saques[i]);

		totalsaque += saques[i];
		if(saques[i] > maiorsaque) {
			maiorsaque = saques[i];
		}
		if(saques[i] >= 500){
		    acimade500++;
		}
	}
	printf("O total foi: %.2f\n", totalsaque);
	printf("E o maior foi: %2.f\n", maiorsaque);
	printf("A quantidade acima de 500 foi: %i", acimade500);
}