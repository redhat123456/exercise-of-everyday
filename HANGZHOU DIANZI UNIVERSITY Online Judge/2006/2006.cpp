#include<stdio.h>
int main(){
	int a,n,i,ji=1;
	while((scanf("%d",&n))!=EOF){
	    ji=1;
		for(i=0;i<n;i++){	
		    scanf("%d",&a);
			if((a+1)%2==0)
			ji=ji*a;
		}	printf("%d\n",ji);
		}
		return 0;
	}

