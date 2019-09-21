#include <stdio.h>
float min_in = 0.0;
float max_in = 0.0;
float avg_num = 0.0;
float sum = 0.0;
float user_input = 1.0;
int num_counter = 0;
int dummy = 0;

int main()
{
	printf("please enter number. When done enter "0" \n" );
	scanf("%f", &user_input);
	_Bool min = 1;
	while(user_input !=0)

		{
		sum += user_input;
		if (min) {
			min_in = user_input;
			min = 0;
		} else if(user_input < min_in) {
			min_in = user_input;
		}else if(user_input>=max_in)
		{
			max_in = user_input;
		}
		num_counter++;
		scanf("%f", &user_input);

	}
	avg_num = (sum / num_counter);
	printf("The minimum entry was: %.2f \n", min_in);
	printf("The maximum entry was:  %.2f \n", max_in);
	printf("The average of all entries was:  %.2f \n", avg_num);
	printf("%d",num_counter);
	scanf("%d", &dummy);



	return 0;
}
