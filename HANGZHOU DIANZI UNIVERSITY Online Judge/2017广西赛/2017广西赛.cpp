#include<stdio.h>
int main(){
	long long int p,n,j=0,i,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
			sum=1;
	for(p=1;p<=i;p++)
		sum=sum*i;
	if(sum<=n)
	j++;
	}
	printf("%d",j);
	return 0;
} 
