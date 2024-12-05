#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[16];
    for(int i=0;i<16;i++){
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            if(arr[i]>arr[j]){
                c++;
            }


        }
            if(c==0){
                arr[i]=0;
            }
            if(c>0 && c<3){
                arr[i]=1;

            }
            if(c>2 && c<7){
                arr[i]=2;
            }if(c>6 && c<15){
                arr[i]=3;
            }if(c==15){
                arr[i]=4;
            }
            c=0;
    }
    
    for(int i=0;i<16;i++){
        cout<<arr[i];
    }

return 0;
}
