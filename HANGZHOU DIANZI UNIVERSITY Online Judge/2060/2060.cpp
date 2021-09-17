#include <iostream>
using namespace std;
int n;
int a,b,c;
int sum;
int s[6]={7,6,5,4,3,2};
int main() {
    while(cin>>n) {
        for(int i=0;i<n;i++) {
            cin>>a>>b>>c;
            sum=0;
            if(a>6) {
                sum+=8*(a-6) + 27;
            } else {
                for(int i=0;i<a;i++) {
                    sum+=s[i];
                }
            }
            if(b+sum>=c) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
