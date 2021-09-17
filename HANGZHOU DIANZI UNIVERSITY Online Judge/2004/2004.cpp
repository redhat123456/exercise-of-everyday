#include<stdio.h>
int main(){
	int i;
	while(scanf("%d",&i)!=EOF){
		if(i>=0&&i<=100){
		switch(i/10){
			case 9 :printf("A\n");break;
			case 8 :printf("B\n");break;
			case 7 :printf("C\n");break;
			case 6 :printf("D\n");break;
			default:printf("E\n");break;
			}
		}
	   else printf("Score is error!\n");
	}
}
