#include <stdio.h>
#include <math.h>

int main(){
    long long a = 0, b = 0, c = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
     
    if(c <= b){
        printf("-1");
    }
    else{
        int N = 1 + floor( a / (c - b));
        printf("%lld", N);
    }

}
