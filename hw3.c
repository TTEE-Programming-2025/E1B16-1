#include<stdio.h>
#include<stdlib.h>
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
	
	printf(" ---------------------------- \n");
	printf("|  a. Available seats        |\n");
	printf("|  b. Arrang for you         |\n");
	printf("|  c. Choose by yourself     |\n");
	printf("|  d. Exit                   |\n");
	printf(" ---------------------------- \n");	
	
	char manu;
	scanf("%c",&manu);
	if(manu=='a'){
		system("CLS");
	}
	return 0;
}
