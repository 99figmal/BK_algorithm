#include <stdio.h>

int min(int a, int b){
    if(a >= b) return b;
    else return a;
}


int main(){
    int N, M, B_count = 0, W_count = 0, result = 100;//N : 세로, M : 가로
    char chess[50][50];
    
    scanf("%d %d", &N, &M);
    
    for(int i = 0; N > i; i++){
        scanf("%s", &chess[i]);
    }

    
    //체스판의 경우의 수
    for(int i = 0; N - 7 > i; i++){ //체스판의 세로줄 카운트
        for(int j = 0; M - 7 > j; j++){ //체스판의 가로줄 카운트
            
            B_count = 0;
            W_count = 0;
            
            for(int k = i; i + 8 > k; k++){ //선택한 체스판의 세로줄
                for(int l = j; j + 8 > l; l++){ // 선택한 체스판의 가로줄
                    if((l+k)% 2 == 0){
                        if(chess[k][l] == 'B') W_count++;
                        else B_count++;
                    }
                    else{
                        if(chess[k][l] == 'B') B_count++;
                        else W_count++;
                    }
                }
            }
            result = min(result, W_count);
            result = min(result, B_count);
        }
    }
    printf("%d", result);
    
}
    /*
     WBWBWBWB
     BWBWBWBW
     WBWBWBWB
     BWBBBWBW
     WBWBWBWB
     BWBWBWBW
     WBWBWBWB
     BWBWBWBW
     */
    
