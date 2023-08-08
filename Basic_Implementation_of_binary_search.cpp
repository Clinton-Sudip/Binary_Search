#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<m; i++){
       int x, l=0, r= n-1 , mid; cin >> x;
       bool flag = false;
        while(l <= r){
            mid = (l+r)/2;
            if(arr[mid]==x){
                flag=true;
                break;
            }
            if(arr[mid]<x){
                //Go to right
                l= mid+1;
            }
            else{
                //Go to left
                r= mid-1;
            }
        }
        if(flag==true) cout << "found" << endl;
        else cout << "not found" << endl;
    }
    return 0;
}
/*Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤10^5)
.

Second line contains N
 numbers (1≤Ai≤10^9)
.

Next Q
 lines contains X
 (1≤X≤10^9)
.

Output
Print the answer for each query in a single line.*/