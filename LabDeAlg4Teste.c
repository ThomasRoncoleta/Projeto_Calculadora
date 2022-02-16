#include <stdio.h>
#include <locale.h>

/*Elabore um programa que leia dois números reais do usuário e o tipo de operação desejada para estes números,
conforme tabela abaixo. Feito isso o programa deve utilizar uma função chamada calcular, que possuirá 
3 parâmetros, os dois primeiros são números reais e o último é o tipo de operação desejada, a função deve
retornar o resultado do cálculo escolhido. O programa principal deve exibir o resultado da função.*/

float calcular (float X, float Y, int op)
{
	float resultado;
	
		switch (op)
		{
			case 1:
				resultado = X + Y;
			break;	
			case 2:
				resultado = X - Y;
			break;
			case 3:
				resultado = X / Y;
			break;
			case 4:
				resultado = X * Y;
			break;
		}
		
		system ("color A");
		
		return resultado;
}

int main ()
{
	setlocale (LC_ALL,"");
	
	system ("color B");
	
	int operacao;
	float A, B;
	float r;
	
	printf("____________________________________________________CALCULADORA EM C____________________________________________________");
	
	printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n1) Soma");
	printf("\n2) Subtração");
	printf("\n3) Divisão");
	printf("\n4) Multiplicação");
	printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("\n- Qual operação você deseja realizar ?: ");
	scanf("%i", &operacao);
	
	if (operacao == 1)
	{
	printf("\n\nDigite os dois números da seguinte forma: \n\n Exemplo: _ + _ = resultado \n\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado é: %.2f", r);
	printf("\n");
	}
	else if (operacao == 2)
	{
	printf("\n\nDigite os dois números da seguinte forma: \n\n Exemplo: _ - _ = resultado ");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado é: %.2f", r);
	printf("\n");
	}
		if (operacao == 3)
	{
	printf("\n\nDigite os dois números da seguinte forma: \n\n Exemplo: _ / _ = resultado ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado é: %.2f", r);
	printf("\n");
	}
		if (operacao == 4)
	{
	printf("\n\nDigite os dois números da seguinte forma: \n\n Exemplo: _ x _ = resultado \n");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado é: %.2f", r);
	printf("\n");
	}
	
	
	return 0;
}
