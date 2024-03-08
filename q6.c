#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;
    printf("Enter a character :");
    scanf("%c", &ch);
    if (ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'){
        printf("%c is a vowel", ch);
    } else printf ("%c is consonant",ch );
}
