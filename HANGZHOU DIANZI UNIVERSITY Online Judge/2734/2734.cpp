#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int base(char ch){
	int n;
	if(ch>='A'&&ch<='Z')
	n=ch-'A'+1;
    else
	n=0; 	
	return (n);
}
int main(){
	char a[300];
	int i,n,sum;
	while(1){ 
	sum=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]=='#')
		return 0;
		else{
		sum=sum+(i+1)*base(a[i]);
		}
	} 
	printf("%d\n",sum);
}

return 0;
}
