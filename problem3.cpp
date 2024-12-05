#include<bits/stdc++.h>
using namespace std;

bool isGoodString(const string& s) {
    int n = s.length();
    if (n < 2) {
        return false;
    }
    
    // Try all possible ways to split the string
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            string t1 = s.substr(0, i);
            string t2 = s.substr(i, j - i);
            string t3 = s.substr(j);
            cout<<t1<<" "<<t2<<" "<<t3<<endl;

            // Check the condition for this split
            if (t1.front() != t2.back() && t2.front() != t3.back()) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    vector<int> vecout;
    int T;
    cin>>T;
    int i=0;
    while(i<T){
    int n;
    cin>>n;
    string s;
    cin >> s;

    if (isGoodString(s)) {
        vecout.push_back(1);
        
    } else {
        vecout.push_back(0);
        
    }
    i++;
    }
    cout<<vecout[0];
    return 0;
}