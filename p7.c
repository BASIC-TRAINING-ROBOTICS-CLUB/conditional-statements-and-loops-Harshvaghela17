#include <stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the numbers:\n");
    scanf("%d%d%d", &x, &y, &z);

    if (x>y && x>z) {
        printf("Max of the number is:%d", x);
    }
    if(y>x && y>z) {
        printf("Max of the number is:%d", y);
    }
    if(z>x && z>y) {
        printf("Max of the number is:%d", z);
    }
    return 0;
}
