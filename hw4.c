#include<stdio.h> 
#include<stdlib.h> 
int main(void){//個人風格畫面 
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
	
	m://主選單 
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
	if(choice=='a'){//功能a 
		system("CLS");
		ask_a:
		printf("請輸入一整數值n介於5~10：");
		int n;
		scanf("%d",&n);
		if(n<=10&&n>=5){//n值是否在要求區間內 
		a(n);//n值合理，呼叫函式a 
		}
		else{//n值不合理，重新輸入 
			system("CLS");
			printf("輸入錯誤\n");
			goto ask_a;
		}
		}
	if(choice=='b'){//b選項 
		b();//呼叫函式b 
		}
	if(choice=='c'){//c選項 
		c();//呼叫函式c 
		}
	if(choice=='d'){//d選項 
		d();//呼叫函式d 
		}
	if(choice=='e'){//e選項 
		system("CLS");
		e:
		printf("確認離開？(y/n)：");
		char e;
		scanf(" %c",&e);
		if(e=='y'){
			return 0;
		}
		if(e=='n'){
			system("CLS");
			goto m;
		}
		else{
			printf("輸入錯誤選項，再輸入一次\n");
			goto e;
		}
	}
	system("CLS");
	goto m;

	return 0;
}

struct a{//宣告結構a 
	char name[10];
	int number;
	int math;
	int phy;
	int eng;
	float avg;
	} ;
struct a s[10];//結構變數s,且有10個存取 
		 	
int snum=0;//snum用來紀錄已輸入的結構數量 
		 		
int a(int n){
	system("CLS");
	snum=0; 
	int i;
			for(i=0;i<n;i++){//根據詢問數量來輸入n個結構 
				printf("輸入學生%d 姓名：",i+1);
				scanf(" %s",s[i].name);
				number:
				printf("輸入該學生學號：");
				scanf("%d",&s[i].number);
				if(s[i].number>999999||s[i].number<0){//若學號小於零或超過六位數,重新輸入 
					printf("wrong,please enter again\n");
					goto number;
				}
				math:
				printf("輸入該學生數學成績：");
				scanf("%d",&s[i].math);
				if(s[i].math>100||s[i].math<0){//成績不合理則要求重輸 
					printf("wrong,please enter again\n");
					goto math;
				}
				psy:
				printf("輸入該學生物理成績：");
				scanf("%d",&s[i].phy);
				if(s[i].phy>100||s[i].phy<0){//成績不合理則要求重輸 
					printf("wrong,please enter again\n");
					goto psy;
				}
				eng:
				printf("輸入該學生英文成績：");
				scanf("%d",&s[i].eng);
				if(s[i].eng>100||s[i].eng<0){//成績不合理則要求重輸 
					printf("wrong,please enter again\n");
					goto eng;
					
				}
				s[i].avg=(float)(s[i].math+s[i].phy+s[i].eng)/3;//三科目成績平均值 
				snum++;//完成一次結構存取,已存取結構數量+1 
				printf("\n");
				
			}
		}
	


void b(){
	system("CLS");
	int i;
	for(i=0;i<snum;i++){//印出已輸入的所有結構,共snum個 
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
	int i,ser=0;//ser用來查看尋找失敗的次數 
	for(i=0;i<snum;i++){
		if(strcmp(name,s[i].name)==0){//如果搜尋的名字一樣,印出該組結構 
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
	if(ser==snum){//搜尋次數失敗和輸入結構數量一樣,判定查無此人 
		printf("資料不存在\n");
	}
	system("PAUSE");

}

void swap(struct a *a, struct a *b){//利用指標實現交換結構 
	struct a temp=*a;
	*a=*b;
	*b=temp;
}

void arr(struct a s[],int n){//排列,若當前數據小於下一組數據,將這兩個結構交換 
	int i,j;
	for(i=0;i<n-1;i++){//全部結構為對象,n個結構需要全部輪流比較後交換n-1次保證排列正確 //序列[0]等同第一組數據 
		for(j=0;j<n-1;j++){
			if(s[j].avg<s[j+1].avg){
				swap(&s[j],&s[j+1]);
			}
		}	
	}
} 

void d(){//印出排列好的所有結構 
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
//這次作業四我覺得難點在功能d,比大小的部分,一開始想了很久要怎麼用函式實現大小排列的效果,
//突然瞄到作業單左上角說這次作業是指標和結構的練習，於是回去看課本指標內容的時候
//剛好看到課本頁碼10-24的交換函式(swap),才想到可以利用交換,再加上大小比較來實現排序的效果： 
//如果第一個數字小於第二個,彼此互換;第二和第三;第三和第四..., 
//重複這個操作(雙迴圈)n(總數量)-1次，就能完美排列出來了。 
// 以上。 

		
		
	
	


