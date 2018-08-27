#include <stdio.h>

int main()
{
    int number, remainder, reverse=0, temp;
    printf("Please enter an integer:\n");
    scanf("%d",&number);
    temp=number;
    while(number != 0)
    {
        remainder = number%10;
        reverse= reverse*10 + remainder;
        number= number/10;
    }
int sum= temp+reverse;
    printf("Sum: %d + %d = %d",temp,reverse,sum);
    return 0;
}
