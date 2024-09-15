#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter sides of the triangle:");
    scanf("%d%d%d, &a, &b, &c);

    if(a==b && b==c && c==a)
    {
       printf("Triangle is Equilateral");
    } else {
       printf("Triangle is not Equilateral");
    }
    return 0;
}