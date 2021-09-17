#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[]){
	char ch;
	int T,b,a;
	double sum;
	scanf("%d",&T);
	getchar();
    while(T--){	
	getchar();
		scanf("%c%d%d",&ch,&a,&b);
	
		switch(ch){
			case '+' : printf("%d\n",a+b);break;
			case '-' : printf("%d\n",a-b);break;
			case '*' : printf("%d\n",a*b);break;
			case '/' : if(a%b==0)
			printf("%d\n",a/b);
			else
			sum=(double)a/(double)b;
			printf("%.2lf\n",sum);break;
	}
}
return 0;
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		char ch;
		int a,b;
		scanf("%c%d%d",&ch,&a,&b);
		switch(ch)
		{
			case '+':
				printf("%d\n",a+b);
				break;
			case '-':
				printf("%d\n",a-b);
				break;
			case '*':
				printf("%d\n",a*b);
				break;
			case '/':
				if(a%b==0)               
					printf("%d\n",a/b);
				else
					printf("%.2lf\n",a*1.0/b);
				break;
		}
	}
	return 0;
 }

