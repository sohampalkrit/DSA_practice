#include<bits/stdc++.h>
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
int main(){
    cout<<prime(23);

return 0;
}