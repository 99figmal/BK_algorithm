#include <stdio.h>
#include <string.h>

//문자열을 입력받고 해당하는 알파벳이 속한 숫자로 분류하는 함수 (+1 : 칸수까지 계산)
int main(){
    int len = 0;
    char arr[101] = {" ", };
    scanf("%s", arr);
    
    len = strlen(arr);
    
    //크로아티아알파벳먼저계산
    
    for(int i = 0; 101 > i; i++){
        
        if( arr[i] == 'c' && arr[i+1] == '='){ //c=
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 'c' && arr[i+1] == '-'){ //c-
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 'd' && arr[i+1] == 'z' && arr[i+2] == '='){ //dz=
            arr[i] = ' ';
            arr[i+1] = ' ';
            arr[i+2] = ' ';
            len = len - 2;
        }
        
        else if( arr[i] == 'd' && arr[i+1] == '-'){ //d-
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 'l' && arr[i+1] == 'j'){ //ij
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 'n' && arr[i+1] == 'j'){ //nj
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 's' && arr[i+1] == '='){ //s=
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
        
        else if( arr[i] == 'z' && arr[i+1] == '='){ //z=
            arr[i] = ' ';
            arr[i+1] = ' ';
            len = len - 1;
        }
    }
    printf("%d", len);
}
