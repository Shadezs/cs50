
#include <stdio.h>
int ispositive(int n);
int mph_to_kph(int n);
int c_to_f(int n);
int main()
{
    int user_input =0;
   printf("Please make pick a number 1. Convert speed, 2. Convert temperature, 3. Exit. \n");
   scanf("%d",&user_input);
   if(user_input ==1)
   {
       int input1 =0;
       printf("Please enter miles ");
       scanf("%d",&input1);
       printf("its %d kph \n",mph_to_kph(input1));
       main();
   }else if(user_input ==2)
   {
        int input1 =0;
        printf("Please enter tempeture in C \n ");
        scanf("%d",&input1);
        printf("its %d f \n",c_to_f(input1));
        main();
   }else
   {
       
   }
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
int c_to_f(int n)
{
    if(ispositive(n))
    {
    return ((n*1.8)+32);
    }
}


