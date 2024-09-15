#include <stdio.h>
int main()
{
    int year;
    pritnf("Enetr year:");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("Leap Year above 20's");
    } else {
        printf("Not a leap year");
    }
}
