#include <stdio.h>
int inverte(int vet[4], int pos){
	if (pos < 4/2)
	{
		int aux = vet[pos];
		int novo_vetor = 4 - pos - 1;
		vet[pos] = vet[novo_vetor];
		vet[novo_vetor] = aux;
		inverte(vet, pos + 1);
		return vet[novo_vetor];
	}
}

int main()
{
	int vet[4], i = 0, pos = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &vet[i]);
	}
	inverte(vet, 0);
	for (i = 0; i < 4; i++)
	{
		printf("%d\n",vet[i]);
	}
	return 0;
}