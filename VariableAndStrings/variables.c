#include <stdio.h>

void test();
void test2();

//Global counter to use from everyone
extern int gGlobalCounter;
int gGlobalCounter = 0;
static int counter = 0;

int main()
{
    for(int i = 0; i <3; i++) 
    {
        test();
        test2();
    }
    printf("%d\n", gGlobalCounter);
    printf("%d\n", counter);


    return 0;
}

void test(){gGlobalCounter++;} 
void test2(){counter++;}