#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
void primecoll(void){
    int c=0;
    for(int i=2;i<1000;i++){
        for(int j=2;j<i;j++){
            if(i%j==0) c++;
        }
        if(c==0) vec.push_back(i);
        c=0;
    }
}

int main() {
    primecoll();
    
	// your code goes here
	int T;
	cin>>T;
	int i=0;
	while(i<T){
	    int N,M;
	    cin>>N>>M;
        if(M==0) {
            for(int i=0;i<N;i++) {
                cout<<vec[i]<<" ";
            }
        }
        if(N==0){
            for(int i=0;i<M;i++){
                cout<<vec[i]<<endl;
            }
        }
        for(int j=0;j<N;j++){
	    for(int i=0;i<M;i++){
        
        cout<<vec[i+(j*N)]<<" ";}
        cout<<endl;
        }
        
	i++;
    }


}