/*#include <iostream>
using namespace std;
int i,j,T;
int main(){
	scanf("%d",T);
	while(T--){
		
	}
}*/
//例：P191
/*#include<stdio.h>
int i=0,j=0; 
int main(){
	void hanoi(int n,char one,char two,char three);
	int m,n;
	printf("input the number of diskes:");
	scanf("%d",&m);
	printf("The step to move %d diskes: \n",m);
	hanoi(m,'A','B','C');
	printf("%d %d",i,j);
} 
void hanoi(int n,char one,char two,char three){
	void move(char x,char y);
	if(n==1)
	move(one,three);
	else{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
void move(char x,char y){
	printf("%c->%c\n",x,y);
	i++;
	if(x=='A'||y=='C')
	j++;
}*/
/*#include <iostream>
using namespace std;
int j=0,i=0;
int main(){
	void hanoi(int n,char one,char two,char three);
	int m,n,sum=1;
	printf("input the number of diskes:");
	scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
    	sum=sum*2+1
	}

	cout<<i<<endl;
} */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,t,k;
    long long result;
    cin>>n;
    while(n--){
        cin>>t>>k;
        result = pow(2,t-k);
        cout<<result<<endl;
    }
    
    system("pause");
    return 0;
}
//我日这么简单 
