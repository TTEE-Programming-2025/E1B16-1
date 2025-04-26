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
	printf("\n|--------------按下任意鍵繼續--------------|");
	system("pause");
	system("CLS");
	
	int key,wrong=0; /*宣告字串key存儲輸入的密碼，變數wrong紀錄輸入錯誤次數*/
	printf("請輸入密碼(密碼是2025)：");
	do{
		scanf("%d",&key);
		if(key==2025){
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
	/*若輸入key為2025，跳出if執行下一步；不為則wrong值+1，超過三次結束程式*/
	
	manu:/*此處標記以便之後goto的使用*/
	printf("\n|--------------------------------------|");
	printf("\n|           a.畫出直角三角形           |");
	printf("\n|--------------------------------------|");
	printf("\n|             b.顯示乘法表             |");
	printf("\n|--------------------------------------|");
	printf("\n|                c.結束                |");
	printf("\n|--------------------------------------|\n");
	printf("\n         請輸入A或a,B或b以繼續 ：       \n");
	
	char tri, manu_key;
	int letter,i,j,k;
	scanf(" %s",&manu_key);
	if(manu_key=='a'||manu_key=='A') { /*若輸入值c1為A或a，清空螢幕並要求輸入字元*/
		system("CLS");
		ask1:/*此處標記以便之後goto的使用*/
		printf("輸入一個a~n的字元(僅限小寫)：");
		scanf(" %s",&tri);
		letter=tri;/*將a2設為輸入字元c2的ascii code*/
		if(tri>='a'&&tri<='n'){ /*若輸入的字元c2介於a~n之間，執行下面for迴圈產生直角三角形*/
		printf("\n");
		for(i=letter-'a';i>=0;i--){/*i用來計算所需的列數(輸出\n)，因為輸入值介於a~n，
		因此將i起始值設為輸入值減去'a'，只要i大於等於0，i--，並輸出\n*/
			for(k=i;k>0;k--){/*k用來計算空格的輸出量，只要i大於0，k--並輸出一個空格*/
				printf(" ");
			}
			for(j=i;j<=letter-'a';j++){/*j用來輸出字符，又因為要呈現出直角三角形，放在k的下方，
			                        j初始值根據i值，若i小於等於a2-'a'，j++並輸出字符j+'a' */
				printf("%c",j+'a');
			}
			printf("\n");
		}
		fflush(stdin);
		system("pause");
		system("CLS");
		goto manu; /*程式停止，按任意鍵回到選單*/
		}else{
		printf("請重新");
		fflush(stdin);
		goto ask1;}/*輸入錯誤，反回重新輸入字元*/
	}
	
	if(manu_key=='b'||manu_key=='b') {/*若輸入值c1為B或b，清空螢幕並要求輸入整數1~9*/
		int i1,j1,num;
		system("CLS");
		fflush(stdin);
		ask2:/*此處標記以便之後goto的使用*/
		printf("輸入一個1~9的整數：");
		scanf("%d",&num); 
		if(num>=1&&num<=9){/*若輸入字符介於1~9，印出乘法表*/
		printf("1*1~%d*%d的乘法表如下:\n",num,num);
		for(i1=1;i1<=num;i1++){/*i值由1開始，+至輸入的整數p1停止*/
			for(j1=1;j1<=num;j1++){/*j由1開始，同樣+至輸入的整數p1停止*/
				printf("%d*%d=%d  ",i1,j1,i1*j1)	;
			}
			printf(" \n"); 
		}
		system("pause");
		system("CLS");
		goto manu; /*程式停止，按任意鍵回到選單*/
	}else{
	system("CLS");
	printf("請重新");
	fflush(stdin); 
	goto ask2;}/*輸入錯誤，反回重新輸入字元*/
	}
	
	char opt3;
	if(manu_key=='c'||manu_key=='C') {
	printf("\'Continue？(y/n)\'");
	ask3:/*此處標記以便之後goto的使用*/
	printf("\n若要回到選單，請按Y或y");
	printf("\n若要結束程式，請按N或n");
	printf("：\n");
	fflush(stdin);
	scanf("%s",&opt3);
	if(opt3=='Y'||opt3=='y'){
	system("CLS");
	fflush(stdin);
	goto manu;/*輸入Y或y，回到選單*/
	}
	else if(opt3=='N'||opt3=='n'){
		return 0;/*輸入N或n，程式結束*/
	}
	else{
		system("CLS");
		printf("輸入錯誤，");
		goto ask3 ;/*輸入字元非Y,y或N,n，反回重新輸入字元*/
	}
}
	else{
		system("CLS");
		goto manu;
	}
	
	return 0;
}









