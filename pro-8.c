#include<stdio.h>
int main()
{
    int x = 8;
    int result = x&1;
    if(result==1)
        printf("odd");
    else
        printf("even");
    return 0;
}
