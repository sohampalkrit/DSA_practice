#include<bits/stdc++.h>
using namespace std;
int main(){
    bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second<p2.second) return True;
        if(p1.second>p2.second) return False;

        if(p1.first>p1.first) return True;
        return False;
    }
    
    
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    

    

    return 0;
}