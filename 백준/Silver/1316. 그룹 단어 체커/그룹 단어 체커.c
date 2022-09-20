#include <stdio.h>
/*
 해당 알파벳이 체크배열에 없을 경우(처음 나온 알파벳일 경우) 체크배열행
 해당 알파벳이 체크배열에 있을경우 바로 전 항을 확인해서 판단.
 */
#include <stdio.h>
#include <string.h>
int main(){
    int N;
    scanf("%d", &N);
 
    int group_num = 0; //그룹 단어의 개수
    for(int i=0; i<N; i++){
        char word[101];
        scanf("%s", word);
 
        //그룹 단어인지 확인
        int alphabet[26] = {0, }; //알파벳
        for(int j=0; j<26; j++){
            alphabet[j] = 0;
        }
 
        int word_len = strlen(word);
        for(int k=0; k<word_len; k++){
            char letter = word[k];
            if(alphabet[letter-'a'] == 0){
                alphabet[letter-'a'] = 1;
            }
            else{ //이미 1이라면, 바로 앞 문자 확인
                if(word[k-1] != word[k]) //앞 문자와 다르다면, 그룹 단어가 아님
                    break;
            }
 
            if(k==word_len-1){ //여기까지 오면 그룹단어
                group_num++;
            }
        }
    }
    printf("%d\n", group_num);
}
