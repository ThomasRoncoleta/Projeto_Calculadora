#include <stdio.h>
#include <locale.h>

/*Elabore um programa que leia dois n�meros reais do usu�rio e o tipo de opera��o desejada para estes n�meros,
conforme tabela abaixo. Feito isso o programa deve utilizar uma fun��o chamada calcular, que possuir� 
3 par�metros, os dois primeiros s�o n�meros reais e o �ltimo � o tipo de opera��o desejada, a fun��o deve
retornar o resultado do c�lculo escolhido. O programa principal deve exibir o resultado da fun��o.*/

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
	printf("\n2) Subtra��o");
	printf("\n3) Divis�o");
	printf("\n4) Multiplica��o");
	printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
	
	printf("\n- Qual opera��o voc� deseja realizar ?: ");
	scanf("%i", &operacao);
	
	if (operacao == 1)
	{
	printf("\n\nDigite os dois n�meros da seguinte forma: \n\n Exemplo: _ + _ = resultado \n\n");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado �: %.2f", r);
	printf("\n");
	}
	else if (operacao == 2)
	{
	printf("\n\nDigite os dois n�meros da seguinte forma: \n\n Exemplo: _ - _ = resultado ");
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado �: %.2f", r);
	printf("\n");
	}
		if (operacao == 3)
	{
	printf("\n\nDigite os dois n�meros da seguinte forma: \n\n Exemplo: _ / _ = resultado ");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado �: %.2f", r);
	printf("\n");
	}
		if (operacao == 4)
	{
	printf("\n\nDigite os dois n�meros da seguinte forma: \n\n Exemplo: _ x _ = resultado \n");
	scanf("%f", &A);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &B);
	
	r = calcular(A, B, operacao);
	
	printf("\nO resultado �: %.2f", r);
	printf("\n");
	}
	
	
	return 0;
}
