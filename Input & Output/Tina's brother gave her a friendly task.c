#include <stdio.h>
int main()
{int n;
    int tot_square;
    scanf("%d",&n);
    tot_square=(n*(n+1)/2)*(2*n+1)/3;
    printf("%d",tot_square);
    return 0;
}
