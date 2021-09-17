#include<bits/stdc++.h>
using namespace std;
int judge(int m){
	for(int i=2;i<m;i++){
		if(m%i==0)
		return 0;
		
	}
	return 1;
}

int main(){
	int x,y;
	while(~scanf("%d %d",&x,&y)&&-39<=x&&x<=50&&-39<=y&&y<=50){
		if(x==0&&y==0)
		return 0;
		else{
			for(int i=x;i<=y;i++){
				int num=i*i+i+41;
				if(judge(num)==0)
				cout<<"Sorry"<<endl;
				 return 0;
			}
			cout<<"OK"<<endl;
		}
	}
	
}
