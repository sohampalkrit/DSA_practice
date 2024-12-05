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
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
         if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;

         }else{
            temp.push_back(arr[right]);
            right++;
         }

    }    
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=right){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
         arr[i]=temp[i-low];
    }

    
     
}
void ms(vector<int> &arr,int low, int high){
    if(low==high) return;
    int mid = (high+low)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge_sort(vector<int> &arr,int n){
    ms(arr,0,n-1);
     

}
//quik sorting 
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high-1){
            i++;
        }
        while(arr[j]>pivot && j>low+1){
            j++;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);

}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}
vector<int> qick_sort(vector<int> arr){
    qs(arr,0,arr.size()-1);
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
    //insertion_sort(arr,n);
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }




return 0;
}