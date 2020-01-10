#include<stdio.h>

#define N 10
void main()
{
    int fib[N];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<N;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<N;i++)
    {
        printf("fib[%d] is: %d\n",i,fib[i]);
    }
}
