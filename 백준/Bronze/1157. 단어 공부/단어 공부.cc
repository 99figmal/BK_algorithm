/*
 일단 입력을 받고, 소문자로 다 바꾼다.
 알파벳 크기만큼의 빈 배열을 만들어서,for문을 돌려 각 단어에 어떤 알파벳이 얼마나 있는지 카운트한다.
 많이 나온걸 출력한다.
 */
#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char word[1000001] = {"", };
    //char alpha[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int alpha[26]={0, };
    
    scanf("%s", word);
    
    //입력받은 알파벳을 대문자로 바꿔주자!
    for(int j = 0; 1000001 > j; j++){
        word[j] = toupper(word[j]);
        //if(word[j] == '\0') break;
    }
    
    //A-Z 각각의 알파벳이 얼마나 있는지 카운트해서, alpha 배열 안에 집어넣는다. alpha[0]가 A라고 생각하자.
    int cnt = 0;
    for(int i = 'A'; 'Z' >= i; i++){
        
        for(int j = 0; 1000001 > j; j++) {
            if(word[j] == i){
                alpha[cnt]++;
                //printf("%d", alpha[cnt]);
            }
            else if(word[j] == '\0') break;
        }
        cnt++;
    }
    //for(int p = 0; 26 > p; p++) printf("%d", alpha[p]);
    //어떤 알파벳이 가장 많이 나왔는지 가려내고, 만약 같은 것이 있다면 ?를 출력한다.
    
    //우선 최댓값을 구하고
    int max = 0;
    int aws = 0;
    
    for(int p = 0; 26 > p;  p++){
        if(max <= alpha[p]){
            max = alpha[p];
            aws = p;
        }
    }
    
    //최댓값이 중복되는지 비교
    int tempt = 0;
    for(int l = 0; 26 > l; l++){
        if(max == alpha[l]){
            tempt++;
        }
    }
    
    //tempt >= 2 일경우 최댓값 중복이므로 ? 출력, 아닐경우 aws값에 65(아스키코드A)를 더해 출력
    if(tempt >= 2) printf("?");
    else printf("%c", aws + 65);
    
    
}
