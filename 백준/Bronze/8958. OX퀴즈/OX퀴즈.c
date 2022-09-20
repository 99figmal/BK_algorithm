#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    
    scanf("%d", &N);    //N입력

    //char len[100] = {'O', 'O', 'X', 'X', 'O', 'X', 'X', 'O', 'O', 'O'}; //ox받을배열
    for(int j = 0; N > j; j++){
        
        char len[90] = {0, };
        int score = 0;
        int count = 0;
        
        scanf("%s", &len);
        
        for(int i = 0; 100 > i; i++){
        
            if(len[i] == 'O'){
                count++;
                score += count;
            }
        
            else if(len[i] == 'X'){
                count = 0;
            }
        }
        printf("%d\n", score);
    }

}
/*
 OOXXOXXOOO
 OOXXOOXXOO
 OXOXOXOXOXOXOX
 OOOOOOOOOO
 OOOOXOOOOXOOOOX
 */
