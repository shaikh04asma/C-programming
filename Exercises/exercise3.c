#include <stdio.h>
int main()
{
    // char ch[100];
    // gets(ch);
    // puts(ch);
    // return 0 ;
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("First is number large:%d\n", num1);
    }
    else
    {
        printf("Second number is large:%d\n",num2);
    }
    return 0;
}