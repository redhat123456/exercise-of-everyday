#include<stdio.h>
int main(){
	int a[100],b[100],i=0,t;
	scanf("%d",&t);
	while(i<2*t-1){
	scanf("%d%d",&a[i],&a[i+1]);
	printf("%d",a[i]+a[i+1]);
	i+=2;	
	}

	return 0;
}

