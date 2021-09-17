#include<stdio.h>
int main(){
	long int T,i,AH,AM,AS,BH,BM,BS,M=0,S=0;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d %d %d %d",&AH,&AM,&AS,&BH,&BM,&BS);
		if(BS+AS>=60)
		M=(BS+AS)/60;
		if(BM+AM>=60)
		S=(BM+AM)/60;
		printf("%d %d %d\n",AH+BH+M,AM+BM+S-60*M,AS+BS-60*S);
	}
	return 0; 
}
