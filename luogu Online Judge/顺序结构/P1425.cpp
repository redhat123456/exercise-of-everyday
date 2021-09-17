#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e,f;
	e=c-a;
	f=d-b;
	if(f<0){
		e--;
		f=f+60;
	}
	cout<<e<<" "<<f<<endl;
	return 0;
}
