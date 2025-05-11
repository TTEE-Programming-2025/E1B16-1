#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

void dot(char seat[9][9]){//turn all the element in seat into '.'
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			seat[i][j]='.';
		}
	}
}

void random(char seat[9][9]){
	srand(time(0));//make sure seat is difference everytime
	
	int booked=0;//generate 10 seat booked
	while(booked<10){
		int row=rand()%9;
		int col=rand()%9;
		
		if(seat[row][col]=='.'){
		seat[row][col]='*';
		booked++; 
		}
	}
}

void show(char seat[9][9]){
	int i,j;
	for(i=8;i>=0;i--){
		printf("%d-", i+1);//row number
		
		for(j=0;j<9;j++){
			printf(" %c", seat[i][j]);
		}
		printf("\n");
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
	printf("¿é¤J±K½X(2025)\n");
	scanf("%d",&key);
	if(key==2025){
		system("CLS");
		goto manu;
	}
	else{
		wrong++;
		printf("¿é¤J¿ù»~%d¦¸\n",wrong);
		if(wrong==3){
			printf("¦A¨£\n");
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
	printf("¿é¤J»Ý­nªº¿ï¶µ¡G");
	scanf(" %c",&manu);
	if(manu=='a'){
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
	return 0;
}
