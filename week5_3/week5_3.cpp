#include<stdio.h>
int main()
{
	int input1 = 0;
	int input2 = 0;
	int sum = 1;
	int i = 2;
	scanf_s("%d%d", &input1, &input2);
	while (1)
	{
		while (input1 % i == 0 && input2 % i == 0)
		{
				input1 /= i;
				input2 /= i;
				sum *= i;
		}
		i++;
		if (i > input1 && i > input2)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}