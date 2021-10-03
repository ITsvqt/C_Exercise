#include <stdio.h>

int main(){
    int iOunces_Ordered = 0;
    
    printf("Enter how much ounces you want:\n");
    scanf("%i",&iOunces_Ordered);

    printf("Total cups:\n%i",iOunces_Ordered/8);


    return 0;
}