#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t; 
    while(t--)
    {
        cin>>x>>y; 
        int a,b;
        a=x*2;
        b=y*5;
        if(a>b)
        cout<<"chocolate"<<endl;
        else if(a==b)
        cout<<"either"<<endl; 
        else
        cout<<"candy"<<endl; 
        
    }
	return 0;
}