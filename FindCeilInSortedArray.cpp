#include<bits/stdc++.h>
using namespace std;
//Find ceil of an element in an sorted array

int main(){
    int arr[]={1,2,3,4,8,10,10,12,19};
    int c;
    cin>>c;
    int start=0;
    int end=8;
    int res1=-1;
    while(start<=end  ){
        int mid=start+(end-start)/2;
        if(arr[mid]==c){
            res1=arr[mid];
        }else if(arr[mid]<c ){
            start=mid+1;
        }else{
            res1=arr[mid];
            end=mid-1;
        }
    }

    cout<<res1<<" ";
}