#include <stdio.h>
//약수의 갯수가 2개일경우 소수이다.
int primecount(int t){
    int a = 0;
    int cnt = 0;
    a = t;
    
    for(int j = a; j > 0; j--){ //a를 a, a-1, a-2, ... , 1 순으로 나누어 나머지가 0일 경우 cnt+1
        if(a%j == 0) cnt++;
    }
    
    if(cnt == 2) return 1;
    else return 0;
}

int main(){
    int M = 0, N =0, sum = 0, min = 100001;
    
    scanf("%d %d", &M, &N);
    
    for (int i = M; N+1 > i; i++) { //M부터 N까지
        if(primecount(i)==1){
            sum = sum + i;//소수일경우 합
            if(i <= min) min = i;
        }
    }
    
    if(sum==0) printf("-1");
    else printf("%d\n%d", sum, min);
}
