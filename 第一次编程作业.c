# include <stdio.h>
# include <string.h>
#define MAX 10
//struct USER user[MAX];
int i=0,k;//i用来判断哪个用户
char c[10];//保存输出数字
char b[10];//保存输出文字
//函数声明
void zhengshu(,char store[10]);
int yonghu(struct USER user[MAX],char store[10],int k);
void dengyu(struct USER user[MAX],char store[10],int k);
void zhengjia(struct USER user[MAX],char store[10],int k);
void jiansao(struct USER user[MAX],char store[10],int k);
void dayu(struct USER user[MAX],char store[10],int k);
void kankan(struct USER user[MAX],char store[10],int k);
void ruguo(struct USER user[MAX],char store[10],int k);
void ze(struct USER user[MAX],char store[10]);
void fozhe(struct USER user[MAX],char store[10]);
void panduan(struct USER user[MAX],char store[10]);

int exc1(char s[10]);//汉字转化为数字
void exc2(char s[10]);//数字转化为汉字
void exc3(char s[10]);//取掉引号

struct USER{
    char name[20];//zhan存变量名
    char cum[20];//保存文字，十
	int  sum[20];//保存数字
}user[MAX];

int main()
{  
	char store[20];//暂时存放文字
	 store[0]='\0'; c[0]='\0';
    while(scanf("%s",store))//整数
	{
    if(strcmp(store,"整数")==0){
     zhengshu(user,store);i++;
	}
    if(strcmp(store,"如果")==0){
     ruguo(user,store,i);
	}
    if(strcmp(store,"看看")==0){
     kankan(user,store,i);
	}
	if(yonghu(user,store,i)!=0){ //判断是否输入的是用户
    panduan(user,store,i);//进入判断
	printf("1次");
    }
	}
}

void zhengshu(struct USER user[MAX],char store[10])
{
  scanf("%s",store);//输入用户
  strcpy(user[i].name,store);//保存变量名
  panduan(user,store,i);
}

void panduan(struct USER user[MAX],char store[10],int k){ //判断是否进行运算,比较
 scanf("%s",store);//判断值
 if(strcmp(store,"等于")==0){
     dengyu(user,store,k);
	}
 if(strcmp(store,"减少")==0){
		printf("2");
     jiansao(user,store,k);
	}
	if(strcmp(store,"增加")==0){
		printf("1");
     zhengjia(user,store,k);
	}
	if(strcmp(store,"大于")==0){
     dayu(user,store,k);
	}
//printf("3");
}

int yonghu(struct USER user[MAX],char store[10],int k){//判断是哪个用户
   for(i=0;i<20;i++){
	if(store==user[i].name[0]){
		break;
}
	return 1;
}
}

void dengyu(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//输入值
user[k].sum[0]=exc1(store);//赋值
//printf("%d",user[k].sum[0]);
}

void zhengjia(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//输入值
user[k].sum[0]+=exc1(store);//加法
printf("1");
}

void jiansao(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//输入值
user[k].sum[0]-=exc1(store);//减法
printf("2");
}

void dayu(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//输入值
if(user[k].sum[0]>exc1(store))
{
ze(user,store,i);
}
else{
fozhe(user,store,i);
}
}

void kankan(struct USER user[MAX],char store[10],int k){
scanf("%s",store);//判断是否输入的是用户
if(yonghu(user,store,k)!=0){
   exc2(user[k].sum[0]);
   printf("%s\n",c);
}else{
exc3(store);//去掉双引号
printf("%s\n",store);
}
}

void ruguo(struct USER user[MAX],char store[10]){
scanf("%s",store);//小杨年龄
if(yonghu(user,store,i)!=0){
	panduan(user,store,i);//进入判断
}
}

void ze(struct USER user[MAX],char store[10]){
scanf("%s",store);//输入值
if(strcmp(store,"看看")==0){
kankan(user,store,i);//输入为看看
}
if(yonghu(user,store,i)!=0){//输入为用户
  panduan(user,store,i);//进入判断
}
}

void fozhe(struct USER user[MAX],char store[10]){
scanf("%s",store);//输入值
if(strcmp(store,"看看")==0){
kankan(user,store,i);
}else{
exc3(store);
printf("%s",b);
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
    else return 0;
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
