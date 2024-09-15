#include <stdio.h>
int main()
{
    int a,b,c;
    pritnf("Enter the sides of Triangle:");
    scanf("%d%d%d, &a, &b, &c");

    if((a*a)+(b*b)==(c*C) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a))
    {
        printf("The triangle is right angled");
    } else {
        printf("The triangle is not right angled");
    }
    return 0;
}
