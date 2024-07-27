#include<bits/stdc++.h>
using namespace std;
int main(){
    //pair data type
    pair<int,pair<int,int>> p ={1,{2,3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<endl;
    //vectors 
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<endl;
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout<<vec[0].first<<endl ;

    vector<int> ve(5,69);
    cout<<ve[1];
    vector<int> ve2(ve);
    cout<<ve2[3];
    //Vector iterator
    vector<int>::iterator it = ve2.begin();
    cout<<*(it);
    it++;
    cout<<*(it);
    ve2.push_back(120);
    vector<int>::iterator it2 =ve2.end();
    it2--;
    cout<<*(it2)<<endl;
    //printing the vector elements 
    for(vector<int>::iterator it = ve2.begin();it!=ve2.end();it++){
        cout<<*(it)<<endl;
    }
    ve2.erase(ve2.begin(),ve2.begin()+2);
    for(vector<int>::iterator it = ve2.begin();it!=ve2.end();it++){
        cout<<*(it)<<endl;
    }
    ve2.insert(ve2.begin()+1,2,50);
    cout<<ve2.empty();


    return 0;
}