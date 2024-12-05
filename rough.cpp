#include <bits/stdc++.h>
using namespace std;
int prime(int n){
    int c=0;
    for(int i=1;i<n+1;i++){
        if((n % i)==0){
            c+=1;
        }
    }
    if(c==2){
        return 1;
    }else{
        return 0;
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	int i=0;
	vector<pair<int,int>> vec;
	while(i<T){
        int N;
        cin>>N;
        int c=0;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=0;i<N;i++){
	        for(int j=1;j<N;j++){
	            if(prime(arr[i]+arr[j])==0){
                    c+=1;
                    vec.push_back({i+1,j+1});
                    break;

                }
	        }
            if(c==1){
                    break;
                }
            
	    }
        if(c==0){
                vec.push_back({-1,0});
            }
	    i++;
    }
    
    for(int i=0;i<vec.size();i++){
        if(vec[i].first==-1){
            cout<<-1<<endl;
        }else{
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
    }
    
    
}