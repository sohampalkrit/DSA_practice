#include<bits/stdc++.h>
using namespace std;
//implementation of stack using array

class stack_imp{
    public:
    
    int st[10];
    int top=-1;
    void push(int n){
        top=top+1;
        st[top]=n;
    }
    int top(void){
        if(top==-1) return 0;
        else return st[top];
    }
    int getlen(void){
        if(top==-1) return 0;
        else return top;
    }
    void pop(){
        cout<<top;
        st[top]=NULL;
        top=top-1;
    }


};





int main(){
    stack_imp st1;
    st1.getlen();
    
return 0;
}