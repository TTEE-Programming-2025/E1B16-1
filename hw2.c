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
	printf("\n|--------------���U���N���~��--------------|");
	system("pause");
	system("CLS");
	
	char key[5];
	int wrong=0; /*�ŧi�r��key�s�x��J���K�X�A�ܼ�wrong������J���~����*/
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
	/*�Y��Jkey��2025�A���Xif����U�@�B�F�����hwrong��+1�A�W�L�T�������{��*/
	
	manu:/*���B�аO�H�K����goto���ϥ�*/
	printf("\n|--------------------------------------|");
	printf("\n|           a.�e�X�����T����           |");
	printf("\n|--------------------------------------|");
	printf("\n|             b.��ܭ��k��             |");
	printf("\n|--------------------------------------|");
	printf("\n|                c.����                |");
	printf("\n|--------------------------------------|\n");
	printf("\n         �п�JA��a,B��b�H�~�� �G       \n");
	
	int letter,i,j,k;
	char manu_key[2],tri[2];
	scanf("%s",manu_key);
	if(manu_key[1]=='\0'&&manu_key[0]=='a'||manu_key[1]=='\0'&&manu_key[0]=='A') { /*�Y��J��c1��A��a�A�M�ſù��ín�D��J�r��*/
		system("CLS");
		ask1:/*���B�аO�H�K����goto���ϥ�*/
		printf("��J�@��a~n���r��(�ȭ��p�g)�G");
		scanf("%s",tri);
		letter=tri[0];/*�Na2�]����J�r��c2��ascii code*/
		if(tri[0]>='a'&&tri[0]<='n'&&tri[1]=='\0'){ /*�Y��J���r��c2����a~n�����A����U��for�j�鲣�ͪ����T����*/
		printf("\n");
		for(i=letter-'a';i>=0;i--){/*i�Ψӭp��һݪ��C��(��X\n)�A�]����J�Ȥ���a~n�A
		�]���Ni�_�l�ȳ]����J�ȴ�h'a'�A�u�ni�j�󵥩�0�Ai--�A�ÿ�X\n*/
			for(k=i;k>0;k--){/*k�Ψӭp��Ů檺��X�q�A�u�ni�j��0�Ak--�ÿ�X�@�ӪŮ�*/
				printf(" ");
			}
			for(j=i;j<=letter-'a';j++){/*j�Ψӿ�X�r�šA�S�]���n�e�{�X�����T���ΡA��bk���U��A
			                        j��l�Ȯھ�i�ȡA�Yi�p�󵥩�a2-'a'�Aj++�ÿ�X�r��j+'a' */
				printf("%c",j+'a');
			}
			printf("\n");
		}
		fflush(stdin);
		system("pause");
		system("CLS");
		goto manu; /*�{������A�����N��^����*/
		}else{
		printf("�Э��s");
		fflush(stdin);
		goto ask1;}/*��J���~�A�Ϧ^���s��J�r��*/
	}

	if(manu_key[1]=='\0'&&manu_key[0]=='b'||manu_key[1]=='\0'&&manu_key[0]=='B') {/*�Y��J��c1��B��b�A�M�ſù��ín�D��J���1~9*/
		int i1,j1,num1;
		char num[2];
		system("CLS");
		fflush(stdin);
		ask2:/*���B�аO�H�K����goto���ϥ�*/
		printf("��J�@��1~9����ơG");
		scanf("%s", num); 
		if(num[0]>='1'&&num[0]<='9'&&num[1]=='\0'){/*�Y��J�r�Ť���1~9�A�L�X���k��*/
		num1=num[0]-'0';/*num1=num[0]-'0';/*num1�Ȭ�num�Ĥ@�Ӧr����ascii code��h0��ascii code*/
		printf("1*1~%d*%d�����k��p�U:\n",num1,num1);
		for(i1=1;i1<=num1;i1++){/*i�ȥ�1�}�l�A+�ܿ�J�����p1����*/
			for(j1=1;j1<=num1;j1++){/*j��1�}�l�A�P��+�ܿ�J�����p1����*/
				printf("%d*%d=%d  ",i1,j1,i1*j1)	;
			}
			printf(" \n"); 
		}
		system("pause");
		system("CLS");
		goto manu; /*�{������A�����N��^����*/
	}else{
	system("CLS");
	printf("�Э��s");
	fflush(stdin); 
	goto ask2;}/*��J���~�A�Ϧ^���s��J�r��*/
	}
	
	char opt3[2];
	if(manu_key[1]=='\0'&&manu_key[0]=='c'||manu_key[1]=='\0'&&manu_key[0]=='C') {
	printf("\'Continue�H(y/n)\'");
	ask3:/*���B�аO�H�K����goto���ϥ�*/
	printf("\n�Y�n�^����A�Ы�Y��y");
	printf("\n�Y�n�����{���A�Ы�N��n");
	printf("�G\n");
	fflush(stdin);
	scanf("%s",opt3);
	if(opt3[1]=='\0'&&opt3[0]=='Y'||opt3[1]=='\0'&&opt3[0]=='y'){
	system("CLS");
	fflush(stdin);
	goto manu;/*��JY��y�A�^����*/
	}
	else if(opt3[1]=='\0'&&opt3[0]=='N'||opt3[1]=='\0'&&opt3[0]=='n'){
		return 0;/*��JN��n�A�{������*/
	}
	else{
		system("CLS");
		printf("��J���~�A");
		goto ask3 ;/*��J�r���DY,y��N,n�A�Ϧ^���s��J�r��*/
	}
}
	else{
		system("CLS");
		goto manu;
	}
	return 0;
}
/*�o���@�~�ڹJ�쪺�Ĥ@�����I�N�O�r�����T���ΡA�@�}�l�H���Ψ���ܼƤ��O�����C�ƩM�C�L�r���A
  �����~�o�{�٭n�h�@���ܼƨӦC�L�Ů�~��Φ��d�ҤW���T���ΡA 
  �ӥB�]���o�ӤT���Ϊ��r�����ǬO�˵ۦC�L��(cba)�A�@�}�l�b�]�wi��k�n�����ȮɷQ�F�ܤ[�A
  �L�{�]�o�{a2-97�i�H��a2-'a'�����A�ӥB���K�z�ѡC��ӤT���Ϊ��\��N�ӤF�֤@�p�ɡC
  
  �ĤG�����I�O�ڦb�����ծɵo�{�A�@�}�l��J�K�X�������A�p�G�ڿ�J�F�^��r���A�ù��N�|��M�����A
  �ҥH�ڸյۥΦr��N����ƿ�J�A�w���F�줣�׫���J���ॿ�`�B�檺�ĪG�A 
  ���]�]�����e�S���ϥΦr�ꪺ�g��A�ܦh�a�賣�����x�A���O�r��Ŷ��n�d�@�浹����'\0'�F 
  scanf("%s",str)���ݭn�[�W&�F�H��str[0]�����r�ꤤ���Ĥ@�Ӧr���C 
  �Pı�������W�������x�}�Ĥ@����ެ�0�M�x�}���Ъ�a=&a��(?)�A�`���]�դF�n�X���~�F��ڷQ�n���ĪG�A
  ���ڤ����D�n��򭭨�Ū�����r��j�p�A�ҥH���ͤF�@�ӷs�����D�A
  �H��J�K�X���ҡA�ڦbif�̧P�_�r�ꪺ�Ĥ�����'\0' �A�ҥH��ڿ�J202512345�ɡA�|�Q�n�D���s��J�A 
  ���p�G��J2025 12345���ܡA�@�˯�i����̡A 
  �N�o�I�ڤ����D�n���ק�A�åB�o�ӵ{����L��J�\�ೣ���P�˪����D�C*/








