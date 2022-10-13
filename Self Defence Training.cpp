#include <iostream>
using namespace std;

int main() {
	int T, count,N,A;
	cin>>T;
    while(T--)
	{   
	    cin>>N;
	    count=0;
	    for(int i=0; i<N; i++){
	        cin>>A;
	        if(A>=10 && A<=60){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
