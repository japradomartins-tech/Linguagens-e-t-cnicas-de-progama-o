#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159


int main(int argc, char *argv[]) {
	char escolha;
	printf("| 1 | EXERCICIO 1 - \n");
	printf("\n| 2 | EXERCICIO 2 - \n ");
	printf("\n| 3 | EXERCICIO 3 - \n ");
	printf("\n| 4 | EXERCICIO 4 - \n");
	printf("\n| 5 | EXERCICIO 5 - \n ");
	printf("\n| 6 | EXERCICIO 6 - \n");
	printf("\n| 7 | EXERCICIO 7 -\n ");
	printf("\n| 8 | EXERCICIO 8 - \n  ");
	printf("\n| 9 | EXERCICIO 9 - \n  ");
  printf("\n| 10 | EXERCICIO 10 - \n ");
	
  printf("\nESCOLHA QUAL EXERCICIO DESEJA VER: \n ");
  scanf("%c", &escolha);
    
  switch  (escolha){
  case'1':{

  int idade, anoAtual, anoNascimento, anoNascimentoProx;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);

  anoNascimento = anoAtual - idade;
  anoNascimentoProx = anoAtual - idade - 1;

  break;
}
  case'2':{

  float k, m;

  printf("Digite a velocidade em km/h: ");
  scanf("%f", &k);

  m = k / 3.6;

  printf("A velocidade em m/s é: %.2f\n", m);

  break;
}
  case'3':{

  float reais, cotacao, dolares;

  printf("Digite o valor em reais (R$): ");
  scanf("%f", &reais);

  printf("Digite a cotacao do dolar: ");
  scanf("%f", &cotacao);

  dolares = reais / cotacao;

  printf("O valor correspondente em dolares é: $%.2f\n", dolares);

  break;
}
  case'4':{

  float f, c;

  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &c);

  f = c * (9.0 / 5.0) + 32.0;

  printf("A temperatura em Fahrenheit é: %.2f\n", f);

  break;
}
  case'5':{

  float g, r;
  float p = 3.141592;

  printf("Digite o angulo em graus: ");
  scanf("%f", &g);

  r = g * p / 180.0;

  printf("O angulo em radianos é: %.6f\n", r);

  break;
}
  case'6':{

  int num, ant, suc;
	printf("Digite o valor n: ");
	scanf("%d", &num);
	suc = num+1;
	ant = num-1;
	printf("o numero %d, seu antecesor %d e seu sucessor %d", num, ant, suc);

  break;
}
  case'7':{

  float total = 780000.00;
  float primeiro, segundo, terceiro;

  primeiro = total * 0.46;
  segundo = total * 0.32;
  terceiro = total - (primeiro + segundo);

  printf("Primeiro ganhador (46%%): R$ %.2f\n", primeiro);
  printf("Segundo ganhador (32%%): R$ %.2f\n", segundo);
  printf("Terceiro ganhador (restante): R$ %.2f\n", terceiro);

  break;
}
  case'8':{

  int seg, min, h;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &seg);
	
	min = seg / 60;
	seg = seg % 60;
	h = min / 60;
	min = min % 60;
	
	printf("horas: %d minutos: %d segundos: %d", h, min, seg);

  break;
}
  case'9':{

  float aut, t, Vm, d, L;
	
	printf("Digite o tempo gasto na viagem em horas: ");
	scanf("%f", &t);
	
	printf("Digite a velocidade media em (Km/h): ");
	scanf("%f", &Vm);
	
	aut = 12;
	
	d = t * Vm;
	
	L = d / aut;
	
	printf("O total gasto vai ser de %.3fL", L);

  break;
}
  case'10':{

  int a, b, c, maior, maior_temp;
	
	printf("Digite tes valores para identificar o maior: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp = ( (a + b + abs(a - b) ) / 2 );
	
	maior = ( (maior_temp + c + abs(maior_temp - c) ) / 2 );
	
	printf("O maior numero dentre %d, %d, %d e = %d", a, b , c, maior);

  break;
  }
  }
  return 0;
}  
