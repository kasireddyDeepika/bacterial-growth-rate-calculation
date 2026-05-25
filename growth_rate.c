
/*to calculate bacterial growth rate*/
#include<stdio.h>
void growth_rate(float initial,float final,float time);
int main()
{
  float initialPop,finalPop,time;
printf("enter initial population:");
scanf("%f",&initialPop);
printf("enter final population");
scanf("%f",&finalPop);
printf("enter time period");
scanf("%f",&time);
growth_rate(initialPop, finalPop, time);
return 0;
}
 void growth_rate(float initial,float final,float time)
{
  float rate;
rate=final-initial/time;
printf("growth_rate=%2f",rate);
}
