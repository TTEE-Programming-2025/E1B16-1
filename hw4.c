#include<stdio.h> 
#include<stdlib.h> 
int main(void){//�ӤH����e�� 
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
	
	m://�D��� 
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
	if(choice=='a'){//�\��a 
		system("CLS");
		ask_a:
		printf("�п�J�@��ƭ�n����5~10�G");
		int n;
		scanf("%d",&n);
		if(n<=10&&n>=5){//n�ȬO�_�b�n�D�϶��� 
		a(n);//n�ȦX�z�A�I�s�禡a 
		}
		else{//n�Ȥ��X�z�A���s��J 
			system("CLS");
			printf("��J���~\n");
			goto ask_a;
		}
		}
	if(choice=='b'){//b�ﶵ 
		b();//�I�s�禡b 
		}
	if(choice=='c'){//c�ﶵ 
		c();//�I�s�禡c 
		}
	if(choice=='d'){//d�ﶵ 
		d();//�I�s�禡d 
		}
	if(choice=='e'){//e�ﶵ 
		system("CLS");
		e:
		printf("�T�{���}�H(y/n)�G");
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
			printf("��J���~�ﶵ�A�A��J�@��\n");
			goto e;
		}
	}
	system("CLS");
	goto m;

	return 0;
}

struct a{//�ŧi���ca 
	char name[10];
	int number;
	int math;
	int phy;
	int eng;
	float avg;
	} ;
struct a s[10];//���c�ܼ�s,�B��10�Ӧs�� 
		 	
int snum=0;//snum�ΨӬ����w��J�����c�ƶq 
		 		
int a(int n){
	system("CLS");
	snum=0; 
	int i;
			for(i=0;i<n;i++){//�ھڸ߰ݼƶq�ӿ�Jn�ӵ��c 
				printf("��J�ǥ�%d �m�W�G",i+1);
				scanf(" %s",s[i].name);
				number:
				printf("��J�Ӿǥ;Ǹ��G");
				scanf("%d",&s[i].number);
				if(s[i].number>999999||s[i].number<0){//�Y�Ǹ��p��s�ζW�L�����,���s��J 
					printf("wrong,please enter again\n");
					goto number;
				}
				math:
				printf("��J�ӾǥͼƾǦ��Z�G");
				scanf("%d",&s[i].math);
				if(s[i].math>100||s[i].math<0){//���Z���X�z�h�n�D���� 
					printf("wrong,please enter again\n");
					goto math;
				}
				psy:
				printf("��J�Ӿǥͪ��z���Z�G");
				scanf("%d",&s[i].phy);
				if(s[i].phy>100||s[i].phy<0){//���Z���X�z�h�n�D���� 
					printf("wrong,please enter again\n");
					goto psy;
				}
				eng:
				printf("��J�Ӿǥͭ^�妨�Z�G");
				scanf("%d",&s[i].eng);
				if(s[i].eng>100||s[i].eng<0){//���Z���X�z�h�n�D���� 
					printf("wrong,please enter again\n");
					goto eng;
					
				}
				s[i].avg=(float)(s[i].math+s[i].phy+s[i].eng)/3;//�T��ئ��Z������ 
				snum++;//�����@�����c�s��,�w�s�����c�ƶq+1 
				printf("\n");
				
			}
		}
	


void b(){
	system("CLS");
	int i;
	for(i=0;i<snum;i++){//�L�X�w��J���Ҧ����c,�@snum�� 
		printf("�ǥͩm�W�G%s\n",s[i].name);
		printf("�ǥ;Ǹ��G%d\n",s[i].number);
		printf("�ƾǦ��Z�G%d\n",s[i].math);
		printf("���z���Z�G%d\n",s[i].phy);
		printf("�^�妨�Z�G%d\n",s[i].eng);
		printf("�������Z�G%3.1f\n",s[i].avg);

		printf("\n");
	}
	system("PAUSE");
}

void c(){ 
	system("CLS");
	printf("��J�n�j�M���P�ǩm�W�G");
	char name[10];
	scanf(" %s",name);
	int i,ser=0;//ser�ΨӬd�ݴM�䥢�Ѫ����� 
	for(i=0;i<snum;i++){
		if(strcmp(name,s[i].name)==0){//�p�G�j�M���W�r�@��,�L�X�Ӳյ��c 
		printf("�ǥͩm�W�G%s\n",s[i].name);
		printf("�ǥ;Ǹ��G%d\n",s[i].number);
		printf("�ƾǦ��Z�G%d\n",s[i].math);
		printf("���z���Z�G%d\n",s[i].phy);
		printf("�^�妨�Z�G%d\n",s[i].eng);
		printf("�������Z�G%3.1f\n",s[i].avg);
		}
		else{
			ser++;
		}
		
	}
	if(ser==snum){//�j�M���ƥ��ѩM��J���c�ƶq�@��,�P�w�d�L���H 
		printf("��Ƥ��s�b\n");
	}
	system("PAUSE");

}

void swap(struct a *a, struct a *b){//�Q�Ϋ��й�{�洫���c 
	struct a temp=*a;
	*a=*b;
	*b=temp;
}

void arr(struct a s[],int n){//�ƦC,�Y��e�ƾڤp��U�@�ռƾ�,�N�o��ӵ��c�洫 
	int i,j;
	for(i=0;i<n-1;i++){//�������c����H,n�ӵ��c�ݭn�������y�����洫n-1���O�ұƦC���T //�ǦC[0]���P�Ĥ@�ռƾ� 
		for(j=0;j<n-1;j++){
			if(s[j].avg<s[j+1].avg){
				swap(&s[j],&s[j+1]);
			}
		}	
	}
} 

void d(){//�L�X�ƦC�n���Ҧ����c 
	system("CLS");
	arr(s,snum);
	
	int i;
	for(i=0;i<snum;i++){
		printf("�ǥͩm�W�G%s\n",s[i].name);
		printf("�ǥ;Ǹ��G%d\n",s[i].number);
		printf("�������Z�G%3.1f\n",s[i].avg);
		printf("\n");
	}	
		
		
		
	system("PAUSE");
}
//�o���@�~�|��ı�o���I�b�\��d,��j�p������,�@�}�l�Q�F�ܤ[�n���Ψ禡��{�j�p�ƦC���ĪG,
//��M�˨�@�~�楪�W�����o���@�~�O���ЩM���c���m�ߡA��O�^�h�ݽҥ����Ф��e���ɭ�
//��n�ݨ�ҥ����X10-24���洫�禡(swap),�~�Q��i�H�Q�Υ洫,�A�[�W�j�p����ӹ�{�ƧǪ��ĪG�G 
//�p�G�Ĥ@�ӼƦr�p��ĤG��,��������;�ĤG�M�ĤT;�ĤT�M�ĥ|..., 
//���Ƴo�Ӿާ@(���j��)n(�`�ƶq)-1���A�N�৹���ƦC�X�ӤF�C 
// �H�W�C 

		
		
	
	


