/*
 리그전과 유사하다. 자신의 패배횟수 +1이 자신의 등수이다.
 */
#include <stdio.h>

int main(){
    int N;
    scanf("%d\n", &N);
    
    int arr[N][2]; //각 사람의 몸무게와 키를 저장하는 2차원 배열
    int score[N]; // 각 사람의 승패를 기록하는 1차원 배열
    
    for(int l = 0; N > l; l++){
        score[l] = 0;
    }
    
    //입력
    for(int i = 0; N > i; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]); //몸무게, 키 순으로 입력
        //printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    
    for (int j = 0; N > j; j++) {
        
        for(int k = 0; N > k; k++){
            //printf("arr[%d][0] < arr[%d][0] && arr[%d][1] < arr[%d][1]\n", j, k, j, k);
            //몸무게 AND 키 모두 커야 큰 사람.
            if(arr[j][0] < arr[k][0] && arr[j][1] < arr[k][1]){
                //printf("arr[%d][0] < arr[%d][0] && arr[%d][1] < arr[%d][1]\n", j, k, j, k);
                //printf("%d < %d && %d < %d\n", arr[j][0], arr[k][0], arr[j][1], arr[k][1]);
                score[j]++;
            }
        }//for_t
    }//for_j
    
    for(int l = 0; N > l; l++){
        printf("%d ", score[l]+1);
    }
    
}