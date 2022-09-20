#include<stdio.h>

int main(){
    int N, X;
    scanf("%d %d", &N, &X);
    
    int array[N];

    for(int i = 0; N > i; i++){
        scanf("%d", &array[i]);
    }
    
    for(int j = 0; N > j; j++){
        if(array[j] < X) printf("%d ", array[j]);
    }
}
