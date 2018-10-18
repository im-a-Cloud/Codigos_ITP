#include<stdio.h>
#include<stdlib.h>

int mult(int n1, int n2){
	int resultado = 0;
	if(n2 == 0)
	{
		return 0;
	}
	else{
	resultado = n1 + mult(n1, n2-1);
	return resultado;
	}
}
int main(){
	int x,y;
	printf("Digite 2 número para multiplicar\n");
	scanf("%d %d", &x, &y);
	printf("%d\n", mult(x,y));
	return 0;
}
