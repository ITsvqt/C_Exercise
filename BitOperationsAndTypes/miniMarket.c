#include <stdio.h>


int main (){
    double dTomatoPrice = 4.5;
    double dFlourPrice = 1.8;
    double dYogurtPrice = 0.5;
    double dIceCreamPrice = 0.6;
    double dCandyPrice = 1.5;
    double dLolipopPrice = 0.15;

    unsigned int uiUserChoise = 0;
    float fAmount = 0.0;
    double dMoneyOwned = 0 ;
    printf("1 - tomato (%.2lf lv.) for 1kg\n",dTomatoPrice);
    printf("2 - flour (%.2lf lv.) for 1 kg\n",dFlourPrice);
    printf("3 - yogurt (%.2lf lv.) each",dYogurtPrice);
    printf("4 - ice cream (%.2lf lv.) each\n",dIceCreamPrice);
    printf("5 - candy (%.2lf lv.) for 1 kg\n",dCandyPrice);
    printf("6 - lolipop (%.2lf lv.) each\n",dLolipopPrice);
    printf("9 - to exit\n");
    printf("Enter what you want :\n");
    scanf("%d", &uiUserChoise);
    if(uiUserChoise > 0 && uiUserChoise < 7)
    {
        printf("Enter amount :\n");
        scanf("%f", &fAmount);
    }else{
        return 0;
    }
   
    while(uiUserChoise != 9)
    {
        switch(uiUserChoise){
            case 1:

            break;

            case 2:

            break;

            case 3:

            break;
            case 4:

            break;
            case 5:

            break;

            case 6:

            break;

            default:
                printf("Not a valid selection. Try again .");
            break;
        }
        printf("Enter product code:\n");
        scanf("%d",&uiUserChoise);
        while(fAmount <= 0){
            printf("Enter amount:\n");
            scanf("%d", &fAmount);
            if(fAmount <=0)
                printf("Please enter positve amount.\n");
        }
       
    }



    return 0;
}