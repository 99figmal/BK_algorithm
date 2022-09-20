#include<stdio.h>

int main(){
    int a;
    int k = 0;
    scanf("%d", &a);
    
    for(int i=1; a+1 > i; i++){
        k = k + i;
    }
    printf("%d", k);
}