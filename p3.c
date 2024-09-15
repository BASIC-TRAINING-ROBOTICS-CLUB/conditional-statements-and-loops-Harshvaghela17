#include <stdio.h>
int main()
{
    int a, i;

    printf("enter number:");
    scanf("%d", &a);

    printf("Divisor of %d is: %d\n", a);
    for(int i=1; i<=a; i++) {
        if((a%i)==0) {
            printf("\n%d", i);
        }
    }
    return 0;

}