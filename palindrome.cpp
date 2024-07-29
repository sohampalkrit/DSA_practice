#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool pali(int i ,string &str){
    auto n=str.size();
    if(i>n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return (pali(i+1,str));

}
int main(){
    string str="SohoS";
    cout<<pali(0,str);



return 0;
}