#include <iostream>
using namespace std;

int main() {
	 int T;
	 cin>>T;
	 while(T--){
	     int N,X;
	     int s[N],r[N];
	     cin>>N>>X;
        int maxr = 0;
        int maxs=X;
        for(int i=0;i<N;i++){
            cin>>s[i]>>r[i];

            if(s[i]<=maxs){

                if(r[i]>maxr){

                    maxr = r[i];

                }
            }
        }
        cout<<maxr<<endl;
	 }
	return 0;
}
