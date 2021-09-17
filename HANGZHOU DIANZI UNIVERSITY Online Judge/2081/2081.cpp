#include<stdio.h>
int main(){
	int t;
	char s[11];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		printf("6%d%d%d%d%d\n",s[6],s[7],s[8],s[9],s[10]);
		getchar();
	}
	return 0;
} 
