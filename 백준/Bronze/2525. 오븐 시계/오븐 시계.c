#include<stdio.h>

int main(){
    int h, m, c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);

    if( m + c >= 60){
        h = h + ((m + c)/ 60);
        m = (m + c) % 60;
        
        if( h >= 24 ) h = h % 24;
        
        printf("%d %d", h, m);
    }
    else{
        m = m + c;
        printf("%d %d", h, m);
    }

}



