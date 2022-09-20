#include <stdio.h>

int main() {
    int T;
    scanf("%d\n", &T);
    
    for(int u = 0; T > u; u++){
        //printf("df");
        int k = 0, n = 0; //k는 층수 n은 호수
        int room[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        
        scanf("%d\n", &k);
        scanf("%d", &n);
        
        for (int t = 0; k > t; t++) {
            for (int i = 0; 14 > i; i++) {
                room[0] = 1;
                room[i+1] = room[i] + room[i+1];
            }//for i
        }//for t
        printf("%d\n", room[n-1]);
    }//for T
}