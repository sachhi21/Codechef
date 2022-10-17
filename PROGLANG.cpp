#include <iostream>
using namespace std;
int language(int A, int B, int A1, int B1, int A2, int B2) {
    if ((A1 == A && B1 == B) || (A1 == B && B1 == A)) {
      return 1;
    } else if ((A2 == A && B2 == B) || (A2 == B && B2 == A)) {
      return 2;
    }

    return 0;
  }

int main() {
	  int T;
	  cin>>T;
	  while(T--){
	      int A,B,A1,A2,B1,B2;
	      cin>>A>>B>>A1>>B1>>A2>>B2;
	      cout<<language(A,B,A1,B1,A2,B2)<<endl;
	  }
	  
	return 0;
}
