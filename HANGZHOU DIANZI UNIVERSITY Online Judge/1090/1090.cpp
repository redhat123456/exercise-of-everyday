/*#include<stdio.h>
int main(){
	int a[100][2],i,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	for(int j=0;j<2;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<t;i++){
	printf("%d",a[i][0]+a[i][1]);
	if(i!=t-1)printf("\n");		}
}
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
}*/
/*#include<stdio.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	while(n){
		scanf("%d %d",&a,&b);
		printf("%d",a+b);
		--n;
		if(n!=0)printf("\n"); 
	}
} */
#include<stdio.h>
int main()
{
      int a,b;
  while(1)
   {  scanf("%d %d",&a,&b);
   if(a==0&&b==0)break; 
    printf("%d\n",a+b);
  } 
}

