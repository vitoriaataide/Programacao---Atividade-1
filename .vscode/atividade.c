#include <stdio.h>
int main(){

#define PI 3.141

int num1, num2, soma;
//1ª questão: Fazer a soma de dois números inteiros.
printf("1ª QUESTÃO \n " );
printf("Vamos calcular a soma de dois números inteiros! \n");

printf ("Digite o primeiro número inteiro: ");
scanf("%d", &num1);

printf("Digite o segundo número inteiro: ");
scanf("%d", &num2);

soma = num1 + num2;

printf("A soma de %d e %d é %d\n", num1, num2, soma);
printf("\n");

//2ª questão: Fazer a multiplicação de dois números inteiros.

int produto;

printf("2ª QUESTÃO \n " );

printf("Vamos calcular o produto de dois números inteiros.\n");

printf ("Digite o primeiro número inteiro: ");
scanf("%d", &num1);

printf("Digite o segundo número inteiro: ");
scanf("%d", &num2);

produto = num1 * num2;

printf("O produto de %d e %d é %d\n", num1, num2, produto);
printf("\n");

//3ª questão: Fazer a média de três números inteiros.
float media;
int num3;

printf("3ª QUESTÃO \n " );
printf("Vamos calcular a média aritmética de três números inteiros! \n");

printf ("Digite o primeiro número inteiro: ");
scanf("%d", &num1);

printf("Digite o segundo número inteiro: ");
scanf("%d", &num2);

printf("Digite o terceiro número inteiro: ");
scanf("%d", &num3);

media = (num1 + num2 + num3) /3.0;

printf("A média de %d, %d e %d é %.2f\n", num1, num2, num3, media);
printf("\n");

//4ª questão:Calcular a área de um retângulo.

printf("4ª QUESTÃO \n");
float largura, altura, area;
printf("Vamos calcular a área de um retângulo! \n");

printf("Escolha um número para ser a largura do retângulo: ");
scanf("%f", &largura);

printf("Escolha um número para ser a altura do retângulo: ");
scanf("%f", &altura);

area = largura*altura;

printf("A área do retângulo com largura %.2f e altura %.2f é %.2f\n", largura, altura, area);
printf("\n ");
 
// 5ª questão: Calcular a área de um triângulo.

float base, area_triangulo;

printf("5ª QUESTÃO \n");
printf("Vamos calcular a área de um triângulo! \n");

printf("Escolha um número para ser a base do triângulo: ");
scanf("%f", &base);

printf("Escolha um número para ser a altura do triângulo: ");
scanf("%f", &altura);

area_triangulo= (base*altura)/2.0;

printf("A área do triângulo com base %.2f e altura %.2f é %.2f\n", base, altura, area_triangulo);
printf("\n");

// 6ª questão: Calcular a área de um círculo.
 float raio, area_circulo;

printf("6ª QUESTÃO \n");
printf("Vamos calcular a área de um círculo! \n");

printf("Escolha um número para ser o raio do círculo: ");
scanf("%f", &raio);

area_circulo= PI * raio * raio;

printf("A área do círculo com raio %.2f é %.2f\n ", raio, area_circulo);
printf("\n");

// 7ª questão: Calcular o perímetro de um círculo.

float perimetro;

perimetro = 2 * PI * raio; 
printf("7ª QUESTÃO \n");
printf("Vamos calcular o perímetro de um círculo.");



return 0;
}