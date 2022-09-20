#include <stdio.h>

int main()
{
    int a, result; //a 주어진 수.
    int b = 0;
    
    scanf("%d", &a);
    
    result = a;
    
    while(1){
        
        if( a < 10 ){ //a가 10보다 작을때
            a = (a * 10) + a;
            b++;
        }
        else { //a가 10보다 클때
            a = 10 * (a % 10) + (a / 10 + a % 10) % 10;
            b++;
        }
        
        if( result == a) break;
    }
    printf("%d", b);
}
