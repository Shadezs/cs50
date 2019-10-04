/*
Carlos Davila
1561932 
This programmage ask the user to make a choice , after it will take the user input and converit to what the user choices



*/
#include <stdio.h>
int ispositive(int n);
int mph_to_kph(int n);
int c_to_f(int n);
int main()
{
    int user_input =0;
   printf("Please make pick a number 1. Convert speed, 2. Convert temperature, 3. Exit. \n");
   scanf("%d",&user_input);
     while (user_input != 3)
    {

      int input1 = 0;
      if (user_input == 1)
	{

	  printf ("Please enter miles \n");
	  scanf ("%d", &input1);
	  printf ("its %d kph \n", mph_to_kph (input1));
	}
      else if (user_input == 2)
	{
	  printf ("Please enter tempeture in C \n ");
	  scanf ("%d", &input1);
	  printf ("its %d f \n", c_to_f (input1));

	}
      printf
	("Please make pick a number 1. Convert speed, 2. Convert temperature, 3. Exit. \n");
      scanf ("%d", &user_input);
    }
    printf("Bye");

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
        r= n * 1.609344 ;
    }
    return r;
    
}
int c_to_f(int n)
{
    
   return ((n*1.8)+32);

}


