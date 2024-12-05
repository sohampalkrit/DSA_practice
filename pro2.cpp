#include <bits/stdc++.h>
using namespace std;
int chaloX(int X,char D){
    vector<int> vec;
    if(D=='L'){
        X--;
    }else if(D=='R'){
        X++;
    }else{
        X=X;
    }
    return X;
    
}
int chaloY(int Y,char D){
    
    if(D=='U'){
        Y++;
    }else if (D=='D'){
        Y--;
    }else{
        Y=Y;
    }
    return Y;
    
}
int ifreach(int x,int y,int X,int Y,int st){
    X=abs(X-x);
    Y=abs(Y-y);
    if(X+Y==st){
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
	vector<int> out ;
	while(i<T){
	    int N,X,Y;
        cin>>N>>X>>Y;
	    char arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
        int x=0;
        int y=0;
        for(int i=0;i<N;i++){
            x=chaloX(x,arr[i]);
            y=chaloY(y,arr[i]);
            if(ifreach(x,y,X,Y,i+1)==1){
                out.push_back(1);
            }
            else{
                continue;
            }
            
        }
        if(out.size()<=i){
            out.push_back(0);
        }
        
	    i++;
	    
	}
    
    for(int i=0;i<T;i++){
        if(out[i]==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}
