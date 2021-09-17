#include<stdio.h>
int main(){
int sum1,sum2,a,b,i;
while(~scanf("%d %d",&a,&b)){
	sum1=0,sum2=0;
	if(a>b){int t=a;a=b;b=t;}
	for(i=a;i<=b;i++){
		if(i%2==0)
			sum1=sum1+i*i; 
		else
		sum2=sum2+i*i*i;
	}
	printf("%d %d\n",sum1,sum2);
}
return 0;
}
/*#include<iostream>
using namespace std;
int main(){
	long long int sum1,sum2;
    int a,b,i;
    while(cin>>a>>b){
	sum1=0,sum2=0;
	for(i=a;i<=b;i++){
		if(i%2==0)
			sum1=sum1+i*i; 
		else
		sum2=sum2+i*i*i;
	}
	cout<< sum1 <<' '<< sum2 <<endl;
}
return 0;
}*/
