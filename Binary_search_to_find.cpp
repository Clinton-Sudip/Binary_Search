#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[], int l, int r, int x){
    int mid;
    if(l>r){
        cout << "Not Found";
        return;
    }
    else{
        mid = (l+r)/2;
        if(x < arr[mid]){
            binary_search(arr,l,mid-1,x);
        }
        else if(x > arr[mid]){
            binary_search(arr,mid+1,r,x);
        }
        else{
            cout << mid;
            return;
        }
    }
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x; cin >> x;
    binary_search(arr,0,n-1,x);
    return 0;
}