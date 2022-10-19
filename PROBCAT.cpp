//Problem Category
#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int x;
	    cin>>x;
	    if(x>=1 && x<100){
	        std::cout << "Easy" << std::endl;
	    }else if(x>=100 && x<200){
	      
	        cout<<"medium"<<endl;
	    }else
	      {
	         cout<<"Hard"<<endl;;
	      }
	    
	}
	
	return 0;
}
