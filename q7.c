#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year ;
    /*Input the year */
    printf("Enter a year: ");
    scanf("%d", &year);
    /* Checking */
    if (year %4==0){
        printf("%d is Leap year.", year);
    } else {
        printf("%d is not Leap year.", year);
    }
}