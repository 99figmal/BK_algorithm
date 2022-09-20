#include<stdio.h>
#include<math.h>

int main(){
    int A = 0, B = 0, V = 0;
    scanf("%d %d %d", &A, &B, &V);
    
    /*
     달팽이가 무조건 올라가야하는 위치는 (V-B)이다.
     (V-B) 위치할경우 다음날(낮)에는 무조건 탈출 가능하므로
     필수로 가야하는 거리를 (낮+밤)으로 함께
     */
    int day = (V-B)%(A-B);
    
    if(day == 0) printf("%d",(V-B)/(A-B));
    else printf("%d", (V-B)/(A-B)+1);
}
