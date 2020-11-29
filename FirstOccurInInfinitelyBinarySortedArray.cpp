
#include<bits/stdc++.h>
using namespace std;
//find position of an element in infinite sorted array

int main(){

    int arr[] = { 0, 0, 1, 1, 1, 1 };

    int start=0;
    int end=1;

    while(arr[end]<1){
        start=end;
        end=end*2;
    }

   int res1=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==1){
            res1=mid;
            end=mid-1;
        }else if(arr[mid]<1 ){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

    if(res1==-1){
        cout<<"Error 404: Not found =>"<<res1<<endl;
    }else{
        cout<<res1<<" ";
    }

}
