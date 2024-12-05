#include<bits/stdc++.h>
int longSubArray(vector<int> a,long long k){
    map<long long , int> PreSum;
    long long sum=arr[0];

    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem = sum-k;
        if(PreSum.find(rem)!=PreSum.end()){
            int len=i-PreSum[rem];
            maxlen=max(maxlen,len);
        }
        if(PreSum.find(sum)==PreSum.end()){
            PreSum[sum]=i;
        }
    }
    return maxlen;
}
using namespace std;
int main(){


return 0;
}