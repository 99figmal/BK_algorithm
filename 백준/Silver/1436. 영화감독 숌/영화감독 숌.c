#include <stdio.h>
//연달아 6이 3개 있는지 판별, a는 주어지는 숫자 - b는 a의 자릿수
//주어진 a 가 악마의 숫자일 경우 1을, 악마의 숫자가 아닐경우 0을 반환한다.
int evil(int a, int b){
    int cnt = 0, result = 0;
    int arr[b];
    
    //각 자릿수를 역순으로 arr 배열에 집어넣는다.
    while( a > 0 ){
        arr[cnt] = a % 10;
        a = a / 10;
        cnt++;
    }
    
    //6이 연속으로 있을 경우 result
    for(int i = 0; b > i; i++){
        if(arr[i] == 6 && arr[i+1] == 6 && arr[i+2] == 6){
            result++;
        }
    }
    
    if(result==0) return 0;
    else return 1;
}

//자릿수를 판별해보자
int len(int c){
    int cnt_c = 0;
    while(c > 0){
        c = c / 10;
        cnt_c++;
    }
    return cnt_c;
}


int main(){
    //count : 몇번쨰 악마의 숫자인지 카운트
    //num : 1부터 무한히 증가하는 변수. evil()에 넣을 예정
    int N, count = 0, num = 0;
    scanf("%d", &N);
    
    //printf("%d", evil(161666,3));
    
    while(1){
        num++;
        if(evil(num,len(num)) == 1){
            count++;
        }
        
        if(count == N){
            printf("%d", num);
            break;
        }
         
    }//while
    
}
