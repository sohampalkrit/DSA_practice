#include<bits/stdc++.h>
using namespace std;
int longestsub(vector<int> arr,long long k){
    int right=0;
    int left=0;
    int maxlen=0;
    long long sum=arr[0];
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum=sum-arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    return maxlen;
}
int main(){
    int n;
    cin>>n;
    int a;
    vector<int> arr;
   for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    int k;
    cin>>k;
    cout<<longestsub(arr,k);



return 0;
}