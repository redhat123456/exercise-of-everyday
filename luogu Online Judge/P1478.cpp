#include<bits/stdc++.h>
using namespace std;
int str1[5007],str2[5007];
int main(){
	int n,s,h1,h2;
	cin>>n>>s;
	cin>>h1>>h2;
	for(int i=1;i<=n;i++){
		cin>>str1[i]>>str2[i];
		if(str1[i]>h1+h2){
		str1[i]=0;			
		}
	}
	for(int i=1;i<=n-1;i++){
			for(int j=1;j<=n-i;j++){
				if(str2[j+1]<str2[j]){
					swap(str2[j+1],str2[j]);
					swap(str1[j+1],str1[j]);
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    cout<<str1[i]<<" ";
    
    cout<<endl;
    
    for(int i=1;i<=n;i++)
    cout<<str2[i]<<" ";    
	int i=1,t=0;
    while(s>0){
    	if(str1[i]!=0){
    	s=s-str2[i];  
      	t++;		
      	cout<<str2[i]<<"  ";
		} 
        i++;
	}
	cout<<t<<endl;
	return 0;
} 
