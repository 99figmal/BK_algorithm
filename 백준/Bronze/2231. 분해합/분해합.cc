#include <stdio.h>

int dsum(int a){
    int sum = 0, temp = 0, temp_2 = a; //temp는 a의 각 자리수를 구하기 위한 변수, temp_2는 a의 각 자리수 합에 원래 a값을 더해주기 위한 변수.
    
    while(a > 0){
        temp = a % 10;
        a = a / 10;
        sum = sum + temp;
        //printf("a : %d temp : %d sum : %d\n", a, temp, sum);
    }
    return sum+temp_2;
}


int main(){
    int n;
    scanf("%d", &n);
    
    int min = n;//cnt은 최솟값을 구하기위한 첫번째 값.
    
    for(int i = 1; n > i; i++){
        //만약 생성자가 존재하면, 최솟값인지 확인한다.
        if(n == dsum(i) && i < min){
            min = i;
        }
    }//for
    if(min == n) printf("0");
    else printf("%d", min);
}
