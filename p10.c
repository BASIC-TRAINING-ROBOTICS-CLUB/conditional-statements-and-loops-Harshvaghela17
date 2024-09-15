#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b:");
    sacnf("%d%d, &a, &b");

    if(x>0 && y>0){
        printf("Quadrant 1");
    } else if(x>0 && y<0) {
        printf("Quadrant 2");
    } else if(x<0 && y<0) {
        printf("Quadrant 3");
    } else {
        printf("Quadrant 4");
    }
}