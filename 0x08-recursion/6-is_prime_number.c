#include "main.h"

int _isPrime(int n, int i);

/**
 * is_prime_number - returns 1 if prime and 0 if not
 * @n: the number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (_isPrime(n, (n / 2) + 1));

}

/**
 * _isPrime - helper function
 * @n: the number
 * @i: mid
 * Return: 1 or 0
 */
int _isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_sqrt(n, i - 1));
}
