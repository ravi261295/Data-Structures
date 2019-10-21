#include <bits/stdc++.h>
using namespace std;
int findSubarray(int arr[], int n){
    int max_len=1;
    int start, end;
    for(int i=0;i<n-1;i++){
        int min_val = arr[i], max_val= arr[i];
        set<int> myset;
        myset.insert(arr[i]);
        
        for(int j=i+1;j<n;j++){
            if(myset.find(arr[j])!=myset.end())
                break;
            
            myset.insert(arr[j]);
            min_val=min(min_val , arr[j]);
            max_val=max(max_val , arr[j]);
            
            if(max_val - min_val== j-i){
                if(max_len < max(max_len , j-i+1))
                {
                    max_len=max(max_len , j-i+1);
                    start=i;
                    end=j;
                }
            }
        }
    }
    cout<<"Array elements are: ";
    for(int i=start;i<=end;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return max_len;
}
int main() {
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cout<<"Length of subarray is : "<<findSubarray(arr, n)<<endl;
	}
	return 0;
}
