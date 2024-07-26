#include<iostream>
using namespace std;
void pattern1(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
        cout<<" *";
    }
    cout<<"\n";
}
}
void pattern2(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<" *";
    }
    cout<<"\n";
}
}
void pattern3(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<j+1;
        cout<<" ";
    }
    cout<<"\n";
}
}
void pattern4(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<i+1;
        cout<<" ";
    }
    cout<<"\n";
}
}
void pattern5(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
}
for(int j=0;j<2*i+1;j++){
    cout<<"*";
}
for(int j=0;j<n-i-1;j++){
    cout<<" ";
    
}
      cout<<"\n";
}
}
void pattern6(int n){

    int nums=0;
    for(int i=0;i<(n);i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<=nums;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        nums+=2;
        cout<<"\n";
        

    }
    
}
void pattern7(int n){
    for(int i=1;i<=(2*n-1);i++){
        int initS=2*n-2;
        int stars = i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        for(int j=0;j<initS;j++){
            cout<<" ";
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        if (i<n) initS-=2;
        else{
            initS+=2;
        }
    }


}
int main(){
int n;
cout<<"Enter the pattern number"<<endl;
cin>>n;
if(n==1){
int t;    
cout<<"Enter the number";
cin>>t;
pattern1(t);
}
if(n==2){
int t;    
cout<<"Enter the number";
cin>>t;
pattern2(t);

}
if(n==3){
int t;    
cout<<"Enter the number";
cin>>t;
pattern3(t);

}
if(n==4){
int t;    
cout<<"Enter the number";
cin>>t;
pattern4(t);

}
if(n==5){
int t;    
cout<<"Enter the number";
cin>>t;
pattern5(t);

}
if(n==6){
int t;    
cout<<"Enter the number";
cin>>t;
pattern6(t);

}
     return 0;
}





