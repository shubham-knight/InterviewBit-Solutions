
#include<iostream>
using namespace std;
//Searching in nearly sorted array

int main(){
    int arr[]={5,10,30,20,40};
    int c;
    cin>>c;
    int start=0;
    int end=4;
    int res1=0,res2=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==c){
            res1=mid;
        }else if(arr[mid-1]==c && mid>start){
            res1=mid-1;
        }else if(arr[mid+1]==c && mid<end){
            res1=mid+1;
        }

        if(arr[mid]>c){
            end=mid-2;
        }else{
            start=mid+2;
        }
    }

    cout<<res1<<" ";
}
