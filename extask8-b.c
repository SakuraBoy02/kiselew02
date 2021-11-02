#include <stdlib.h>
#include <stdio.h>

int main()
{
#define months 12
int salary [months];

#define salary_low 1000
#define salary_high 5000

for (int i = 0; i < months; i++)
salary[i] = salary_low + rand() % (salary_high - salary_low + 1);

for (int i = 0; i < months; i++)
printf("% 6d", (i + 1));

printf("\n");

for (int i = 0; i < months; i++)
printf("% 6d", salary[i]);

int year_sum = 0;
for (int i = 0; i < months; i++)
    year_sum += salary[i];

float year_avg = year_sum / (float) months;

//float dev = salary - year_avg;
///for (int i = 0; i < months; i++)
//printf("% 6f", dev);
int dev = 0;
for (int i = 0; i < months; i++)
    dev = salary[i] - year_avg;


printf("\n");



printf(" "); 

float year_tax = 0.0f;
for (int i = 0; i < months; i++)

{
    float tax = salary[i]* 0.02f; // take 2%
    year_tax += tax;
    printf("% 6.1f", tax);
} 
printf("\n");

for (int i = 0; i < months; i++)
printf("% 6d", dev);

printf("\n");



//int year_sum = 0;
//for (int i = 0; i < months; i++)
    //year_sum += salary[i];
printf("year_sum = %d\n", year_sum);

//float year_avg = year_sum / (float) months;
printf("year_avg = %.2f\n", year_avg);

printf("year_tax = %.2f\n", year_tax);
    
return 0;
}