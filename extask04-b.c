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
    int i = 0;

    printf("e: ");
    scanf("%lf", &e);
    while (1)
    {
        double c = (a + b) / 2.0;

        double fa = f(a);
        double fc = f(c);

        
        i += 1;

        printf("%f %f %f\n", fa, fc, c);

        if (fabs(fc) <= e)
        {
            printf("x: %.5lf ", c);
            printf("y: %.5lf\n", fc);
            break;
        }
        if (fa * fc > 0.0)
            a = c;
        else
            b = c;

    }
    printf("Steps: ");
    printf("%d\n", i);
    return 0;
}