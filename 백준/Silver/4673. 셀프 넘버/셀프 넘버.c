#include<stdio.h>

int d(int n){
    int sum = n;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){
    int a[10001] = {0, }; //셀프넘버가 아닌 수를 넣을 배열
    
    for(int i = 1; 10001 > i; i++){
        a[i] = d(i); //셀프넘버가 아닌 수만 배열에 넣는다
    }
    
    for(int j = 1; 10001 > j; j++){
        
        int count = 0;
        
        for(int u = 1; 10001 > u; u++){
            if( j == a[u]) count++;
        }
        
        if( count == 0) printf("%d\n", j);
        
    }
    
}
