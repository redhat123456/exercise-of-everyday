#include<stdio.h>
#define PI 3.1415927
int main(){
	double r;
	while(scanf("%lf",&r)!=EOF)
		printf("%.3lf\n",(4.0/3.0)*r*r*r*PI);
		return 0;
} 
