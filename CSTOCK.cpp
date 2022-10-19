#include <iostream>
using namespace std;

int main() {
	 int T;
	 cin>>T;
	 while(T--){
	     int S,A,B,C;
	     cin>>S>>A>>B>>C;
	        
	         
	        if(S * (100 + C) >= A * 100  &&  S * (100 + C) <= B * 100){
	            cout<<"yes"<<endl;
	        }else
	        cout<<"no"<<endl;
	 }
	 
	return 0;
}
