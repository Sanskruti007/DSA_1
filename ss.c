#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int harshad(int N,int s);

int main()
{
    int s,N,sum;
    s=0;
    scanf("%d",&N);
    sum=harshad(N,s);
    printf("%d",sum);
    return 0;
}
int harshad(int N,int s)
{
    int i ,r;
    r=0;
    s=0;
    i=N;
    while(i>0)
    {
        r=i%10;
        s=s+r;
        i=i/10;
    }
    i=N;
    if(N%s==0)
        return s;
    else
    {
        s=0;
        while(i>0)
        {
            r=i%10;
            if(r%2!=0)
                s=s+r;
            else
                s=s;
            i=i/10;
        }
    }
    return s;

}
