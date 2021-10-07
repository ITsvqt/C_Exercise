#include <stdio.h>

double circleArea(double r);
double elipseArea(double a, double b);

const double Pi = 3.14159265359;

int main()
{
    printf("------------------------\n");
    printf("%lf\n",circleArea(1));
    printf("%lf\n",circleArea(1.5));
    printf("%lf\n",circleArea(13));
    printf("------------------------\n");
    printf("%lf\n",elipseArea(10,17.5));
    printf("%lf\n",elipseArea(20.5,10));
    printf("%lf\n",elipseArea(13,220));
    return 0;
}

double circleArea(double r){return Pi * r * r;}

double elipseArea(double a, double b){return Pi * a * b;}
