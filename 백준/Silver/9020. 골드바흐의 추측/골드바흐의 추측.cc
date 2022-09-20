#include <stdio.h>
/*
 골드바흐의 추측
 2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다.
 10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.
 */

int main(){
    //에라토스테네스의 체
    int arr[10001] = {0, };
    
    //2의 배수... 3의 배수... i의 배수를 돌리자
    for(int i = 2; 10001 > i; i++){
        if(arr[i] == 1) continue; //이미 누군가의 배수인 경우 pass(중복)
        //2*1 2*2 2*3 ... 2*j
        for(int j = 2; i * j <= 10000; j++){ //j가 2부터 시작하는 이유 : 나 자신은 제외
            arr[i*j] = 1; //i(특정수)의 배수일 경우 해당 배열값을 1로!
        }
    }
    arr[1] = 1;//1은 소수가 아님!
    //에라토스테네스의 체
    
    
    int T;
    scanf("%d\n", &T);
    
    for(int r = 0; T > r; r++){
        int num;
        scanf("%d\n", &num);
        
        /* 대칭이므로 num/2부터 -1 해가며 소수의 짝을 구한다.
         a가 소수인가? 그렇다면 a - 10도 소수인가?
         */
        for(int k = num / 2; k > 0; k--){
            if(arr[k] == 0 && arr[num - k] == 0){
                printf("%d %d\n", k, num - k);
                break;
            }
        }
    }//for문 소수의 짝 구하기
}


