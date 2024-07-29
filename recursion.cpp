#include<bits/stdc++.h>
using namespace std;
int pt(auto i, auto n){
    
    if(i<1){
        return n;
    }else{
        pt(i-1,n+i);
    }



}
int main(){
    cout<<pt(3,0);
   


    return 0;
}