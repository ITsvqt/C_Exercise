#include <stdio.h>


const int DAYS_IN_YEAR = 365;
const int ONE_YEAR_ON_JUPITER = 12;

int main()
{
    int iEarthDays = 0;

    printf("Enter amount of Earth days:\n");
    scanf("%i",&iEarthDays);

    float fEarthYears =  (float)iEarthDays / DAYS_IN_YEAR;
    printf("%f\n",fEarthYears);
    
    float fJupiterYears = fEarthYears / ONE_YEAR_ON_JUPITER;
    printf("Jupiter years:\n%.9f",fJupiterYears);

    return 0;
}