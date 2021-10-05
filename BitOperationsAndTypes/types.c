#include<stdio.h>

void bin(unsigned int decNumber);

int main(){
    //1.
    //printf("%d\n", (char)(255 + 10));  // [-128, +127] 255 - 128 = 127 ; -128 + 127 = -1; -1+ 10 = 9;
    //printf("%d\n", (unsigned char)(255 + 10)); // [0,255] 255 ; 255 + 1 = 0; 1 + (10 - 1) = 9;

///////////////////////////////////////////////////////////

    //2.
    printf("2.\n");
    bin(255);
    printf("+\n");
    bin(10);
    printf("--------\n");
    bin((char)(255+10));

    printf("\n");
    printf("\n");

///////////////////////////////////////////////////////////

    //3.
    printf("3.\n");
    unsigned char z = 0;
    char a= -10;
    bin(z);
    printf("+\n");
    bin(a);
    printf("--------\n");
    z = z + a;
    bin(z);

    printf("\n");
    printf("\n");

///////////////////////////////////////////////////////////

    //4.
    printf("4.\n");
    char x = -127;
    char y = 10;
    bin(x);
    printf("+\n");
    bin(y);
    x = x + y;
    bin(x);
    printf("\n");
    printf("\n");

///////////////////////////////////////////////////////////
    return 0;
}

void bin(unsigned int decNumber){
    unsigned int i = 1;
    unsigned int totalBits = 32 - 1; // + 1 later
    for(i= 1 << totalBits / 4; i> 0; i = i >> 1){
        (decNumber & i)? printf("1") : printf("0");
    }
    printf("  (%d)\n",decNumber);
}