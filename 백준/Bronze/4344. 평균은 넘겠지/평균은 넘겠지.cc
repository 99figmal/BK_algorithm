#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    //테스트횟수입력
    int C;
    scanf("%d", &C);
    
    for(int u = 0; C > u; u++){
        //학생 수 입력
        int N;
        scanf("%d", &N);
        
        //점수배열
        int tem[1001] ={0, };
        int sum = 0;
        double avg = 0;
        int count = 0;
        double result = 0;
        
        //점수입력
        for(int i = 0; N > i; i++){
            scanf("%d", &tem[i]);
            sum += tem[i];
            //printf("%d", tem[i]);
        }
        avg = (double)sum / N;
        //printf("%f", avg); //평균
        for(int i = 0; N > i; i++) if(tem[i] > avg) count++;
        //printf("%f\n", count);
        
        //result = (double)count / N * 100; 이게 ㅇ왜 0이 나오지
        
        printf("%.3lf%%\n", (double)count / N * 100);
    }
    
}
//50 50 70 80 100
