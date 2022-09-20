#include<stdio.h>

int main(){
    
    int cnt = 1;
    int a[9];
    
    //입력
    for(int i = 0; 9 > i; i++) scanf("%d", &a[i]);
    
    //for(int l = 0; 9 > l; l++) printf("%d", a[l]); // 입력 확인
    
    //최댓값
    int max = a[0];
    for(int m = 1; 9 > m; m++){
        if(max < a[m]){
            max = a[m];
            cnt = m + 1;
        }
        //printf("%d", max);
    }
    
    printf("%d\n%d", max, cnt);
}