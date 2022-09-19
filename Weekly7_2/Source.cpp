#include<stdio.h>//65010536
int isPrime(int x)
{
	int n = 0;
	if (x <= 1)
	{
		return 1;
	}
	for (int i = 1; i <= x ; i++)
	{
		if (x % i == 0)
		{
			n++;
		}
	}
	if (n == 2)
	{
		return 1;
	}
}
int main()
{
	int a;
	printf(" Enter Your Number : ");
	scanf_s("%d", &a);
	if (isPrime(a) == 1)
	{
		printf(" : Is prime number");
	}
	else
	{
		printf(" : Is not prime number");
	}
	return 0;
}