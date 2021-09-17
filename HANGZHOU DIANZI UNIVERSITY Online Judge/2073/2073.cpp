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
// 图中的注意点：注意题目所给的点只能落在斜率为1的边上
// 图中每个点所在的直线都是x+y=1,2,3,4,5……

// 两点之间的距离拆分为两点分别到原点距离差的绝对值
// 1.斜率为1的就是根号2乘以边长         x+y-1个
// 2.斜率不为1的就是sqrt(i*i+(i+1)*(i+1));(i为短的边）  x+y个(0.0-0.1竖直的边也可这么求)
// 3.点所在边的一小段为点横坐标*根号2   1个
/*#include <iostream>
#include <cmath>
using namespace std;

// 计算某一点（x，y）到原点的距离
double distance_tozero(int x,int y)
{
    double ans = 0.0;
    double t = sqrt(2);
    for(int i = 1;i < x+y;i++)
        ans += t * i;       // 前面根号2*边长，有x+y-1个
    ans += x * t;           // 这个点所在直线的根号2*边长
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
        res = abs(distance_tozero(x1,y1) - distance_tozero(x2,y2)); // 两点之间的距离拆分为两点分别到原点距离差的绝对值
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
		if((x1+y1>x2+y2)||(x1+y1==x2+y2)&&y1<y2) //如果第二点在第一个点前面，交换坐标 
		{
			i=x1,j=y1;
			x1=x2,y1=y2; 
			x2=i,y2=j;
		 } 
		d=0,i=x1,j=y1; 
		for(x=x1,y=y1;x!=x2||y!=y2;i=x,j=y )//i，j记移动至下一个点前的坐标，x，y记移动至下一个点后的坐标 
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
