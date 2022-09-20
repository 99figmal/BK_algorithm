#include <stdio.h>
#include <string.h>

//두수를 받고 뒤집는다. 그리고 크기를 비교한다.
int main() {
    int a = 0, b = 0, a2 = 0, b2 = 0;
    int a1[3] = {0, };
    int b1[3] = {0, };
    
    scanf("%d %d", &a, &b);
    
    for(int i = 0; 3 > i; i++){
        a1[i] = a % 10;
        a = a / 10;
        b1[i] = b % 10;
        b = b / 10;
    }
    
    a2 = (100 * a1[0] + 10 * a1[1] + a1[2]);
    b2 = (100 * b1[0] + 10 * b1[1] + b1[2]);
    
    if(a2 >= b2) printf("%d", a2);
    else printf("%d", b2);
    
}
