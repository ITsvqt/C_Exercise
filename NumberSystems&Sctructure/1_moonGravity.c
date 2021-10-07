#include <stdio.h>

const float WEIGHT_ON_THE_MOON = (float)17/100;

int main(){
    float weight_In_Kilograms = 0.0;

    printf("Enter your weight in kilograms:\n");
    scanf("%f",&weight_In_Kilograms);

    float actualWeight = (weight_In_Kilograms * WEIGHT_ON_THE_MOON);
    printf("Your weight on the moon is:\n%.2f", actualWeight);

    return 0;
}
