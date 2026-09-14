#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int num, ant, suc;
	printf("Digite o valor n: ");
	scanf("%d", &num);
	suc = num+1;
	ant = num-1;
	printf("o numero %d, seu antecesor %d e seu sucessor %d", num, ant, suc);
	
	return 0;
