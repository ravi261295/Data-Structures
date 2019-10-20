#include <bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int n){
    int elem, temp=0, temp2=0;
    for(int i=1;i<n;i++){
        temp = temp^i;
    }
    for(int i=0;i<n;i++){
        temp2=temp2^arr[i];
    }
    
    return elem = temp^temp2;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<"Duplicate element is: "<<findDuplicate(arr, n)<<endl;
	}
	return 0;
}
