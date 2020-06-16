#include <stdio.h>
#include <math.h>
//Павлушин Александр
void solution1();
void solution2();

void menu();
int main()
{
	int n;
	int sel = 0;
	do
	{
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		
		case 0:
			printf("Bye-bye");
			break;
		default:
			printf("Wrong selected\n");
		}
	} while (sel != 0);
	return 0;
}
void solution1()
{
	printf("Solution 1\n");
	// Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.	// Решение
	int n;
	printf("Input number: ");
	scanf("%d", &n);
	printf("Result: %d\n", Func(n));
}


void solution2()
{
	printf("Solution 2 - a^b \n");
	//Реализовать функцию возведения числа a в степень b:	// Решение
	int a, b, i;
	int c = 1;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	
	if (b == 0)
		return 1;
	else
	{
		for ( i = 1; i <= b; i++)
		{
			return c = c * a;
		}
	}
	printf("Result: %d\n", c);
	printf("Result: %d\n", Func2(a,b));
}

void menu()
{
	printf("1 - task1  \n");
	printf("2 - task2  \n");
	

	printf("0 - exit\n");
}

int Func(int n)
{
	if (n / 2 == 0)
	{
		return n % 2;
	}
	
	return Func(n / 2) * 10 + n % 2;
}

int Func2(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}

	
	return a * Func(a, b-1);
}
