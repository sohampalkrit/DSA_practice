#include<bits/stdc++.h>
using namespace std;
/*
Selection sorting
*/
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        //swaping
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
            

        }
    }
}
/*
Bubble Sorting
*/
void Bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
            


        }
    }
}
/*
insertion_sort
*/
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            //swap
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //selection_sort(arr,n);
    //Bubble_sort(arr,n);
    insertion_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }




return 0;
}