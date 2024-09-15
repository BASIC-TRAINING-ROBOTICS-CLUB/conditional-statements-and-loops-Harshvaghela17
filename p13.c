#include <stdio.h>
int main()
{
    char vowel;
    printf("Enter an alphabet:");
    scanf("%c", &vowel);

    if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u') {
        printf("Is a vowel");
    } else {
        printf("Not a vowel");
    }
    return 0;
}