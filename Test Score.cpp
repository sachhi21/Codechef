#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y,a;
	    cin>>n>>x>>y;
	    a=y%x;
	    if(a==0){
	        if(n>=y/x){
	            cout<<"yes"<<endl;
	        }else{
	            cout<<"no"<<endl;
	        }
	    }else
	    cout<<"no"<<endl;
	    
	    
	}
	return 0;
}
