#include<stdio.h>
int main(){
	int sum=0,a,t,i;
	while(1){
		scanf("%d",&t);
		if(t!=0){
			for(i=0;i<t;i++){
				scanf("%d",&a);
				sum=sum+a;
			}
			printf("%d\n",sum);
			sum=0;
		}
		else break;
	}
} 
