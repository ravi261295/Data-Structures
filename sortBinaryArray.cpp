#include <bits/stdc++.h>
using namespace std;
void sortBinaryArray(int arr[], int n){
    int countZero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            countZero++;
    }
    for(int i=0;i<countZero;i++){
        arr[i]=0;
    }
    
    for(int i=countZero;i<n;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
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
	    sortBinaryArray(arr, n);
	}
	return 0;
}
