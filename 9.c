# include <stdio.h>
# include <string.h>
#define MAX 10
int i=0,j=0,z=0,k;
void zhengshu(struct USER user[MAX],char store[10]);
void dengyu(struct USER user[MAX],char store[10],int k);
int exc1(char store[10]);
struct USER
{
    char name[20];//zhan�������
    char cum[20];//�������֣�ʮ
	int  sum[20];//��������
};

int main()
{
//int flag;
char store[20];
struct USER user[MAX];
store[0]='\0';
/*/scanf("%s",store);
strcpy(user[0].name,store);
strcpy(user[1].name,store);
/*/
/*/
do
{
scanf("%s",store);
for(i=0;i<20;i++){
	if(store==user[i].name){
		break;flag=1;
}
}
if(flag)break;
}
while(strcmp(store,"����")==0||strcmp(store,"����")!=0)
printf("%s\n",user[i].name);
/*/
while(strcmp(store,"����")!=0)//����
{
	scanf("%s",store);
    if(strcmp(store,"����")==0){
     zhengshu(user,store);i++;
	}
    if(strcmp(store,"����")==0){
		scanf("%s",store);
        user[i].sum[0]=exc1(store);
	}
   for(i=0;i<20;i++){
	if(store==user[i].name){
		puanduan();break;flag=1;
}

}
if(flag)break;
}
printf("%s\n",user[i].name);
}



}
printf("%s\n",user[0].name[0]);
printf("%s\n",user[1].name[0]);
printf("%d\n",user[0].sum[0]);
printf("%d\n",user[1].sum[0]);

}

void zhengshu(struct USER user[MAX],char store[10])
{
scanf("%s",store);//С������-С���㻨Ǯ
strcpy(user[i].name[0],store);//���������
}

void panduan(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//�ж�ֵ

 if(strcmp(store,"����")==0){
     dengyu(USER,store,k);
	}
    if(strcmp(store,"����")==0){
     zhengshu(USER,store,k);i++;
	}
	if(strcmp(store,"����")==0){
     jiansao(USER,store,k);
	}
	if(strcmp(store,"����")==0){
     zhengjia(USER,store,k);
	}
	if(strcmp(store,"����")==0){
     dayu(USER,store,k);
	}


}


int exc1(char store[10])//����ת��Ϊ����
{
    if(strcmp(store,"��")==0) return 0;
    else if(strcmp(store,"һ")==0) return 1;
    else if(strcmp(store,"��")==0) return 2;
    else if(strcmp(store,"��")==0) return 3;
    else if(strcmp(store,"��")==0) return 4;
    else if(strcmp(store,"��")==0) return 5;
    else if(strcmp(store,"��")==0) return 6;
    else if(strcmp(store,"��")==0) return 7;
    else if(strcmp(store,"��")==0) return 8;
    else if(strcmp(store,"��")==0) return 9;
    else if(strcmp(store,"ʮ")==0) return 10;
    else return -1;
}

void exc2(int sum)//����ת��Ϊ����
{
    if(sum<=10){
        switch(sum){
            case 0:strcpy(c,"��");break;
            case 1:strcpy(c,"һ");break;
		    case 2:strcpy(c,"��");break;
			case 3:strcpy(c,"��");break;
			case 4:strcpy(c,"��");break;
			case 5:strcpy(c,"��");break;
			case 6:strcpy(c,"��");break;
			case 7:strcpy(c,"��");break;
			case 8:strcpy(c,"��");break;
			case 9:strcpy(c,"��");break;
			case 10:strcpy(c,"ʮ");break;
	
        }
    }
    else if(11<=sum&&sum<=19){
        switch(sum%10){
            case 1:strcpy(c,"ʮһ");break;
            case 2:strcpy(c,"ʮ��");break;
            case 3:strcpy(c,"ʮ��");break;
            case 4:strcpy(c,"ʮ��");break;
            case 5:strcpy(c,"ʮ��");break;
            case 6:strcpy(c,"ʮ��");break;
            case 7:strcpy(c,"ʮ��");break;
            case 8:strcpy(c,"ʮ��");break;
            case 9:strcpy(c,"ʮ��");break;
        }
    }
}

void exc3(char s[10])//ȡ������
{
int i,L;
L=strlen(s);
for(i=L-1;i>=0;i--)
{ 
if(s[i]=='"') 
strcpy(&s[i],&s[i+1]);
}
strcpy(b,s);
}
