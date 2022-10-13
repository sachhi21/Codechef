#include <iostream>
using namespace std;

int main() {
	int T,i;
	cin>>T;
	for(i=1; i<=T; i++){
	    int A,B,C,sum;
	    cin>>A>>B>>C;
	    sum=A+B+C;
	    if(sum==180)
	        cout<<"yes\n";
	    else
	        cout<<"NO\n";

	}
	return 0;
}