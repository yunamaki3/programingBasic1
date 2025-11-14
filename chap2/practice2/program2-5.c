#include <stdio.h>
int main()
{
    double x = 12.34567;
    printf("%f\n", x);
    printf("%2.4f\n", x);
    printf("%.3f\n", x);
    printf("%2.0f\n", x);
    printf("%3.1f\n", x);
    printf("%e\n", x);
    printf("%.2e\n", x);
    
    int a = 10;
    printf("a = %f\n", a);
    printf("a = %f\n", (double)a);
}
