#include <stdio.h>
#include <stdlib.h>

int is_divisible(long long int x, long long int y)
{
	return x % y == 0;
}

int is_prime(long long int number)
{
	for (long long int factor = 2; factor < number; factor++) {
		if (is_divisible(number, factor)) {
			return 0;
		}
	}
	return 1;
}

void print_factors(long long int number)
{
	for (long long int factor = 1; factor <= number; factor++) {
		if (is_divisible(number, factor)) {
			printf(" %lld", factor);
		}
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	long long int number = atoll(argv[1]);
	if (is_prime(number)) {
		printf("%lld is prime. Factors: 1 %lld\n", number, number);
		return 0;
	}
	printf("%lld is composite. Factors:", number);
	print_factors(number);
	return 0;
}
