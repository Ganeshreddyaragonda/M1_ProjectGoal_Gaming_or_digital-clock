#include<stdio.h>

#include<stdlib.h>

#include<time.h>

intmain()

{

chargamer;// Players punch

intcomputer;// Computer punches

intresult;// The result of the game

// In order to avoid quitting the program after playing a game , You can put the code in a loop

while(1){

printf(" This is a guessing game , Please input your fist ：\n");

printf("A: scissors \nB: stone \nC: cloth \nD: Stop playing \n");

scanf("%c%*c",&gamer);

switch(gamer){

case65://A

case97://a

gamer=4;

break;

case66://B

case98://b

gamer=7;

break;

case67://C

case99://c

gamer=10;

break;

case68://D

case100://d

return0;

 

default:

printf(" Your choice is %c Wrong choice , sign out ...\n",gamer);

getchar();

system("cls");// Clear the screen

return0;

break;

}

 

srand((unsigned)time(NULL));// Random number seed

computer=rand()%3;// Generate random numbers and take the remainder , Get a computer punch

result=(int)gamer+computer;// gamer by char type , When doing mathematical operations, you have to cast the type

printf(" The computer is out ");

switch(computer)

{

case0:printf(" scissors \n");break;//4    1

case1:printf(" stone \n");break;//7  2

case2:printf(" cloth \n");break;//10 3

}

printf(" You're out of ");

switch(gamer)

{

case4:printf(" scissors \n");break;

case7:printf(" stone \n");break;

case10:printf(" cloth \n");break;

}

if(result==6||result==7||result==11)printf(" You win !");

elseif(result==5||result==9||result==10)printf(" The computer won !");

elseprintf(" A draw ");

system("pause>nul&&cls");// Pause and clear the screen

}

return0;

}
