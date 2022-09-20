#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int array[T];
    
    
    for(int i = 0; T > i; i++){
        scanf("%d", &array[i]);
    }
    
    //최댓값
    int max = array[0];
    for(int m = 0; T - 1 > m; m++){
        if(max < array[m+1]) max = array[m+1];
        //printf("%d", max);
    }
    
    //최솟값
    int min = array[0];
    for(int n = 0; T - 1 > n; n++){
        if(min > array[n+1]) min = array[n+1];
    }

    printf("%d %d", min, max);

}