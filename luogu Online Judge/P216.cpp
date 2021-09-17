#include<bits/stdc++.h>
using namespace std;

	int str[1007][1007];
	
int main(){
	int t;

	cin>>t;
	
	for(int i=1;i<=t;i++)
	for(int j=1;j<=i;j++)
	cin>>str[i][j];
	
	for(int i=t-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			str[i][j]=str[i][j]+max(str[i+1][j],str[i+1][j+1]);
		}
	}
	
	cout<<str[1][1]<<endl;
	return 0;
}
