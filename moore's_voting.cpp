#include<bits/stdc++.h>
using namespace std;
int majorele(vector<int> arr){
    int cnt=0;
    int ele=0;
    for(int i=0;i<arr.size();i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        if(arr[i]==ele){
            cnt++;
        }else{
            cnt--
        }
    }
}
int main(){

return 0;
}