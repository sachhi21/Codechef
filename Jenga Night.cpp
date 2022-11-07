#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,a;
	    cin>>n>>x;
	    a=x%2;
	     if(x==n){
	            cout<<"yes"<<endl;
	    }else if(x%n==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
