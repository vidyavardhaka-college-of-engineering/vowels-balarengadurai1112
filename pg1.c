#include <stdio.h>
int main()
{
    char str[100];
    char *p;

    printf("Enter any char: ");
    scanf("%c",&str);

    //assign base address of char array to pointer
    p=str;
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
    printf("%c is a vowel\n",*p);
    else 
    printf("%c is a not vowel\n",*p);
    return 0;
}
