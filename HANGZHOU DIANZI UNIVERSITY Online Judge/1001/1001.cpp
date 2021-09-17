#include<stdio.h>
#include<string.h>
int main(){
	int i=0,a[26];
	char buf[100000];
	for(i=0;i<24;i++)
	a[i]=0;
	while(1){
     	gets(buf);
	    if(buf[i]=='a')
		a[0]++;
		else if(buf[i]=='b')
		a[1]++;
		else if(buf[i]=='c')
		a[2]++;
		else if(buf[i]=='d')
		a[3]++;
		else if(buf[i]=='e')
		a[4]++;
		else if(buf[i]=='f')
		a[5]++;
		else if(buf[i]=='g')
		a[6]++;
		else if(buf[i]=='h')
		a[7]++;
		else if(buf[i]=='i')
		a[8]++;
	    else if(buf[i]=='j')
		a[9]++;
		else if(buf[i]=='k')
		a[10]++;
		else if(buf[i]=='l')
		a[11]++;
		else if(buf[i]=='m')
		a[12]++;
		else if(buf[i]=='n')
		a[13]++;
		else if(buf[i]=='o')
		a[14]++;
		else if(buf[i]=='p')
		a[15]++;
		else if(buf[i]=='q')
		a[16]++;
		else if(buf[i]=='r')
		a[17]++;
		else if(buf[i]=='s')
		a[18]++;
		else if(buf[i]=='t')
		a[19]++;
		else if(buf[i]=='u')
		a[20]++;
		else if(buf[i]=='v')
		a[21]++;
		else if(buf[i]=='w')
		a[22]++;
		else if(buf[i]=='s')
		a[23]++;
		else if(buf[i]=='y')
		a[24]++;
		else if(buf[i]=='z')
		a[25]++;
	}
	for(i=0;i<26;i++)
	printf("%c:%d\n",i+'a',a[i]);
}
