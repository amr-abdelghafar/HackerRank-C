#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char string[1000];
    scanf("%s", string);
    int i = 0;
    int i0=0, i1=0, i2=0, i3=0, i4=0, i5=0, i6=0, i7=0, i8=0, i9=0; 
    while (string[i] != '\0'){
        if (string[i] == '0') i0 +=1;
        if (string[i] == '1') i1 +=1;
        if (string[i] == '2') i2 +=1;
        if (string[i] == '3') i3 +=1;
        if (string[i] == '4') i4 +=1;
        if (string[i] == '5') i5 +=1;
        if (string[i] == '6') i6 +=1;
        if (string[i] == '7') i7 +=1;
        if (string[i] == '8') i8 +=1;
        if (string[i] == '9') i9 +=1;
        i++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d", i0, i1, i2, i3 ,i4, i5, i6, i7 , i8, i9);
    return 0;
}
