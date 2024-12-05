#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<long long>&arr,long long low,long long high,long long target ){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(target==arr[mid]) return mid;
    else if(target>arr[mid]) return Binary_search(arr,mid+1,high,target);
    return Binary_search(arr,low,mid-1,target);
}
int main(){

    vector<long long> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int a=Binary_search(arr,0,4,3);
    if (a==-1) cout<<-1;
    if (a==0) cout<<-1;
    else cout<<arr[a-1];

return 0;
}