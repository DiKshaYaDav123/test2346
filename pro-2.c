#include<stdio.h>
int main()
{
    int  num,digit;
    printf("Enter the number");
    scanf("%d",&num);
    digit=num/10;
    printf("Number without last digit=%d",digit);
    return 0;
}
