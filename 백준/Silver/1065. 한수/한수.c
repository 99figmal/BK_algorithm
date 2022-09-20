#include<stdio.h>

int main(){
    int n = 0, cnt = 0, count = 0;
    scanf("%d", &n);
    
    int tem = n;
    
    while(tem != 0){     //몇자리수인지 확인
        tem = tem / 10;
        cnt++;
    }
    
    switch(cnt){
        case 1 :
            printf("%d", n); //1자리수일경우 그대로 출력
            break;
        case 2 :
            printf("%d", n); // 2자리수일경우 그대로 출력
            break;
        default :
            for(int i = 100; n + 1 > i; i++){
                int a1 = i / 100;
                int a2 = (i % 100) / 10;
                int a3 = (i % 100) % 10;
                if( a1 + a3 == 2 * a2){
                    count ++;
                }
            }
            printf("%d", 99+count); // 3자리수, 4자리수일경우 등차수열비교
    }
        
    
}
