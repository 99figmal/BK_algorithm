/*
 에라토스테네스의 체 : 일정한 범위 내에서 소수를 찾아내는 가장 빠른(nogada..?) 방법
 1. 1을 지운다.
 2. 2를 제외한 2의 배수를 지운다.
 3. 3을 제외한 3의 배수를 지운다.
 4. 5를 제외한 5의 배수를 지운다. (4의 배수는 2. 에서 이미 제거 되었음!)
 5. 7을 제외한 7의 배수를 지운다.... (n의 제곱근까지 반복)
 */

#include <stdio.h>
#include <math.h>

int main(){
    int arr[246913] = {0, };
    //2의 배수... 3의 배수... i의 배수를 돌리자
    for(int i = 2; 246913 > i; i++){
        if(arr[i] == 1) continue; //이미 누군가의 배수인 경우(중복)
        //2*1 2*2 2*3 ... 2*j
        for(int j = 2; i * j <= 246913; j++){ //j가 2부터 시작하는 이유 : 나 자신은 제외
            arr[i*j] = 1; //i(특정수)의 배수일 경우 해당 배열값을 1로
        }
    }
    arr[1] = 1;//1은 소수가 아님

    while(1){
        int n = 0, sum = 0;
        scanf("%d", &n);
        if(n==0) break;
        
        for(int k = n + 1; 2 * n + 1 > k; k++){
            //printf("%d", arr[k]);
            if(arr[k]==0) sum = sum + 1;
        }

        printf("%d\n", sum);
    }//while

}
