/*#include<stdio.h>
char bijiao(char a[]){
	char t;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	return a[4];
}
int main(){
	char a[4],i=0;
	while(scanf("%s",&a)!=EOF){
		bijiao(a);
		for(int j=0;j<4;j++)
		printf("%c ",a[j]);
		printf("\n");
		}
	}*/
#include <iostream>
int  main()
{
    using namespace std;
    char a[3],ch;
    while (cin >> a[0] >> a[1] >> a[2])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 1; j >= i; j--)
            {
                if (a[j] > a[j + 1])
                {
                    ch = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = ch;
                }
            }
       }
        cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
    }
    return 0;
}


