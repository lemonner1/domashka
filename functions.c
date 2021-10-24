#include <stdio.h>
#include <math.h> // Стандартная математическая библиотека
#include <stdlib.h>
#include <time.h>
#include "functions.h"

// ДЗ на 1-й модуль 

void ex1(float p1, float p2, float p3)
{
	float L;

	L = (sqrt(exp(p1) - pow(cos(pow(p1, 2)* pow(p2, 5)), 4)) + pow(atan(p2 - pow(p1, 5)), 4)) / (exp(1) * sqrt(fabs(p2 + p1 * pow(p3, 4))));

	printf("%f", L);
}
void ex2(double par)
{
	double v;

	v = 3 * pow(par, 2) - 6 * par;

	printf("%f", v);
}
void ex3(double a, double b, double c)
{
	double x1, x2;
	float Determ;

	Determ = b * b - 4 * a * c;

	if (Determ > 0)
	{
		x1 = (-b - sqrt(Determ)) / (2 * a);
		x2 = (-b + sqrt(Determ)) / (2 * a);
		printf("x1 = %f, x2 = %f", x1, x2);
	}

	if (Determ == 0)
	{
		x1 = -b / (2 * a);
		printf("x = %f", x1);
	}
	else
		printf("no corny!");
}
float ex4(int s, float t)
{
	switch (s)
	{
	case 48:
		return 15 * (t / 60);
	case 44:
		return 18 * (t / 60);
	case 46:
		return 13 * (t / 60);
	case 45:
		return 11 * (t / 60);
	default:
		printf("error");
		break;
	}

	return 0;
}
void ex5(int number, int summa)
{
	for (int i = 1000; i <= 9999; i++)
	{
		number = i;
		summa = 0;

		for (int j = 0; j <= 3; j++)
		{
			summa += pow(number % 10, 4);
			number /= 10;
		}

		if (summa == i)
		{
			printf("%d", i);
		}
	}
}
void ex6(int* bin, int N)
{
	int i = 0;
	int dec = 0;
	int n = N - 1;

	while(i < N)
	{
		dec += bin[i] * pow(2, n);
		i++;
		n--;
	}
	printf("%d", dec);
}
void ex7(int a1, int a2)
{
	int* dynmass = malloc(a1 * a2 * sizeof(int));
	srand(time(NULL));

	for (int l = 0; l < a1 * a2; l++)
	{
		dynmass[l] = rand() % 21 - 10;
	}
	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < a2; j++)
		{
			printf("%d ", dynmass[i * a2 + j]);
		}
		printf("\n");
	}
}