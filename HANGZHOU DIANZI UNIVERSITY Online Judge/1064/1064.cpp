#include<stdio.h>
int main(){
	int n=13;
	double sum=0.0,t;
	while(--n){
			scanf("%lf",&t);
			sum=sum+t;
	}
    printf("$%.2lf\n",sum/12.0);
    return 0;
}
