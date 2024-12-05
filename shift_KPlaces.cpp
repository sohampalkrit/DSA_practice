#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> temp;
        for(int i=n-1;i>n-1-k;i--){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};
int main(){

     

return 0;
}