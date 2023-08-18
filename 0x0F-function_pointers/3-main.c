#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers a and b.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers a and b.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Prints a product of two numbers a and b.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The product of a multiplyed by b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Prints division of two numbers a and b.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Prints remainder of two numbers a and b.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The remainder of a devided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

