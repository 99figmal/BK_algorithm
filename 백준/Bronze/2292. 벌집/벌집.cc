#include <stdio.h>

int main() {
    int a = 0, c = 0, k = 0;
    scanf("%d", &a);
    
    if(a==1){
        printf("1");
    }
    
    else{
        while(1){
            c++;
            k = 3 * c * (c+1);
            if( 3 * c * (c+1) + 1 >= a && a >= 3 * c * (c-1)+1 ){
                printf("%d", c+1);
                break;
            }
        }//while
    }//else
}