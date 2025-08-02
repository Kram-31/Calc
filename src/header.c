#include "../include/header.h"
#include <string.h>
#include <stdio.h>

void ft_addition()
{
	int a = 0;
	int b = 0;
	
	printf("\n----TYPE n1 AND n2-----\n");
	scanf("%d", &a);
	scanf("%d", &b);
    // Pass the integers to the function
	int result = a + b;
	printf("The sum is: %d\n", result);
}

void ft_mul()
{
	int a = 0;
	int b = 0;
	
	printf("\n----TYPE n1 AND N2----\n");
	scanf("%d", &a);
	scanf("%d", &b);
    // Pass the integers to the function
	int result = a * b;
	printf("The mul is: %d\n", result);

}

void ft_sous()
{
	int a = 0;
	int b = 0;
	
	printf("\n----TYPE n1 AND N2----\n");
	scanf("%d", &a);
	scanf("%d", &b);
    // Pass the integers to the function
	int result = a - b;
	printf("The sous is: %d\n", result);

}

void ft_div()
{
	int a = 0;
	int b = 0;
	
	printf("\n----TYPE n1 AND N2----\n");
	scanf("%d", &a);
	scanf("%d", &b);
    // Pass the integers to the function
	int result = a / b;
	printf("The div is: %d\n", result);

}
void ft_mod()
{
	int a = 0;
	int b = 0;
	
	printf("\n----TYPE n1 AND N2----\n");
	scanf("%d", &a);
	scanf("%d", &b);
    // Pass the integers to the function
	int result = a % b;
	printf("The mod of %d and %d is: %d\n", a, b, result);

}
