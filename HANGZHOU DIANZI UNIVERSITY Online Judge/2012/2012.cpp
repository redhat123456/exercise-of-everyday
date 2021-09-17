#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;;
	while(~scanf("%d %d",&a,&b)&&-39<=a&&a<=50&&-39<=b&&b<=50){
	int i,j,n=0;
	if(a==0&&b==0)
	break;
		else{
		for(i=a;i<=b;i++)
			{
				c=i*i+i+41;
				for(j=2;j<c;j++)
				if(c%j==0){	
				printf("Sorry\n");
				return 0;
				}
			}	
			printf("OK\n");
	}
	}
	return 0;
} 
#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,z;
	while(~scanf("%d %d",&x,&y)&&-39<=x&&x<=50&&-39<=y&&y<=50)
	{
		int i,j,n=0;
		if( x==0&&y==0 )
			break;
		else
		{
			for(i=x;i<=y;i++)
			{
				z=i*i+i+41;
				for(j=2;j<z;j++)
					if(z % j == 0)
						n++;
			}
		}
		if(n==0)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
	return 0;
}
