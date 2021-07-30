#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void print_decimal_name(int decimal);
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if( a < 1 || b < 1) return 0;
    if( a <= b){
        for(a;a<=b;a++){
            if(a <= 9){
                print_decimal_name(a);
            }else{
                if(a % 2){
                    printf("odd\n");
                }else{
                    printf("even\n");
                }
            }
        }
    }

    return 0;
}
void print_decimal_name(int decimal){
    switch(decimal){
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
        break;
        case 3:
        printf("three\n");
        break;
        case 4:
        printf("four\n");
        break;
        case 5:
        printf("five\n");
        break;
        case 6:
        printf("six\n");
        break;
        case 7:
        printf("seven\n");
        break;
        case 8:
        printf("eight\n");
        break;
        case 9:
        printf("nine\n");
        break;
    }
}


