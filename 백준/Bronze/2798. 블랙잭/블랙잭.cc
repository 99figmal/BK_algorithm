#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, M, sum = 0 , result = 0; //N장의 카드, M에 근사하게
    int arr[100] = {0, };
    scanf("%d %d\n", &N, &M);
    
    //입력
    for(int i = 0; N > i; i++) scanf("%d", &arr[i]);
    
    //첫번째 카드
    for(int j = 0; N > j; j++){
        //두번째 카드
        for(int k = j+1; N > k; k++){
            //세번째 카드
            for(int l = k+1; N > l; l++){
                sum = arr[j] + arr[k] + arr[l];
                //M값과 근사한 값을 찾는다. sum은 result 중에서는 가장 커야하지만, M을 넘으면 안된다.
                if(result < sum && sum <= M) result = sum;
            }//세번째 카드
        }//두번째 카드
    }//첫번째 카드
    printf("%d", result);
}
/*
 10 500
 93 181 245 214 315 36 185 138 216 295
 5 21
 5 6 7 8 9
 */
