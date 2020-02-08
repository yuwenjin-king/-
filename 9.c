# include <stdio.h>
# include <string.h>
#define MAX 10
int i=0,j=0,z=0,k;
void zhengshu(struct USER user[MAX],char store[10]);
void dengyu(struct USER user[MAX],char store[10],int k);
int exc1(char store[10]);
struct USER
{
    char name[20];//zhan存变量名
    char cum[20];//保存文字，十
	int  sum[20];//保存数字
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
while(strcmp(store,"看看")==0||strcmp(store,"看看")!=0)
printf("%s\n",user[i].name);
/*/
while(strcmp(store,"看看")!=0)//整数
{
	scanf("%s",store);
    if(strcmp(store,"整数")==0){
     zhengshu(user,store);i++;
	}
    if(strcmp(store,"等于")==0){
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
scanf("%s",store);//小杨年龄-小杨零花钱
strcpy(user[i].name[0],store);//保存变量名
}

void panduan(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//判断值

 if(strcmp(store,"等于")==0){
     dengyu(USER,store,k);
	}
    if(strcmp(store,"整数")==0){
     zhengshu(USER,store,k);i++;
	}
	if(strcmp(store,"减少")==0){
     jiansao(USER,store,k);
	}
	if(strcmp(store,"增加")==0){
     zhengjia(USER,store,k);
	}
	if(strcmp(store,"大于")==0){
     dayu(USER,store,k);
	}


}


int exc1(char store[10])//汉字转化为数字
{
    if(strcmp(store,"零")==0) return 0;
    else if(strcmp(store,"一")==0) return 1;
    else if(strcmp(store,"二")==0) return 2;
    else if(strcmp(store,"三")==0) return 3;
    else if(strcmp(store,"四")==0) return 4;
    else if(strcmp(store,"五")==0) return 5;
    else if(strcmp(store,"六")==0) return 6;
    else if(strcmp(store,"七")==0) return 7;
    else if(strcmp(store,"八")==0) return 8;
    else if(strcmp(store,"九")==0) return 9;
    else if(strcmp(store,"十")==0) return 10;
    else return -1;
}

void exc2(int sum)//数字转化为汉字
{
    if(sum<=10){
        switch(sum){
            case 0:strcpy(c,"零");break;
            case 1:strcpy(c,"一");break;
		    case 2:strcpy(c,"二");break;
			case 3:strcpy(c,"三");break;
			case 4:strcpy(c,"四");break;
			case 5:strcpy(c,"五");break;
			case 6:strcpy(c,"六");break;
			case 7:strcpy(c,"七");break;
			case 8:strcpy(c,"八");break;
			case 9:strcpy(c,"九");break;
			case 10:strcpy(c,"十");break;
	
        }
    }
    else if(11<=sum&&sum<=19){
        switch(sum%10){
            case 1:strcpy(c,"十一");break;
            case 2:strcpy(c,"十二");break;
            case 3:strcpy(c,"十三");break;
            case 4:strcpy(c,"十四");break;
            case 5:strcpy(c,"十五");break;
            case 6:strcpy(c,"十六");break;
            case 7:strcpy(c,"十七");break;
            case 8:strcpy(c,"十八");break;
            case 9:strcpy(c,"十九");break;
        }
    }
}

void exc3(char s[10])//取掉引号
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
