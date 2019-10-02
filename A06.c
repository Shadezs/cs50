
#include <stdio.h>
int ispositive(int n);
int mph_to_kph(int n);
int main()
{
    int r =0;
    r= mph_to_kph(-89);
    printf("%d",r);

    return 0;
}


int ispositive(int n)
{
    return (n>=0);
}
int mph_to_kph(int n )
{
    int r =-1;
    if(ispositive(n))
    {
        r= (int)n * 1.609344 ;
        return r;
    }else
    {
        return r;
    }
}

