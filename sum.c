#include<stdio.h>
/**
 * @brief 
 * 
 * first code just to print sum of 3 vars
 * 
 * @return int 
 */
int main()
{
    int a, b, c, sum=0;
    printf("enter a and b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("sum of a and b and c is: %d",sum);
    return 0;
}