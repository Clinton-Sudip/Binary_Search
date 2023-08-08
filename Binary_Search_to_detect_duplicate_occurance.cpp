#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int x; cin >> x;
    int l=0; int r = n-1, mid;
    bool flag = false;
    while(l<=r){
        mid = (l+r)/2;
        //cout << l << " + " << r << " = " << mid << endl;
        if(x < nums[mid]){
            //cout << "nums[mid] = " << nums[mid] << endl;
            r = mid-1;
        }
        else if(x > nums[mid]){
            //cout << "nums[mid] = " << nums[mid] << endl;
            l = mid+1;
        }
        else{
            //cout << "nums[mid] = " << nums[mid] << endl;
            flag = true;
            break;
        }
    }
    if(flag){
        if(mid == 0){
            if(nums[mid] == nums[mid+1]){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        else if(mid >= n-1){
            if(nums[mid] == nums[mid-1]){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        else{
            if((nums[mid] == nums[mid+1]) || (nums[mid] == nums[mid-1])){
                cout << "YES";
            }
            else{
                cout << "NO";
            }
        }
        //cout << "index value: " << mid;
        
    }
    return 0;
}