#include<stdio.h>
#include<stdlib.h>
#include<time.h> // use time(0) to get the current second as the seed of rand()
#include<stdbool.h>//to express true and false

void dot(char seat[9][9]){//turn all the element in seat into '.'
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			seat[i][j]='.';
		}
	}
}

void random(char seat[9][9]){
	srand(time(0));//make seat difference in every moment
	
	int booked=0;//generate 10 seats booked
	while(booked<10){
		int row=rand()%9;//remainder of a random number divided by 9 ,
		int col=rand()%9;//to get random number 1~8
		
		if(seat[row][col]=='.'){//turn'.'into'*' to represent the seat booked
		seat[row][col]='*';
		booked++; 
		}
	}
}

void show(char seat[9][9]){//showing the seats
	int i,j;
	for(i=8;i>=0;i--){
		printf("%d-", i+1);//row number
		
		for(j=0;j<9;j++){
			printf(" %c", seat[i][j]);
		}
		printf("\n");
	}

}

bool check(char seat[9][9],int row,int col, int num, bool h){
	//to check the seat availability,
	//bool h:true for the horizontal direction,false for the vertical
	int i;
		if(h){
			if(col+num>9){//start from seat[row][col],cheak isn't all the num seats to the right is '.'
				return false;}
			for(i=0;i<num;i++){
				if(seat[row][col+i]!='.'){return false;
				}
			}}
		else{
				if(row+num>9){//start from seat[row][col],cheak isn't all the num seats down is '.'
					return false;
				}
				for(i=0;i<num;i++){
					if(seat[row+1][col]!='.'){return false;
					}
				}
			}
			return true;
			}
			
			
			
		

bool arr(char seat[9][9],int num){//to find enough seats arrangement
	int i,j,k;
	for(i=0;i<9;i++){//try horizontal arrangement
		for(j=0;j<=9-num;j++){
			if(check(seat,i,j,num,true)){
				for(k=0;k<num;k++){
					seat[i][j+k]='@';
				}
				return true;
			}
		}
	}
	
	
	for(j=0;j<9;j++){//try vertical arrangement
		for(i=0;i<=9-num;i++){
		if(check(seat,i,j,num,false)){
			for(k=0;k<num;k++){
				seat[i+k][j]='@';
			}
			return true;
		}
	}
}
	
	if(num==4){//try 4 arrangement seats
		for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				if(seat[i][j]=='.'&& seat[i][j+1]=='.'&&
				   seat[i+1][j]=='.'&& seat[i+1][j+1]=='.'){
				   
				   seat[i][j]='@';
				   seat[i][j+1]='@';
				   seat[i+1][j]='@';
				   seat[i+1][j+1]='@';
				   return true;
			}
			}
		}
	}
}
int main(void){
	printf("                                   \n");
	printf("         ´^                        \n");
	printf("         ´^                    ´^  \n");
	printf("         ´^´^´^´^            ´^´^  \n");
	printf("   ´^´^´^                 ´^       \n");
	printf("         ´^              ´^        \n");
	printf("       ´^´^´^         ´^´^         \n");
	printf("                     ´^       ´^´^ \n");
	printf("          ´^´^             ´^ ´^   \n");
	printf("      ´^´^     ´^       ´^´^       \n");
	printf("     ´^       ´^       ´^          \n");
	printf("       ´^´^ ´^                       ´^ \n");
	printf("       ´^      ´^                ´^´^ \n");
	printf("        ´^    ´^  ´^´^          ´^ \n");
	printf("         ´^  ´^´^´^           ´^´^ \n");
	printf("          ´^´^              ´^     \n");
	printf("     ´^´^                ´^´^      \n");
	printf("    ´^                ´^´^         \n");
	printf("                                   \n");
	printf("                                   \n");
	system("PAUSE");
	system("CLS");
	int key ,wrong=0;
	pass:
	printf("enter password (2025)\n");
	scanf("%d",&key);
	if(key==2025){
		system("CLS");
		goto manu;
	}
	else{
		wrong++;
		printf("wrong enter %d time(s)\n",wrong);
		if(wrong==3){
			printf("bye bye ~\n");
			return 0;
		}
		goto pass;
	}
	
	manu:
	printf(" ---------------------------- \n");
	printf("|  a. Available seats        |\n");
	printf("|  b. Arrang for you         |\n");
	printf("|  c. Choose by yourself     |\n");
	printf("|  d. Exit                   |\n");
	printf(" ---------------------------- \n");	
	
	char manu;
	printf("enter the choice you want¡G");
	scanf(" %c",&manu);
	if(manu=='a'){//choice a
		system("CLS");
		char seat[9][9];
		dot(seat);
		random(seat);
		
		printf("   1 2 3 4 5 6 7 8 9\n");
		show(seat);
		
		system("PAUSE");
		system("CLS");
		goto manu;
	}
	
	if(manu=='b'){//choice b
		system("CLS");
		char seat[9][9];
		dot(seat);
		random(seat);
		
		int b;
		ask_b:
		printf("how many seat you need(1~4)\n");
		scanf("%d", &b);
		if(b<1||b>4){
			system("CLS");
			printf("wrong\n");
			goto ask_b;
		}
		
		if(arr(seat,b)){
			printf("\n arranged seat:\n");
			printf("   1 2 3 4 5 6 7 8 9\n");
			show(seat);
			
			printf("\n are you satisfied? (y/n):");
			char sb;
			int i,j;
			scanf(" %c",&sb);
			if(sb=='y'){//enter y,turn all the seats that just booking as '@'into '*'
				for(i=0;i<9;i++){
					for(j=0;j<9;j++){
						if(seat[i][j]=='@'){//turns the seat '@'into'*' to express the seat is successful booked 
							seat[i][j]='*';
						}
					}
				}
				system("CLS");
				printf("yes~~~\n");
				goto manu;
			}
			if(sb=='n'){
				system("CLS");
				goto manu;}
		}
		
		
		}
		
	if(manu=='c'){//choice c
		system("CLS");
		char seat[9][9];
		dot(seat);
		random(seat);
		printf("   1 2 3 4 5 6 7 8 9\n");
		show(seat);
		int askc,c;
		int rowc,colc;
		int ii,jj;
		ask_c:
		printf("how many seat you want choice?(1~9)");
		scanf("%d",&askc);
		if(askc>9||askc<1){
			printf("wrong!\n");
			goto ask_c;
		}
		
		for(c=0;c<askc;c++){
			ask_c2:
			printf("enter row and column of the seat %d(e.g. 3-5)",c+1);
			scanf("%d-%d", &rowc, &colc);
			
			if(rowc<1||rowc>9||colc<1||colc>9){//play wrong if the seat isn't exist
				printf("wrong\n");
				goto ask_c2;
			}
			
			if(seat[rowc-1][colc-1]!='.'){//play wrong if the seat is already taken
				printf("seat %d-%d is already taken!\n",rowc,colc);
				goto ask_c2;
			}
			
			seat[rowc-1][colc-1]='@';//turns the seat into'@' to express the seat is successful booked 
		}
		
		printf("\nyour selected seat :\n");
		printf("   1 2 3 4 5 6 7 8 9\n");
		show(seat);
		
		system("PAUSE");
		
		for(ii=0;ii<9;ii++){//turn all the seats that just booking as '@'into '*'
			for(jj=0;jj<9;jj++){
				if(seat[ii][jj]=='@'){
					seat[ii][jj]=='*';
				}
			}
		}
		system("CLS");
		goto manu ;	
		}
		
	if(manu=='d'){
		printf("continue?(y/n:)");
		char keyd;
		scanf(" %c", &keyd);
		if(keyd=='n'){
			return 0;
		}
		if(keyd=='y'){
			system("CLS");
			goto manu;
		}
		}
	
	else{
		system("CLS");
		goto manu;
	}
	
	
	return 0;}
	/*my learning journey in daveloping the seat booking system*/
	/*To be honest, most of this code was actually generated with AI tools. 
	Initially, I had no idea how to make seats appear randomly, 
	but after consulting AI, I learned about the <time.h> library and functions 
	like srand() and rand() that use time-based calculations to simulate randomness. 
	Then, for finding consecutive or specific seats in randomized layouts, 
	I encountered <stdbool.h>, which simplifies true/false logic in checks.
	While I¡¦ve tried to break things down step by step and 
	added comments to understand these unfamiliar concepts, 
	I¡¦m still struggling to fully grasp Boolean types and the design logic behind the AI-provided code. 
	The structure works, but the underlying principles¡X
	like why certain functions are modularized or how Boolean values streamline conditions¡X
	aren¡¦t entirely clear to me yet. */
		
		
		
		
		
	

