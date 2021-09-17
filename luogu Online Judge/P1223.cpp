#include<bits/stdc++.h>
using namespace std;
double n[1007],s[1007];
int main(){
	double t;
	double ans=0;
	cin>>t;
	for(int i=1;i<=t;i++){
	cin>>n[i];	
	s[i]=i;	
	}
	for(int i=1;i<=t-1;i++){
		for(int j=1;j<=t-i;j++){
			if(n[j+1]<n[j]){
				swap(n[j+1],n[j]);
				swap(s[j+1],s[j]);
			}
		}	
	}
	for(int i=1;i<=t;i++){
	ans=ans+n[i]*(t-i);

	}
	ans=ans/t;

		for(int i=1;i<=t;i++){
		cout<<s[i]<<" ";
	}
	printf("\n%.2f",ans); 
	return 0;

	
} 
