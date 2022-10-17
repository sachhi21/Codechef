#include <iostream>
using namespace std;


int hoop(int N){
    return (N+2)/2;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	        int N;
	        cin>>N;
	       cout<<hoop(N)<<endl;
	}
	
	return 0;
}
