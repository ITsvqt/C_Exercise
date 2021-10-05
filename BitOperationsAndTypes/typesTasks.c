#include <stdio.h>

int main()
{

//6.
    char a = -127;
    unsigned char b = 255;
    int c = 63498;
    unsigned int d = 4294967291;
    long long  e = -9000000000000775845;

    printf("%d, %u, %d, %u, %lld\n", a, b, c, d, e);

//7.
    int f = 24212;
    int g = -1357674;
    int h = 1357674;
    int j = -1357674000;
    unsigned int k = 3657895000;
    printf("%d, %d, %d, %d, %u\n", f, g, h, j, k);

//8.
    char x = 8;
    x = x - 2;
    x = x + 6;
    x = x - 10 + 2;

    printf("%d\n",x);


//9.

    double l = 4.9876543;
    double m = 7.123456789012345678890;
    double n = 18398458438583853.28;
    double o = 18398458438583853.39875937284928422;

    printf("%.8lf, %.20E, %.4lf, %.4lf", l, m, n, o);


    return 0;
}
