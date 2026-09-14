#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int seg, min, h;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &seg);
	
	min = seg / 60;
	seg = seg % 60;
	h = min / 60;
	min = min % 60;
	
	printf("horas: %d minutos: %d segundos: %d", h, min, seg);
  
	return 0;
}
