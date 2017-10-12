#include<stdio.h>
#include<math.h>

int main()
{
	int guess = 0;
	// triangle
	char answer;
	printf("Is it a triangle or not --> test?\ny/n: ");
	scanf("%c", &answer);
	getchar();
	while (answer != 121 && answer != 110)
	{
		printf("Wrong input! Try again!\ny/n: ");
		scanf("%c", &answer);
		getchar();
		guess++;
		if (answer == 121 || answer == 110)
		{
			break;
		}
		if (guess == 1)
		{
			printf("Be careful! This is your last chance..\ny/n: ");
			scanf("%c", &answer);
			getchar();
			if (answer == 121 || answer == 110)
			{
				break;
			}
			else
			{
				printf("Bad luck!\n");
				printf("Try again after 3 hours..\n");
				break;
			}
		}
	}
	if (answer == 121)
	{
		float a, b, c;
		printf("Enter a: ");
		scanf("%f", &a);
		printf("Enter b: ");
		scanf("%f", &b);
		printf("Enter c: ");
		scanf("%f", &c);
		if ((a + b > c&&c > a - b))
		{
			printf("It's a triangle...\n");
			if (a > b && a > c)
			{
				if (pow(b, 2) + pow(c, 2) == pow(a, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("A is the biggest side: %.2f\n", a);
			}
			if (b > a && b > c)
			{
				if (pow(a, 2) + pow(c, 2) == pow(b, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("B is the biggest side: %.2f\n", b);
			}
			if (c > a && c > b)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					printf("Triangle has 90 degrees!\n");
				}
				else
				{
					printf("But doesn't have 90 degrees!\n");
				}
				printf("C is the biggest side: %.2f\n", c);
			}
			if (a == b && a == c && b == c)
			{
				printf("But doesn't have 90 degrees!\n");
				printf("Every sides are equal!\n");
			}
		}
		else
		{
			printf("It's not a triangle!\n");
		}
	}
}
