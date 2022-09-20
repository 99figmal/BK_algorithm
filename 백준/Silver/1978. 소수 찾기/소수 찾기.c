#include <stdio.h>
//약수의 갯수가 2개일경우 소수이다.
int main(){
    int N;
    int prime = 0; //소수의 갯수
    scanf("%d", &N);
    
    for (int i = 0; N > i; i++) {
        int a = 0;
        int cnt = 0;
        scanf("%d", &a);
        
        for(int j = a; j > 0; j--){ //a를 a, a-1, a-2, ... , 1 순으로 나누어 나머지가 0일 경우 cnt+1
            if(a%j == 0) cnt++;
        }
        
        if(cnt == 2) prime++;
    }
    printf("%d", prime);
}
