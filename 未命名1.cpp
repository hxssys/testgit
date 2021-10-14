#include<stdio.h>

#define square(x) x*x
#define pf(x) printf("It is %d",x)
#define P(x)  printf("a = %."#x"f\n",a)

int main()
{
	float kf;
	float left,right,solution;
	left = 0;
	scanf("%f",&kf);
	right = kf;
	
	solution = (left + right) / 2;
	
	while(right - left > 0.00000000000001)
	{
		if(solution * solution < kf)
		  left = solution;
		else
		  right = solution;
		  
		  solution = (left + right) / 2;
	} 
	printf("%.10f",solution);

	return 0 ;
 } 
