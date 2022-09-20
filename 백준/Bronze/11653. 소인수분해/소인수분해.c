//2로 나누고...나누고... 나머지가 0이 아닐경우 +1 된 수로 다시 나누고... 나누고...
#include <stdio.h>

int main(){
    int n;
    int i = 2;
    scanf("%d", &n);
    
    //n=1일경우
    if(n==1){
        return 0;
    }
    else{
        //일단 2로 나누어보자
        while(n >= i){
            //i가 n의 소인수(n%i==0)일경우 출력
            if(n%i == 0){
                n = n / i;
                printf("%d\n", i);
            }
            //i가 n의 소인수(n%i=!0)가 아닌 경우
            else{
                i++;
            }
        }
    }
}
    
