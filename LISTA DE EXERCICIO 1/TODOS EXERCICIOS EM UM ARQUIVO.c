#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	char escolha;
	printf("| 1 | EXERCICIO 1 - ORDEM INVERSA\n");
	printf("\n| 2 | EXERCICIO 2 - NOTACAO CIENTIFICA\n ");
	printf("\n| 3 | EXERCICIO 3 - TRANSFORMACAO EM BINARIO\n ");
	printf("\n| 4 | EXERCICIO 4 - SALARIO + COMISSAO\n");
	printf("\n| 5 | EXERCICIO 5 - MEDIA, SOMA, PRODUTO\n ");
	printf("\n| 6 | EXERCICIO 6 - IDADE\n");
	printf("\n| 7 | EXERCICIO 7 - VOLUME DE UMA ESFERA\n ");
	printf("\n| 8 | EXERCICIO 8 - CALCULO PLANO CARTESIANO\n  ");
	
  printf("\nESCOLHA QUAL EXERCICIO DESEJA VER: \n ");
  scanf("%c", &escolha);
    
  switch  (escolha){
  case'1':{
  int numero1, numero2;

  printf("\nVOCE ENTROU NO EXERCICIO 1!\n");
  printf("\n");
  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &numero1, &numero2);

  printf("%d %d\n", numero2, numero1);


  break;
}
  case '2':{
	double valor, conta;
	int expoente;
	
	printf("\nVOCE ENTROU NO EXERCICIO 2!\n");
	printf("\n");
	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);
	
	expoente = (int) floor(log10(valor));
	conta = valor / pow(10, expoente);
	
	printf("%.4lf x 10^%d\n", conta, expoente);
	
	break;
}
  case '3':{
	printf("\nVOCE ENTROU NO EXERCICIO 3!\n");
	printf("\n");
	int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado ;
	
	
	printf("Entre com o valor de N:\n ");
	scanf("%d", &n);
	
	bit64 = n%2 ;
	resultado = n/2 ;
	
  bit32 = resultado%2 ;
  resultado = resultado/2 ;
    
  bit16 = resultado%2 ;
  resultado = resultado/2 ;
    
  bit8 = resultado%2 ;
  resultado = resultado/2 ;

  bit4 = resultado%2 ;
  resultado = resultado/2 ;
    
  bit2 = resultado%2 ;
  resultado = resultado/2 ;

	
	
	printf("O numero %d em binario: %d%d%d%d%d%d%d\n", n, resultado%2 , bit2, bit4, bit8, bit16, bit32, bit64);

	break;
}
  case '4': {
  char nome[100];
	double salarioFixo, totalReceber, vendas;

  printf("\nVOCE ENTROU NO EXERCICIO 4!\n");
	printf("\n");
	
	printf("Digite o nome do vendedor: ");
	scanf("%s", nome);
	
	printf("Digite o salario fixo: ");
	scanf("%lf", &salarioFixo);
	
	printf("Digite o valor total das vendas: ");
	scanf("%lf", &vendas);
	
	totalReceber = salarioFixo + (vendas * 0.15);
	printf("TOTAL = R$ %.2lf\n", totalReceber);

  break;
}
  case '5': {
  double valor1, valor2, valor3, valor4;
  double soma, media, produto;

  printf("\nVOCE ENTROU NO EXERCICIO 5!\n");
	printf("\n");
	
  printf("Digite o primeiro valor: \n");
  scanf("%lf", &valor1);
	
	printf("Digite o segundo valor: \n");
	scanf("%lf", &valor2);
	
	printf("Digite o terceiro valor: \n");
	scanf("%lf", &valor3);
	
	printf("Digite o quarto valor: \n");
	scanf("%lf", &valor4);
	
	soma = valor1 + valor2 + valor3 + valor4;
	media = soma / 4;
	produto = valor1 * valor2 * valor3 * valor4;
	
	printf("Soma = %lf\n", soma);
	printf("Media = %lf\n", media);
	printf("Produto = %lf\n", produto);

  break;
}
  case '6': {
  int dias, anos, meses, resto;

  printf("\nVOCE ENTROU NO EXERCICIO 6!\n");
	printf("\n");

  printf("Digite a sua idade em dias: ");
  scanf("%d", &dias);

  anos = dias / 365;
  resto = dias % 365;
  meses = resto / 30;
  resto = resto % 30;

  printf("%d ano(s)\n", anos);
  prinf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);

  break;
}
  case '7': {
  double R, volume;
  double pi = 3.14159;

  printf("\nVOCE ENTROU NO EXERCICIO 7!\n");
	printf("\n");

  printf("Digite o raio: ");
  scanf("%lf", &R);

  volume = (4.0/3.0) * pi * R * R * R;

  printf("VOLUME = %.3lf\n", volume);
  
  break;
}
  case '8': {

	int x1, x2, y1, y2;
	float dist, cat1, cat2;
	
	printf("\nVOCE ENTROU NO EXERCICIO 8!\n");
	printf("\n");
	
	printf ("\nEntre com os valores para P1(x1,y1):\n");
	printf("x1:");
	scanf("%d", &x1);
	
	printf("y1:");
	scanf("%d", &y1);
	
	printf ("\nEntre com os valores para P2(x2,y2):\n");
	printf("x2:");
	scanf("%d", &x2);
	
	printf("y2:");
	scanf("%d", &y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("A distancia =%f", dist);
	break;
	}
	}
	return 0;
}
