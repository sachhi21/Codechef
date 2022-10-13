#include <iostream>
using namespace std;

int main() {
	 int T;
	 cin>>T;
	 for(int i=1; i<=T; i++){
	     int X,Y;
	     cin>>X>>Y;
	     if(X<Y){
	         cout<<"FIRST\n";
	     }else if(X==Y){
	         cout<<"ANY\n";
	     }else{
	         cout<<"SECOND\n";
	     }
	     
	 }
	return 0;
}
