#include<stdio.h>
int main(){
	int sum=0,a,t,i,d,j=0;
	scanf("%d",&d);
	while(j!=d){
		scanf("%d",&t);
			for(i=0;i<t;i++){
				scanf("%d",&a);
				sum=sum+a;
			}
			printf("%d\n",sum);
			sum=0;
			j++;
	}
} 
