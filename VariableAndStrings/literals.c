#include <stdio.h>

void fourBitNumber();
void eightBitNumber();
void stringIteration();
void mirrorCopy();
void replaceCharecters();
void lowerCase();

int main()
{
    fourBitNumber();
    eightBitNumber();
    stringIteration();
    mirrorCopy();
    replaceCharecters();
    lowerCase();
    return 0;
}

void fourBitNumber()
{
    char fourBitNumber [4] ="";
    float fResult = 0.0;
    int iResult = 0;
    unsigned int uiResult = 0;  

    for(int k = 0; k <= 3;k++)
        fourBitNumber[k] = 0xAA;
    for(int k = 0; k <= 3;k++)
    {
        fResult+= (int)fourBitNumber[k] << (k * 8);
        iResult+= (int)fourBitNumber[k] << (k * 8);
        uiResult+= (unsigned int)fourBitNumber[k] << (k * 8);
    }
    printf("-----------------------------\n");
    printf("fResult = %f\n",fResult);
    printf("iResult = %i\n",iResult);
    printf("uiResult = %u\n",uiResult);

    //fResult=0;
    //iResult=0;
    //uiResult=0;
    //for(int k = 0; k <= 3;k++)
    //{
    //    fResult+= (int)0xAA << (i * 8);
    //    iResult+= (int)0xAA << (i * 8);
    //    uiResult+= (unsigned int)0xAA << (i * 8);
    //}
    //   printf("fResult = %f\n",fResult);
    //   printf("iResult = %i\n",iResult);
    //   printf("uiResult = %u\n",uiResult);
}

void eightBitNumber()
{
    char eightBitNumber [8] ="";

    double dResult = 0.0;
    long long llResult = 0;
    unsigned long long ullResult = 0;


    for(int k = 0;k <=7;k++)
        eightBitNumber[k] = 0xBB;

    for(int k =0; k<=7;k++)
    {
        dResult+= (int)eightBitNumber[k] << (k * 8);
        llResult+= (long long)eightBitNumber[k] << (k * 8);
        ullResult+= (unsigned long long)eightBitNumber[k] << (k * 8);
    }
    printf("-----------------------------\n");

    printf("dResult = %d\n",dResult);
    printf("llResult = %lli\n",llResult);
    printf("ullResult = %llu\n",ullResult);
}

void stringIteration()
{
    int i = 0;
    char s [] = "Hi";
    for (i = 0; s[i] != '\0'; ++i)
        printf("%c",s[i]);
    printf("\n%d\n",i);
}

void mirrorCopy()
{
    int i = 0, k = 0, l = 0;
    char str [] = "Hello";

    while (str[i] != '\0')
      i++;

    char rts[i];
    l = i - 1;
    for(k = 0; k < i; ++k)
    {
        rts[k] =  str[l];
        l--;
    }
    rts[k] = '\0';
    printf("%s\n",rts);
}

void replaceCharecters()
{
    int i = 0;
    char str [] = "Hello";

    for (i = 0; str[i] != '\0'; ++i)
        if(str[i] == 'l')
            str[i] = 'x';
    
    printf("%s\n",str);
}

void lowerCase()
{
    int i = 0, k = 0, l = 0;
    char str[] = "HELLO";
    
    while (str[i] != '\0')
      i++;
    l = i - 1;
    for(k = 0; k <= l ;k++)
        if(65 <= str[k] && str[k] <= 90) 
            str[k] += 32;
           
    printf("%s\n",str);
}

