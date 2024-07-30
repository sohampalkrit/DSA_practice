/*
character hashing for counting 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    string s;
    cin>>s;
    
    //pre-calculation
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a'] ++;
    }
    int a;
    cin>>a;
    while(a--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }

return 0;
}