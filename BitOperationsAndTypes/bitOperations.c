#include<stdio.h>

int bitAt(int iNumberInput, unsigned int place_index);
int clearBit(int iNumberInput, unsigned int place_index);
int setBit(int iNumberInput, unsigned int place_index);
int reverseBit(int iNumberInput, unsigned int place_index);

int setValueOfBit(int iNumberInput, unsigned int value ,unsigned int place_index);
int clearAllEvenBits(int iNumberInput);
int biggestBit(int iNumberInput);
int smallestBit(int iNumberInput);

int clearBitsInRange(int iNumberInput, unsigned int start_index, unsigned int last_index);
int removeBitsAfterIndex(int iNumberInput, unsigned int place_index);
int setAllBitsDividedByThreeOnAll32Bits(int iNumberInput);
int numberOfDifferentBits(int iNumberInput, int iNumberInput2);
int reverseEveryOddBit(int iNumberInput);

void intRepresentationAsBinary(int iNumberInput);


int main()
{
    int iNumberInput = 0, iNumberInput2 = 0;
    unsigned int uiBitPosition = 0, uiBitPosition2 = 0;

    printf("Enter a number : ");
    scanf("%d",&iNumberInput);

    printf("Enter a number : ");
    scanf("%d",&iNumberInput2);

    printf("Enter bit position : ");
    scanf("%d", &uiBitPosition);

    printf("Enter bit position : ");
    scanf("%d", &uiBitPosition2);
    int result = 0;
    
    //result = setValueOfBit(iiNumberInput, 0, uiBitPosition);
    //result = setValueOfBit(iiNumberInput, 1, uiBitPosition);
    // result = clearAllEvenBits(iiNumberInput);
    //result = biggestBit(iiNumberInput);
    //result = clearBitsInRange(iiNumberInput,uiBitPosition,uiBitPosition2);
    //result = removeBitsAfterIndex(iiNumberInput, uiBitPosition);
    //result = setAllBitsDividedByThreeOnAll32Bits(iNumberInput);
    //result = numberOfDifferentBits(iNumberInput,iNumberInput2);
    //result = reverseEveryOddBit(iNumberInput);
    
    printf("%d\n", result);
    
    intRepresentationAsBinary(iNumberInput);
    
    return 0;
}



int bitAt(int iNumberInput, unsigned int place_index) 
//{ return iNumberInput & (1 << place_index);}
{
    int Mask = 1 << place_index;
    //update: this result checked straigth into if
    int result = iNumberInput & Mask;

    if(result ==0){
        return 0;
    }
    return 1;
}


int clearBit(int iNumberInput, unsigned int place_index)
{
    if(bitAt(iNumberInput, place_index) == 0)
        return iNumberInput;
    else{
        int mask = 1 << place_index;
        mask = ~mask;
        int result = iNumberInput & mask;
        return result;
    }
}

int setBit(int iNumberInput, unsigned int place_index){
    if(bitAt(iNumberInput, place_index) == 1)
        return iNumberInput;
    else
    {
        int mask = 1 << place_index;
        int result = iNumberInput ^ mask;
        return result;
    }
}

int reverseBit(int iNumberInput, unsigned int place_index){


    int result = 0;

    if(bitAt(iNumberInput, place_index) == 1)
        result = clearBit(iNumberInput, place_index);
    else
        result = setBit(iNumberInput, place_index);


    return result;
}

int setValueOfBit(int iNumberInput, unsigned int value ,unsigned int place_index)
{
    int result = 0;
    int bitValue = bitAt(iNumberInput, place_index);

    if(value == bitValue)
        result = iNumberInput;
    else if( value == 1)
        result = setBit(iNumberInput, place_index);
    else if (value == 0)
        result = clearBit(iNumberInput, place_index);

    return result;
}

int clearAllEvenBits(int iNumberInput)
{ return (iNumberInput & 0xaaaaaaaa );}

int biggestBit(int iNumberInput){

        //update: to work with negative int
        int INT_SIZE = sizeof(int) * 8;
        int order = -1;
        int result = 0;
        for(int i = 0; i < INT_SIZE; i++)
        {   
            result = iNumberInput & 1;
            if(result == 1)
                order = i;

            iNumberInput >>= 1;
        }

        if(order != -1)
            return order;
        else
            return 0;
}

int smallestBit(int iNumberInput){

    int INT_SIZE = sizeof(int) * 8;
    int result =0;
    for(int i = 0; i < INT_SIZE; i++)
    {
        result = iNumberInput & 1;
        if(result == 1)
            return i;

        iNumberInput >>= 1;
    }
}

int clearBitsInRange(int iNumberInput, unsigned int start_index, unsigned int last_index){
    int result = iNumberInput;
    for(int i = start_index; i <= last_index; i++){
        result = clearBit(result, i);
    }

    return result;
}

int removeBitsAfterIndex(int iNumberInput, unsigned int place_index)
{ return clearBitsInRange(iNumberInput,place_index, biggestBit(iNumberInput));}

int setAllBitsDividedByThreeOnAll32Bits(int iNumberInput)
{
    int INT_SIZE = sizeof(int) * 8;
    int result = iNumberInput;
    for(int i = 3;i < INT_SIZE; i+=3)
    {
        result = setBit(result , i);
    }

    return result;
}

int numberOfDifferentBits(int iNumberInput, int iNumberInput2)
{
    int result = 0;
    int number = iNumberInput ^ iNumberInput2;
    int bigBit = biggestBit(number);

    
    for(int i = 0 ; i <= bigBit; i++)
    {
        if(bitAt(number, i) == 1)
            result++;
    }

    return result;
}

int reverseEveryOddBit(int iNumberInput){

    int result = iNumberInput;
    int bigBit = biggestBit(iNumberInput);
    for(int i = 1; i <= bigBit; i+= 2)
        result = reverseBit(result,i);
    
    return result;
}

void intRepresentationAsBinary(int iNumberInput)
{
    int bigBit = biggestBit(iNumberInput);
    int smallBit = smallestBit(iNumberInput);
    for(int i = bigBit; i>= 0; i--){
        if(bitAt(iNumberInput,i)== 1){
            printf("2^%d",i);
            if(smallBit < i)
                printf(" + ");
        }
    }
    printf("\n");

}
