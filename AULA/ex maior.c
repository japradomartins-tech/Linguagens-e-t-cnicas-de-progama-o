#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,c, maior_temp, maior;
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c){
		printf("%d eh o maior\n", a);
	} 
	if(b>a && b>c){
		printf("%d eh o maior\n", b);
	}
	if(c>a && c>b){
		printf("%d eh o maior\n", c);
	}
	   	
	return 0;
}

