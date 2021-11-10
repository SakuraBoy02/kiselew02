#include <stdio.h>
#include <math.h>

double f(double x)
{
    return -3.0 * cos(x);
}

int main()
{
    double a,b;
    printf("a, b: ");
    scanf("%lf %lf", &a, &b);

    double e;
    printf("e: ");
    scanf("%lf", &e);
    while (1)
    {
        double c = (a + b) / 2.0;

        double fa = f(a);
        double fc = f(c);

        printf("%f %f %f\n", fa, fc, c);
        int count;
        

        if (fabs(fc) <= e)
        {
            printf("x: %.5lf\n", c);
            printf("y: %.5lf\n", fc);

            //count++;
            //printf("Steps: %d\n", count);
            break;
        }
        if (fa * fc > 0.0)
            a = c;
        else
            b = c;

        count = count(fc);
        printf("Steps: %d\n", count);
    }
    return 0;
}