
#include<bits/stdc++.h>
using namespace std;
//Find floor of an element in an sorted array

int main(){
    int arr[]={1,2,3,4,8,10,10,12,19};
    int c;
    cin>>c;
    int start=0;
    int end=8;
    int res1=-1,res2=0;
    while(start<=end && c>arr[0]){
        int mid=start+(end-start)/2;
        if(arr[mid]==c){
            res1=arr[mid];
        }else if(arr[mid]<c ){
            res1=arr[mid];
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

    cout<<res1<<" ";
}
