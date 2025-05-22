#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>arr={0,2,1,0};
    int n=arr.size();
    int st=1,end=n-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            cout<<mid;
            return 0;
        }
        if(arr[mid]>arr[mid-1]) st=mid+1;
        else end=mid-1;
    }

    return 0 ;
}