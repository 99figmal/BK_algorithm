#include <stdio.h>

int main(){
    int n = 0, a = 0, b = 0;
    int count = 2;
    int x = 2, y = 1; //현재위치
    scanf("%d", &n);
    
    if(n == 1) printf("1/1");
    else if(n == 2) printf("1/2");
    
    else{
        
        while(n > count){
            //목표지점설정
            if(x == 1 || y == 1){
                a = y;
                b = x;
                //printf("%d %d\n", a, b);
            } //if end
            
            //이동
            while(1){
                //상승
                if(a < b){
                    x--;
                    y++;
                    //if(count == n) break;
                    count++;
                    //printf("%d %d\n", x, y);
                    if( x == a ) break;
                }
                //하상
                else if(a > b){
                    x++;
                    y--;
                    //if(count == n) break;
                    count++;
                    //printf("%d %d\n", x, y);
                    if( x == a ) break;
                }
                if(count == n) break;
            }
            
            if(x > y){
                if(count == n) break;
                x++;
                //printf("%d %d\n", x, y);
                count++;
            }
            else if(x < y) {
                if(count == n) break;
                y++;
                //printf("%d %d\n", x, y);
                count++;
            }
            
        }
        printf("%d/%d\n", y, x);
    }
}
