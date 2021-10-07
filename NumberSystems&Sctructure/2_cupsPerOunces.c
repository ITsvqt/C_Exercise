#include <stdio.h>

const int OUNCES_PER_CUP = 8;

int main(){
    int iOunces_Ordered = 0;
    
    printf("Enter how much ounces you want:\n");
    scanf("%i",&iOunces_Ordered);

    int totalCups = iOunces_Ordered/OUNCES_PER_CUP;
    printf("Total cups:\n%i",totalCups);

    return 0;
}