/*
Using 
int scanf();
scan formated

printf();
print formated
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char s[100];
    char sen[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /* scanf to get only character */
    scanf("%c",&c);
    printf("%c\n", c);
    /* scanf to get string with out spaces */
    scanf("%s",s);
    printf("%s\n", s);
    /* scanf to get string with space (it needs scanf("\n") before it to read the previous new line) */
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);
    return 0;
}
