#include <stdio.h>

int main(){
    float weight_In_Kilograms = 0.0f;

    printf("Enter you'r weight in kilograms:\n");
    scanf("%f",&weight_In_Kilograms);

    printf("You'r weight on the moon is:\n%.2f",(weight_In_Kilograms*17)/100);

    return 0;
}