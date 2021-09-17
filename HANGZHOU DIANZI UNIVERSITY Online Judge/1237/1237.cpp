#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char s[100];
	double sum=0;
while(1){
    gets(s);
	if(s[0]=='0')
	return 0;
	if(s[i]=='*')
	sum=((double)s[i+2]-48)*((double)s[i-2]-48);
	if(s[i]=='/')
	sum=((double)s[i+2]-48)/((double)s[i-2]-48);
	if(s[i]=='+')
	sum=((double)s[i+2]-48)+((double)s[i-2]-48);
	if(s[i]=='-')
	sum=((double)s[i+2]-48)-((double)s[i-2]-48);
	printf("%lf\n",sum);
	}
return 0;
} 
