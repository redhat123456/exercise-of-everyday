/*#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(void)
{
    string str="0123456789ABCDEF";
    int n,m;
    while(cin>>n>>m){
        string s;
        if(n<0)cout<<"-";
        n=abs(n);
        while(n){
            s.insert(s.begin(),str[n%m]);
            n/=m;
        }
        cout<<s<<endl;
    }
    return 0;
}*/

/*#include<stdio.h>
void fun(int n,int r){
	if(n<r){
		if(n<10) printf("%d",n);
		if(n>=10) printf("%c",55+n);
	} 
	else{
		fun(n/r,r);
		if(n%r<10) printf("%d",n%r);
		if(n%r>=10) printf("%c",55+n%r);
	}
}
int main(){
	int n,r;
	while(scanf("%d%d",&n,&r)!=EOF){
		if(n<0) printf("-"),n=-n;
		fun(n,r);
		printf("\n");
	}
	return 0; 
}*/ 
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char s[10000];
	int t,a,i,j=0,w,d,v;
	while(1){
	scanf("%d %d",&t,&a);
		if(t<0)
		v=-1;
	w=abs(t);d=abs(a);
	while(w>d){
		w=w%d;
		j++;
	}
		for(i=j;1;i--){
			  if(a>10)
				s[i]=abs(t)%abs(a)+'A'-10;
				else
				s[i]=abs(t)%abs(a)+'0';
			t=abs(t)/abs(a);
			if(t<=abs(a)){
				if(t%abs(a)>=10)
				s[i-1]=abs(t)%abs(a)+'A';
				else
				s[i-1]=abs(t)%abs(a)+'0';
				break;
			}
		}
	if(v>0)
    printf("%s\n",s);
    else
    printf("-%s\n",s);
	}
	return 0;
}*/
/*#include<stdio.h>
int base(int k, char s[])
{
	int len=0,sum=0;
	int i,j,t,n;

	while (s[len]!='\0') len++;
	i=len-1;
	while (s[i]!='\0')
	{
		n=0;
		if (s[i]>='0'&&s[i]<='9')
			n=s[i]-48;
		else if (s[i]>='A'&&s[i]<='F')
				n=10+s[i]-'A';
		t=1;
		for (j=0; j<len-i-1; j++) t=t*k;
		sum += n*t;
		i--;
	}
	return (sum);
}
int main()
{
	int sz;
	char str[20];

	scanf("%d %s",&sz,str);
	if (sz<2||sz>16)
		printf(" ‰»Î¥ÌŒÛ°£\n");
	else
		printf("%d\n",base(sz,sabs(abs(a))bs(t)r));
}*/
/*#include<bits/stdc++.h>
using namespace std;
void base(int n,int k){
	if(n<k){
		if(n<=10) printf("%d",n);
		else if(n>10)printf("%c",n+55);
	}
	else {
    	base(n/k,k);
		if(n%k<=10) printf("%d",n%k);
		else printf("%c",n%k+55);
	}
}
int main(){
		int n,r;
	while(scanf("%d%d",&n,&r)!=EOF){
		if(n<0) printf("-"),n=-n;
		base(n,r);
		printf("\n");
	}
	return 0; 
}*/ 
#include<bits/stdc++.h>
using namespace std;
void fun(int n,int r){
            if(n<r){
                  if(n<10) printf("%d",n);
                  if(n>=10) printf("%c",n+55);
                 
}
            else {
                  fun(n/r,r);
                  if(n%r<10) printf("%d",n%r);
                  if(n%r>=10) printf("%c",n%r+55);
}
}
int main(){
 int n,r;
while(1){
	scanf("%d %d",&n,&r);
 if(n<0) printf("-"), n=-n;
 fun(n,r);
  cout<<endl;
}
return 0;
}
