/*#include<stdio.h>
int main(){
	int n=3;
	long long t=1;
	for(int i=1;i<=12;i++)
	t=t*n;
	printf("%d",t);
}*/
#include<iostream>
using namespace std;
int main(){
int t;
long long n=1;
while(scanf("%d",&t)!=EOF){
while(t--)
	n=3*n;
	n=n-1;
cout<<n<<endl;}
return 0;}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m;    
    while(cin>>m)
    {
    	long long res=1;
        while(m--) res*=3;
        cout<<res-1<<endl;
    }
    return 0; 
 }
