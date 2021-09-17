#include<iostream>
using namespace std;

int sum = 0;
int chess[10][10]={0};
int n;
int notDanger(int row,int col ){
	int i,k;
	for(i=0;i<n;i++){
		if(chess[i][col]==1)
		return 0;
	}
	for(i=row,k=col;i>=0&&k>=0;i--,k--)
	if(chess[i][k]==1)
	return 0;
	
	for(i=row,k=col;i>=0&&k<n;i--,k++)
	if(chess[i][k]==1)
	return 0;
	
	return 1;
}

void EightQueen( int row )
{
	int col;
	if( row>n-1 )                       
	{               
		sum++;
		return ;
		
	}

	for( col=0; col < n; col++ )        
	{
		if( notDanger( row, col ) )   
		{
			chess[row][col]=1;
			EightQueen(row+1);
			
			chess[row][col]=0;           
		}
	}
}


int main()
{ 
while(1){
	cin>>n;
	if(n==0)
	return 0;
	
	EightQueen(0);        
	cout<<sum<<endl;
	sum=0;
}
}


#include <bits/stdc++.h>
#define inf 0x0f0f0f0f
using namespace std;

int a[100],b[100][2],ans;

bool check(int t,int x,int y)//检查是否满足 
{
	for(int i=1;i<t;i++)//遍历每个n皇后 
		if(b[i][1]==y||x-b[i][0]==abs(y-b[i][1]))//检查该列上有没有皇后 和 斜线是否有皇后
				return 0;
	return 1;
}

void dfs(int k,int n)//深搜遍历全部行 
{
	for(int i=1;i<=n;i++)//遍历列 
		if(check(k,k,i))
			if(k==n)//到n为止 记录+1 
				ans++;
			else//继续 
			{
				b[k][0]=k;//将x坐标存起来 
				b[k][1]=i;//将y坐标存起来 
				dfs(k+1,n);
			}	
}

int main()
{
	int n;
	for(int i=1;i<11;i++)//打表输出 
	{
		ans=0;
		dfs(1,i);
		a[i]=ans;
	}
	while(cin>>n&&n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
 }
