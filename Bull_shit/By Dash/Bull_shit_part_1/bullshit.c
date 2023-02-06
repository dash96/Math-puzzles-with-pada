
#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
void main()
{
int a[4],b[4],i,j,k;
printf("Here is a fun game called bullshit: The moto of this game is to guess the number\n The rules are as follows\n 1) You should type the 4 digit number by adding commas in between.\n 2) If your guess has any numbers that matches the hidden number computer says bull.\n 3) If your guess has a number and is rightly placed then computer says cow.\n 4) If your numbers doesn't match any then computer says bullshit.\n");
for(i=0;i<4;i++)
	{
	a[i]=(rand()%10)+1;
	}
for(k=0;k<5;k++)
	{
	for(j=0;j<4;j++)
		scanf("%d",&b[i]);
	for(i=0;i<4;i++)
		{
		for(j=0;j<4;j++)
			{
			if(a[i]==b[j] && i==j)
			printf("cow \n");
			else if(a[i]==b[j])
			printf("bull \n");
			else
			printf("bullshit \n");
			}
		}
	}

printf("You have finished your guess, enter your final answer(seperate the words using ,)\n");

for(j=0;j<4;j++)
scanf("%d", &b[j]);

if(a[4]==b[4])
printf("Kudos you are indeed smart");
else
printf("You suck");
getch();
}
