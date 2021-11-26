#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rows = 0;
	scanf("%d", &rows);
	#define cols 5

	int tab[rows][cols];

	#define mark0 1
	#define mark1 10

	for(int y = 0; y < rows; y++)
		for(int x = 0; x < cols; x++)
			tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

	float avg[rows];	
	for(int y = 0; y < rows; y++)
	{
		int s = 0;
		for(int x = 0; x < cols; x++)
		{
			s += tab[y][x];
		}
		avg[y] = s / (float)cols;
	}

	int c = 0 ;
	float highmark = avg[0];
	for(int q = 1; q < rows; q++ )
	{
		if (highmark < avg[q])
		{
			highmark = avg[q];
			c = q+1;
		}
	}

	printf("num");
	for(int x = 0; x < cols; x++)
	{
		printf("\t%d", x + 1);
	}

	printf("\tavg\n");

	for(int y = 0; y < rows; y++)
	{
		printf("%d", y + 1);
		for(int x = 0; x < cols; x++)
		{
			printf("\t%d", tab[y][x]);
		}
		printf("\t%.1f\n", avg[y]);
	}
	printf("The number of the athlete with the best result: %d\n", c);


return 0;
}