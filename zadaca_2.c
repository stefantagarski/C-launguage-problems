#include <stdio.h>
int main()
{
    int n,m,suma=0;
    scanf("%d%d", &n, &m);
    while(n<m)
    {
        if(n%3==0)
        {
            suma+=n;
        }
        n++;
    }
    printf("%d",suma);
    return 0;
}