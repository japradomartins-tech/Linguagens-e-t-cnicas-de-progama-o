#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
			printf("aoba");
		}
		if(letra == 'i' || letra == 'u'){
			printf("LA ELE");
		}
	}else {
		printf("67");
	}
	
	printf("\n");
	
	switch (letra){
		case 'a':
			printf("a de amor");
			break;
		case 'b':
			printf("b de baixinho");
			break;
		case 'c':
			printf("c de coracao");
		case 'd':
			printf("d de dedinho");
			
	}
	return 0;
}
