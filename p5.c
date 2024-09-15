#include <stdio.h>
int main()
{
    int num, a=-1, b=1;,c;
    printf("Enter no.:");
    scanf("%d", &num);

    printf("fibonacci series:\n");
    for(int i=0; i<num; i++) {
        c=a+b;
        printf("%d", c);
        a=b;
        b=c;
    }
    return 0;
}
