/*#include<bits/stdc++.h>
using namespace std;
double m[107],v[107],j[107],js[107];
double max1,ans=0.0;
int t;
int max(){
	int max=0,num;
		for(int i=1;i<=t;i++){
		if(js[i]>max){
			max=js[i];
			max=i;
			js[i]=0;
			break;
		}
		}
		return max;
}

int main(){
	int num;
	cin>>t>>max1;
	for(int i=1;i<=t;i++){
		cin>>m[i]>>v[i];
		j[i]=v[i]/m[i];
		js[i]=j[i];
	}
	
	while(max1!=0){
	    int num=max();
	    if(max1>=m[num]){
	    	max1=max1-m[num];
	    	ans=ans+v[num];
		}
		else{
			ans=ans+j[num]*max1;
			max1=0;
		}
	}
	printf("%.2lf",ans);
	return 0;
}*/
//算法没问题貌似超时了

 #include<bits/stdc++.h>
using namespace std;
int N;
double T,p[101],w[101], v[101],sum;//意义和上题解一样
int main()
{
	cin >> N >> T;
	for (int i = 0; i < N; i++)
	{
		cin >> w[i] >> v[i];
		p[i] = v[i] / w[i];
	}
	for (int i = 0; i < N; i++)
	{
		for(int j = 0;j < N-1; j++)
		{
		 if (p[j] > p[j + 1])
		 {
			swap(w[j], w[j + 1]);
			swap(v[j], v[j + 1]);
			swap(p[j], p[j + 1]);
		 }
		}
	}
	for(int i=N-1;i>=0;i--)
	{ 
		if (T - w[i]> -0.000001)
		{
			T -= w[i];
			sum += v[i];
		}
		else {
			sum += T * p[i];
			break;
		}
	}
	printf("%.2lf", sum);
	return 0;
}

//这个复杂度小点 
