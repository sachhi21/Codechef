#include <iostream>
using namespace std;

int main() {
	 int T;
	 cin>>T;
	 while(T--){
	     int a,b,c;
	     cin>>a>>b>>c;
	     if(a+b>=b+c && a+b>=a+c)
         {
             cout<<a+b<<endl;
         }
         else if(a+c>=a+b && a+c>=b+c)
         {
            cout<<a+c<<endl;
         }
         else
         {
               cout<<b+c<<endl;
         }
	     
	     
	 }
	return 0;
}
