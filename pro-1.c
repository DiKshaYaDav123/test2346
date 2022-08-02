#include<stdio.h>
int main()
{
    int  num,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    digit=num%10;
    printf("Unit digit=%d",digit);
    return 0;
}
