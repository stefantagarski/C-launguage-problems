//Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.

#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }
    return 0 ;
}
