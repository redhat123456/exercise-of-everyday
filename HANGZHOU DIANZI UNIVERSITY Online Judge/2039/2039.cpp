#include<stdio.h>
int panduan(double a,double b,double c){
		if(a>b&&a>c){
			if(b+c>a)return 1;
			else return 0;
		}
		if(b>c&&b>a){
			if(a+c>b)return 1;
			else return 0;
		}
		if(c>b&&c>a){
			if(a+b>c)return 1;
			else return 0;
		}
}
int main(){
	int t;
	double a,b,c;
	scanf("%d",&t);
	while(t--){
	scanf("%lf %lf %lf",&a,&b,&c);
		if(panduan(a,b,c))
	printf("YES\n");
	else
	printf("NO\n");
		}
	return 0;
	}

