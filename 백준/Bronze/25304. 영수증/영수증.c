#include <stdio.h>

int main()
{
    
    int X, N, price, num;
    int sum = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &price, &num);
        sum = sum + (price * num);
    }
    if(sum == X)
        printf("Yes");
    else
        printf("No");
}