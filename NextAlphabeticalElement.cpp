
#include<bits/stdc++.h>
using namespace std;
//Next Alphabetical element

int main(){
    char arr[]={'a','c','f','h'};
    char key;
    cin>>key;
    int start=0;
    int end=3;
    char res1=' ';
    while(start<=end  ){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            start=mid+1;            //if the same letter present we do not return it
        }else if(arr[mid]<key ){
            start=mid+1;
        }else{
            res1=arr[mid];
            end=mid-1;
        }
    }
    if(res1=' '){
        cout<<"Error 404: Not found"<<endl;
    }else{
        cout<<res1<<" ";
    }

}
