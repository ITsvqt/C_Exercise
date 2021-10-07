#include <stdio.h>

int main()
{
    int iNumberOfCampersPerDay = 3;
    int iNumberOfCaravansPerDay = 3;

    double dCamperPrice = 90.0;
    double dCaravanPrice = 100.0;

    double dMoneyOwned = 0;
    unsigned char cClientChoise = 0;
    printf("Would you like a caravan or a camper ?\n");
    printf("1 - Camper\n");
    printf("2 - Caravan\n");
    printf("Enter your choise: \n");
    scanf("%d", &cClientChoise);
    printf("-----------------------------\n");


    while(!(iNumberOfCaravansPerDay == 0 && iNumberOfCampersPerDay == 0))
    {
        
        switch (cClientChoise)
        {
            case 1:
            if(iNumberOfCampersPerDay > 0)
            {
                 dMoneyOwned += dCamperPrice;
                 iNumberOfCampersPerDay--;
            }  
            else
            {
                printf("No more campers available. Plese try buying caravan.\n");
            }
            break;

            case 2:
            if(iNumberOfCaravansPerDay > 0)
            {
                dMoneyOwned += dCaravanPrice;
                iNumberOfCaravansPerDay--;
            }
            else
            {
                printf("No more caravans available. Plese try buying camper.\n");
            }
            break;

            default:
                printf("Invalid choise. Plese try again\n");
            break;
        }

        printf("You have requested to hire %d campers and %d caravans.\n", (3 - iNumberOfCampersPerDay), (3 - iNumberOfCaravansPerDay));
        printf("Owning totaly of: %.2lf\n\n", dMoneyOwned);

        printf("Type \'9\' if you want to proceed to checkout or 1- Camper 2-Caravan\n");
        printf("-----------------------------\n");
        printf("Enter your choise:\n");
        scanf("%d", &cClientChoise);
        printf("-----------------------------\n");

        if(cClientChoise == 9) break;
    }
    if(iNumberOfCampersPerDay == 0 && iNumberOfCaravansPerDay == 0)
        printf("We ran out. That was all for today.\n");
        
    printf("That will be %.2lf thank you.", dMoneyOwned);
    return 0;
}