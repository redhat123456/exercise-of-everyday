/*#include<stdio.h>
#include<math.h>
int length(int a,int b){
	double sum=0;
	sum=sqrt(a*a+b*b);
	return sum;
}
int main(){
	int i,j,a,b,c,d;
	double sum;
	
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){
		for(i=j+1;i<9;i++){
		j=0;
		sqrt(,)
		t=i;
		i=0;
		for(j=t;j!=0;j--,i++){
			printf("%d %d ",i,j);
		}
		if(i=c&&j=d)
		break;
	}
		printf("%.3lf\n",sum);
	}
}*/
/*#include<stdio.h>
int main(){
	int i,j,a,b,c,d,t;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	 i=a;j=b;
	for(i=j+1;i<9;i++){
		j=0;
		printf("%d %d ",i,j);
		t=i;
		i=0;
		for(j=t;j!=0;j--,i++){
			printf("%d %d ",i,j);
		if(i==c&&j==d)
		return 0;
		}
	}
}*/
// ͼ�е�ע��㣺ע����Ŀ�����ĵ�ֻ������б��Ϊ1�ı���
// ͼ��ÿ�������ڵ�ֱ�߶���x+y=1,2,3,4,5����

// ����֮��ľ�����Ϊ����ֱ�ԭ������ľ���ֵ
// 1.б��Ϊ1�ľ��Ǹ���2���Ա߳�         x+y-1��
// 2.б�ʲ�Ϊ1�ľ���sqrt(i*i+(i+1)*(i+1));(iΪ�̵ıߣ�  x+y��(0.0-0.1��ֱ�ı�Ҳ����ô��)
// 3.�����ڱߵ�һС��Ϊ�������*����2   1��
/*#include <iostream>
#include <cmath>
using namespace std;

// ����ĳһ�㣨x��y����ԭ��ľ���
double distance_tozero(int x,int y)
{
    double ans = 0.0;
    double t = sqrt(2);
    for(int i = 1;i < x+y;i++)
        ans += t * i;       // ǰ�����2*�߳�����x+y-1��
    ans += x * t;           // ���������ֱ�ߵĸ���2*�߳�
    for(int i = 0;i < x+y;i++)
        ans += sqrt(i*i+(i+1)*(i+1));
    return ans;
}
int main()
{
    int n;
    int x1,y1,x2,y2;
    double res;
    cin >> n;
    while(n--)
    {
        res = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        res = abs(distance_tozero(x1,y1) - distance_tozero(x2,y2)); // ����֮��ľ�����Ϊ����ֱ�ԭ������ľ���ֵ
        printf("%.3lf\n",res);
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
double f(double x1,double y1,double x2,double y2)
{
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main()
{
	int n,k;
	double d,x1,x2,y1,y2,x,y,i,j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		if((x1+y1>x2+y2)||(x1+y1==x2+y2)&&y1<y2) //����ڶ����ڵ�һ����ǰ�棬�������� 
		{
			i=x1,j=y1;
			x1=x2,y1=y2; 
			x2=i,y2=j;
		 } 
		d=0,i=x1,j=y1; 
		for(x=x1,y=y1;x!=x2||y!=y2;i=x,j=y )//i��j���ƶ�����һ����ǰ�����꣬x��y���ƶ�����һ���������� 
		{
			if(y>0)	x++,y--;
			else {
				y=x+1;x=0;
					}	
			d=d+f(i,j,x,y);
			
		}
		printf("%.3lf\n",d);
	}
}

/*#include<stdio.h>
#include<math.h> 
double length(double x1,double y1,double x2,double y2){
	double length;
	length=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return length;}
int main(){
	double sum,x1,x2,y1,y2;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);	
	if((x1+y1>x2+y2)||(x1+y1==x2+y2)&&y1<y2){
		i=x1;
	}	
	}

}*/ 
