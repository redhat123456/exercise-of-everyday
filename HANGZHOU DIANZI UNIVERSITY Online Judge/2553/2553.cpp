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

bool check(int t,int x,int y)//����Ƿ����� 
{
	for(int i=1;i<t;i++)//����ÿ��n�ʺ� 
		if(b[i][1]==y||x-b[i][0]==abs(y-b[i][1]))//����������û�лʺ� �� б���Ƿ��лʺ�
				return 0;
	return 1;
}

void dfs(int k,int n)//���ѱ���ȫ���� 
{
	for(int i=1;i<=n;i++)//������ 
		if(check(k,k,i))
			if(k==n)//��nΪֹ ��¼+1 
				ans++;
			else//���� 
			{
				b[k][0]=k;//��x��������� 
				b[k][1]=i;//��y��������� 
				dfs(k+1,n);
			}	
}

int main()
{
	int n;
	for(int i=1;i<11;i++)//������ 
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
