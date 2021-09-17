#include<bits/stdc++.h>
using namespace std;
int main()
{
int cows[55] = {0, 1, 2, 3, 4};
int n, i;
for(i = 5; i < 55; i++)
cows[i] = cows[i-1] + cows[i-3];
while(~scanf("%d",&n))
{
if(n == 0)
break;
cout<<cows[n]<<endl;
}
return 0;
}
