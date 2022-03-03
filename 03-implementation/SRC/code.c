#include<stdio.h>
#include<stdlib.h>
int rd()
{
int rem;
     B:rem=rand()%7;
if(rem==0)
		goto B;
else
		return rem;
}
void displaychart(int egg,char player[4])
{	int i,j,t,c,sft=0,diceres,p1,p2;
if(egg==100)
{
	printf("*****Congratulations YOU WIN*****\n\n\nPlayer %s wins\n",player);
	scanf("%*s");
	exit(0);
}
for(i=10;i>0;i--)
{
t=i-1;
if((sft%2)==0)
{
 c=0;
for(j=10;j>=1;j--)
{
diceres=(i*j)+(t*c++);
if(egg==diceres)
printf("%s\t",player);
else
printf("%d\t",diceres);
}
sft++;
}
else
{
c=9;
for(j=1;j<=10;j++)
{
diceres=(i*j)+(t*c--);
if(egg==diceres)
      printf("%s\t",player);
else
      printf("%d\t",diceres);
}
sft++;
}
printf("\n\n");
}
printf("--------------------------------------------------------------------------\n");
}
void main()
{
	int i,dice,cur_p1=0,cur_p2=0;
	char ch;
	while(1)
	{	printf("		** SNAKE AND LADDER ** \n		Coded By ARAGONDA GANESH REDDY\n");
		printf("Snakes:- 25 to 9,\t 65 to 40,\t 99 to  1.\nLadder:- 13 to 42,\t 60 to 83,\t 70 to 93.\n");
		printf("Choose your option\n");
		printf("1. Player 1 plays\n");
		printf("2. Player 2 plays\n");
		printf("3. Exit\n");
		scanf("%s",&ch);
	        switch(ch)
		{
		case '1':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					if(dice==6)
					printf("Dice=6: You have earned a chance to play one more time.\n");
					cur_p1=dice+cur_p1;
					if(cur_p1<101){
						if(cur_p1==99)
						{
						displaychart(1,"$GANESH$");//snake
						}
						if(cur_p1==65)
						{
						displaychart(40,"$GANESH$");//snake
						}
						if(cur_p1==25)
						{
						displaychart(9,"$GANESH$");//snake
						}
						if(cur_p1==70)
						{
						displaychart(93,"$GANESH$");//ladder
						}
						if(cur_p1==60)
						{
						displaychart(83,"$GANESH$");//ladder
						}
						if(cur_p1==13)
						{
						displaychart(42,"$GANESH$");//ladder
						}
						else{
							displaychart(cur_p1,"$GANESH$");
						}
	               				}
				else{
						cur_p1=cur_p1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(cur_p1,"$GANESH$");
					}
					printf("Player 2 position is %d\n",cur_p2);
			
				break;
			case '2':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					cur_p2=dice+cur_p2;
					if(cur_p2<101){
						if(cur_p2==99)	//snake
						{
						displaychart(1,"$MANOJ$");
						}
						if(cur_p2==65)	//snake
						{
						displaychart(40,"$MANOJ$");
						}
						if(cur_p2==25)	//snake
						{
						displaychart(9,"$MANOJ$");
						}
						if(cur_p2==70)	//ladder
						{
						displaychart(93,"$MANOJ$");
						}
						if(cur_p2==60)	//ladder
						{
						displaychart(83,"$MANOj$");
						}
						if(cur_p2==13) 	//ladder
						{
						displaychart(42,"$MANOJ$");
						}
						else{
							displaychart(cur_p2,"$MANOJ$");
						}
					}
					else{
						cur_p2=cur_p2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_p2,"$MANOJ$");
					}
					printf("Player 1 position is %d\n",cur_p1);
				break;
			case '3':exit(0);
				break;
			default:printf("Incorrect choice.Try Again\n");		
		}
	}
}
