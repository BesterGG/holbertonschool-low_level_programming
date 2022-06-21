#include "main.h"
/**
 * _sqrtm - aditional function to sqrt
 * @num1: num
 * @num2: num
 * Return: num
*/
int _sqrtm(int num1, int num2)
{
if (num1 * num1 > num2)
{
return (-1);
}
if (num1 * num1 == num2)
{
return (num1);
}
return (_sqrtm(num1 + 1, num2));
}
/**
 * _sqrt_recursion
 * @n: num
 * Return: num
*/
int _sqrt_recursion(int n)
{
int num3 = 1;
return (_sqrtm(num3, n));
}

