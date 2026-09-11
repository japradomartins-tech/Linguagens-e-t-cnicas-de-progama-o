#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char cpf[12];
	int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	int soma, d1, d2;
	
	printf("Digite seu CPF: ");
	scanf("%s", cpf);
	
	n0 = cpf[0] - '0';
    n1 = cpf[1] - '0';
    n2 = cpf[2] - '0';
    n3 = cpf[3] - '0';
    n4 = cpf[4] - '0';
    n5 = cpf[5] - '0';
    n6 = cpf[6] - '0';
    n7 = cpf[7] - '0';
    n8 = cpf[8] - '0';
    n9 = cpf[9] - '0';
    n10 = cpf[10] - '0';
    
    soma = n0*10 + n1*9 + n2*8 + n3*7 + n4*6 + n5*5 + n6*4 + n7*3 + n8*2;
    d1 = (soma * 10) % 11;
    if (d1 == 10)
    	d1 = 0;
    
    soma = n0*11 + n1*10 + n2*9 + n3*8 + n4*7 + n5*6 + n6*5 + n7*4 + n8*3 + n9*2;
    d2 = (soma * 10) % 11;
    if (d2 == 10)
    	d2 = 0;
    
    if (d1 == n9 && d2 == n10)
    	printf("CPF valido!");
    else
    	printf("CPF invalido! ");
	
	return 0;
}
