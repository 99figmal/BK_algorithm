#include<stdio.h>

int main(){
    int T = 0, H = 0, W = 0, N = 0;
    
    scanf("%d\n", &T);
    
    for(int i = 0; T > i; i++){
        scanf("%d %d %d", &H, &W, &N);
        int result = 0;

        if(N%H > 0){
            result = (N%H) * 100 + (N/H + 1);
        }
        else if(N%H == 0){
            result = H * 100 + (N/H);
        }
        
        printf("%d\n", result);
    }
    
    
}