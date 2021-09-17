#include<stdio.h>
#include<string.h>
int main(){
	int sum,i=0,j=0,t;
	char s[5000];
	while(gets(s)!=NULL){
	t=strlen(s);
	while(t--){
		if(s[i]==' '){
			i++;
		while(s[i]==' '){
			i++;
		}
		i++;
		j++;
		} 
		i++;
		j++;
	}
	printf("%d\n",j);	
	j=0;
}	return 0;
} 
/*#include <iostream>
#include <set>
#include <sstream>
using namespace std;
set<string> dic;
int main()
{
    for(string input; getline(cin, input); )
    {
        dic.clear();
        int cnt = 0;
        if(input == "#")break;
        else
        { 
            string temp;
            stringstream ss(input);
            while(ss >> temp)     dic.insert(temp);
            cout << dic.size() << endl;
        } 
    } 
    return 0;
}*/

