#include<stdio.h> 
#include<stdlib.h> 
int main(void){
	printf("\n|--------------個人風格的畫面--------------|");
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
	printf("\n|---------------E1B16彭宏瑜----------------|");
	printf("\n|------------------------------------------|");
	printf("\n");
	printf("\n");

	char key[5];/*輸入密碼*/
	int wrong=0; 
	printf("請輸入密碼(密碼是2025)：");
	do{
		scanf("%s",key);
		if(key[0]=='2'&&key[1]=='0'&&key[2]=='2'&&key[3]=='5'&&key[4]=='\0'){
		fflush(stdin);
		system("CLS");
		break ; } 
		else{
		wrong++;
		fflush(stdin);
		printf("已輸入錯誤%d次，錯誤三次就再見\n",wrong);
		if(wrong==3){
		printf("掰掰");return 0;}}		
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
	printf("輸入你要的選項：");
	char choice;

		
	scanf(" %c",&choice) ;
	if(choice=='a'){
		system("CLS");
		ask_a:
		printf("請輸入一整數值n介於5~10：");
		int n;
		scanf("%d",&n);
		if(n<=10&&n>=5){
		a(n);}
		else{
			system("CLS");
			printf("輸入錯誤\n");
			goto ask_a;
		}
		}
	if(choice=='b'){
		b();}
		
	if(choice=='c'){
		c();}
	if(choice=='d'){
		d();}
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
				float avg;
		 	} ;
struct a s[10];
		 	
int snum=0;
		 		
int a(int n){
	system("CLS");
	snum=0;
	int i;
			for(i=0;i<n;i++){
				printf("輸入學生%d 姓名：",i+1);
				scanf(" %s",s[i].name);
				number:
				printf("輸入該學生學號：");
				scanf("%d",&s[i].number);
				if(s[i].number>999999||s[i].number<0){
					printf("wrong,please enter again\n");
					goto number;
				}
				math:
				printf("輸入該學生數學成績：");
				scanf("%d",&s[i].math);
				if(s[i].math>100||s[i].math<0){
					printf("wrong,please enter again\n");
					goto math;
				}
				psy:
				printf("輸入該學生物理成績：");
				scanf("%d",&s[i].phy);
				if(s[i].phy>100||s[i].phy<0){
					printf("wrong,please enter again\n");
					goto psy;
				}
				eng:
				printf("輸入該學生英文成績：");
				scanf("%d",&s[i].eng);
				if(s[i].eng>100||s[i].eng<0){
					printf("wrong,please enter again\n");
					goto eng;
					
				}
				s[i].avg=(float)(s[i].math+s[i].phy+s[i].eng)/3;
				snum++;
				printf("\n");
				
			}
		}
	


void b(){
	system("CLS");
	int i;
	for(i=0;i<snum;i++){
		printf("學生姓名：%s\n",s[i].name);
		printf("學生學號：%d\n",s[i].number);
		printf("數學成績：%d\n",s[i].math);
		printf("物理成績：%d\n",s[i].phy);
		printf("英文成績：%d\n",s[i].eng);
		printf("平均成績：%3.1f\n",s[i].avg);

		printf("\n");
	}
	system("PAUSE");
}

void c(){
	system("CLS");
	printf("輸入要搜尋的同學姓名：");
	char name[10];
	scanf(" %s",name);
	int i,ser=0;
	for(i=0;i<snum;i++){
		if(strcmp(name,s[i].name)==0){
		printf("學生姓名：%s\n",s[i].name);
		printf("學生學號：%d\n",s[i].number);
		printf("數學成績：%d\n",s[i].math);
		printf("物理成績：%d\n",s[i].phy);
		printf("英文成績：%d\n",s[i].eng);
		printf("平均成績：%3.1f\n",s[i].avg);
		}
		else{
			ser++;
		}
		
	}
	if(ser==snum){
		printf("資料不存在\n");
	}
	system("PAUSE");

}

void swap(struct a *a, struct a *b){
	struct a temp=*a;
	*a=*b;
	*b=temp;
}

void arr(struct a s[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(s[j].avg<s[j+1].avg){
				swap(&s[j],&s[j+1]);
			}
		}	
	}
} 

void d(){
	system("CLS");
	arr(s,snum);
	
	int i;
	for(i=0;i<snum;i++){
		printf("學生姓名：%s\n",s[i].name);
		printf("學生學號：%d\n",s[i].number);
		printf("平均成績：%3.1f\n",s[i].avg);
		printf("\n");
	}	
		
		
		
	system("PAUSE");
}

		
		
	
	


