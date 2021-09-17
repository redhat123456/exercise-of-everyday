#include<bits/stdc++.h>
using namespace std;
int f(int a , int b , int t ){
	if(t==1||t==2) return 1;
	return  a*f(a,b,t-1)+b*f(a,b,t-2) ;
}
int main(){
	int a,b,t;
	while(1){
		cin>>a>>b>>t;
		if(a==0&&b==0&&t==0)
		return 0;
		cout<<f(a,b,t)%7<<endl;
	}
	return 0;
} 
