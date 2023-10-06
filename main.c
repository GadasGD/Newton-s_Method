#include <stdio.h>
#include <math.h>


int main()
{
    const double eps = 0.0001;
    double n;
    printf("n = ");
    scanf_s("%lf", &n);
    double x = 1.0;
    double err;
    do
    {
        double xtmp = (x + n / x) / 2;
        err = fabs(x - xtmp);
        x = xtmp;
    } while (err > eps);
    printf("sqrt(%lf) = %lf", n, x);
    return 0;
}