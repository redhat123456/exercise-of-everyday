#include<stdio.h>
#include<algorithm>
using namespace std;
struct Match//ʹ�ýṹ�彫�����Ŀ�ʼʱ��ͽ���ʱ�䱣������ 
{
	int start;//��ʼʱ�� 
	int end;//����ʱ�� 
}M[1000005];
bool compare(Match a, Match b)//�Խ���ʱ���С�������� 
{
	return a.end < b.end;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d %d",&M[i].start,&M[i].end);
	sort(M,M+n,compare);
	int pos = 0; //��¼��һ�������Ľ���ʱ�� 
	int ans=0;//��¼�ܹ��μӼ��α��� 
	for(i=0;i<n;i++)
	{
		if(pos<=M[i].start)//�������б�����ʱ�� 
		{
			pos = M[i].end;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
