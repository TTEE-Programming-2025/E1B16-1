#include<stdio.h> 
#include<stdlib.h> 
int main(void){
	printf("\n|--------------�ӤH���檺�e��--------------|");
	printf("\n|------------------------------------------|");
	printf("\n|--------------   -------------------------|");
	printf("\n|--------------   ----------------   ------|");
	printf("\n|--------------   --------------     ------|");
	printf("\n|--------------         --------   --------|");
	printf("\n|-------          ------------  -----------|");
	printf("\n|--------------   ----------  -------------|");
	printf("\n|-----------        -----------------------|");
	printf("\n|-------------------------------     ------|");
	printf("\n|---------------       ---------    -------|");
	printf("\n|---------   -----     -------   ----------|");
	printf("\n|---------   ---    --------   -----   ----|");
	printf("\n|-----------   ---   -------------     ----|");
	printf("\n|---------   -----   -------------   ------|");
	printf("\n|----------   --   -------------   --------|");
	printf("\n|-------------        --------  -----------|");
	printf("\n|-----        --------------  -------------|");
	printf("\n|-----------------------    ---------------|");
	printf("\n|---------------------  -------------------|");
	printf("\n|---------------E1B16�^����----------------|");
	printf("\n|------------------------------------------|");
	printf("\n");
	printf("\n");

	char key[5];/*��J�K�X*/
	int wrong=0; 
	printf("�п�J�K�X(�K�X�O2025)�G");
	do{
		scanf("%s",key);
		if(key[0]=='2'&&key[1]=='0'&&key[2]=='2'&&key[3]=='5'&&key[4]=='\0'){
		fflush(stdin);
		system("CLS");
		break ; } 
		else{
		wrong++;
		fflush(stdin);
		printf("�w��J���~%d���A���~�T���N�A��\n",wrong);
		if(wrong==3){
		printf("�T�T");return 0;}}		
	}while(wrong<3);
	
	m:
	printf("\n|-------------[Grade System]---------------|");
	printf("\n|                                          |");
	printf("\n|---------a. Enter student grades----------|");
	printf("\n|                                          |");
	printf("\n|---------b. Display student grades--------|");
	printf("\n|                                          |");
	printf("\n|---------c. Search for student grades-----|");
	printf("\n|                                          |");
	printf("\n|---------d. Grade ranking-----------------|");
	printf("\n|                                          |");
	printf("\n|---------e. Exit system-------------------|");
	printf("\n|                                          |");
	printf("\n|------------------------------------------|");
	printf("\n");
	printf("��J�A�n���ﶵ�G");
	char choice;

		
	scanf(" %c",&choice) ;
	if(choice=='a'){
		system("CLS");
		ask_a:
		printf("�п�J�@��ƭ�n����5~10�G");
		int n;
		scanf("%d",&n);
		if(n<=10&&n>=5){
		a(n);}
		else{
			system("CLS");
			printf("��J���~\n");
			goto ask_a;
		}
		}
	if(choice=='b'){
		b();}
		
	if(choice=='c'){
		c();}
	system("CLS");
	goto m;
	
	
	
	
	return 0;
}

struct a{
				char name[10];
				int number;
				int math;
				int phy;
				int eng;
		 	} s[10];
		 	
int snum=0;
		 		
int a(int n){
	system("CLS");
	snum=0;
	int i;
			for(i=0;i<n;i++){
				printf("��J�ǥ�%d �m�W�G",i+1);
				scanf(" %s",s[i].name);
				number:
				printf("��J�Ӿǥ;Ǹ��G");
				scanf("%d",&s[i].number);
				if(s[i].number>999999||s[i].number<0){
					printf("wrong,please enter again\n");
					goto number;
				}
				math:
				printf("��J�ӾǥͼƾǦ��Z�G");
				scanf("%d",&s[i].math);
				if(s[i].math>100||s[i].math<0){
					printf("wrong,please enter again\n");
					goto math;
				}
				psy:
				printf("��J�Ӿǥͪ��z���Z�G");
				scanf("%d",&s[i].phy);
				if(s[i].phy>100||s[i].phy<0){
					printf("wrong,please enter again\n");
					goto psy;
				}
				eng:
				printf("��J�Ӿǥͭ^�妨�Z�G");
				scanf("%d",&s[i].eng);
				if(s[i].eng>100||s[i].eng<0){
					printf("wrong,please enter again\n");
					goto eng;
					
				}
				snum++;
				printf("\n");
				
			}
		}
	


void b(){
	system("CLS");
	int i;
	for(i=0;i<snum;i++){
		printf("�ǥͩm�W�G%s\n",s[i].name);
		printf("�ǥ;Ǹ��G%d\n",s[i].number);
		printf("�ƾǦ��Z�G%d\n",s[i].math);
		printf("���z���Z�G%d\n",s[i].phy);
		printf("�^�妨�Z�G%d\n",s[i].eng);
		printf("�������Z�G%3.1f\n",(float)(s[i].math+s[i].phy+s[i].eng)/3);

		printf("\n");
	}
	system("PAUSE");
}

void c(){
	system("CLS");
	printf("��J�n�j�M���P�ǩm�W�G");
	char name[10];
	scanf(" %s",name);
	int i,ser=0;
	for(i=0;i<snum;i++){
		if(strcmp(name,s[i].name)==0){
		printf("�ǥͩm�W�G%s\n",s[i].name);
		printf("�ǥ;Ǹ��G%d\n",s[i].number);
		printf("�ƾǦ��Z�G%d\n",s[i].math);
		printf("���z���Z�G%d\n",s[i].phy);
		printf("�^�妨�Z�G%d\n",s[i].eng);
		printf("�������Z�G%3.1f\n",(float)(s[i].math+s[i].phy+s[i].eng)/3);
		}
		else{
			ser++;
		}
		
	}
	if(ser==snum){
		printf("��Ƥ��s�b");
	}
	system("PAUSE");
	
	
}
	 
		
		
	
	


