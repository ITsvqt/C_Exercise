#include <stdio.h>

int main(){
    int iEarthDays = 0;
    printf("Enter amount of Earth days:\n");
    scanf("%i",&iEarthDays);
    printf("%d\n",iEarthDays);

    float fEarthYears =  (float)iEarthDays / 365;
    float fJupiterYears = fEarthYears / 12;

    printf("Jupiter years:\n%.9f",fJupiterYears);
    return 0;
}