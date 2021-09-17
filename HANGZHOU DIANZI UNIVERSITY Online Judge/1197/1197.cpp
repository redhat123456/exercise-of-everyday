#include<stdio.h>
int base(int n,int t,int b){
	int i,sum=0;
	if(n==12){
		for(i=0;i<5;i++){
			sum+=t%12;
			t=t/12;
			if(t<12){
				sum+=t;
				break;
			}
		}
			if(b==sum)return 1;
			else return 0; 
	}
	else{
		for(i=0;i<5;i++){
			sum+=t%16;
			t=t/16;
			if(t<16){
				sum+=t;
				break;
			}
		}
			if(b==sum)return 1;
			else return 0; 
	}
}
int main(){
	int i=2992,s=0;
	while(i<10000){
		s=0;
		s=i%10+i/10%10+i/100%10+i/1000;
		if(base(16,i,s)&&base(12,i,s))
		printf("%d\n",i);
		else;
		i++;
}
}
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	long a;//输入的数
	int y=0;//循环中的余数
	string s="";//输出的结果
	cin>>a;
	if(a==0)//0比较特殊，单独处理
	{
	cout<<0;
	return 0;
	}
 
	while(a>0)//大于0的数
	{
		y=a%16;  //求余
		if(y<10)   //小于10的余数
		s=char('0'+y)+s;  //利用字符的ascll码在字符串前面拼接
		else
		s=char('A'-10+y)+s;  //大于9的余数用ABCDE表示
		a=a/16;   
	}
	cout<<s;
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int s[10];
	int i,t=5555,sum=0;
	for(i=0;i<4;i++){
			s[i]=t%12;
			t=t/12;
			if(t<12){
				s[i+1]=t;
				break;
			}
		}
		for(i=0;i<4;i++){
		printf("%d\n",s[i]);}
		for(i=0;i<=4;i++)
			sum=sum+s[i];
		printf("%d",sum);
}*/
