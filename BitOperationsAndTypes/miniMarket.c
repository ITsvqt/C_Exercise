#include <stdio.h>


int main (){
    float fTomatoPrice = 4.5;
    float fFlourPrice = 1.8;
    float fYogurtPrice = 0.5;
    float fIceCreamPrice = 0.6;
    float fCandyPrice = 1.5;
    float fLolipopPrice = 0.15;

    unsigned int uiUserChoise = 0;
    float fAmount = 0.0;
    float fMoneyOwned = 0.0 ;
    printf("1 - tomato (%.2lf lv.) for 1kg\n",fTomatoPrice);
    printf("2 - flour (%.2lf lv.) for 1 kg\n",fFlourPrice);
    printf("3 - yogurt (%.2lf lv.) each",fYogurtPrice);
    printf("4 - ice cream (%.2lf lv.) each\n",fIceCreamPrice);
    printf("5 - candy (%.2lf lv.) for 1 kg\n",fCandyPrice);
    printf("6 - lolipop (%.2lf lv.) each\n",fLolipopPrice);
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
                fMoneyOwned += fTomatoPrice * fAmount;
            break;
            case 2:
                fMoneyOwned += fFlourPrice * fAmount;
            break;
            case 3:
                fMoneyOwned += fYogurtPrice * fAmount;
            break;
            case 4:
                fMoneyOwned += fIceCreamPrice * fAmount;
            break;
            case 5:
                fMoneyOwned += fCandyPrice * fAmount;
            break;
            case 6:
                fMoneyOwned += fLolipopPrice * fAmount;
            break;

            default:
                printf("Not a valid selection. Try again .");
            break;
        }
        printf("Enter code:\n");
        scanf("%d",&uiUserChoise);
        if(uiUserChoise == 9)
            continue;
        printf("Enter amount:\n");
        scanf("%f", &fAmount);
        while(fAmount <= 0){
            printf("Enter valid amount:\n");
            scanf("%d", &fAmount);
        }
       
    }
    printf("Total: %.2f\n",fMoneyOwned);



    return 0;
}