#include<stdio.h>
int main(){
	int sum=0,a,t,i,j=0;
	while(scanf("%d",&t)!=EOF){
			for(i=0;i<t;i++){
				scanf("%d",&a);
				sum=sum+a;
			}
			printf("%d\n",sum);
			sum=0;
			j++;
	}
} 
