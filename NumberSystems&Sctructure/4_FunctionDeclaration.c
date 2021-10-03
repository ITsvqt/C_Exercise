#include <stdio.h>

int addDigit(int a, int b);

int main(){
    int a =5 , b = 10;
    printf("Res = %d",addDigit(a,b));
}

int addDigit(int a, int b) 
{
    return (a + b);
}