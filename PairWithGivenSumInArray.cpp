#include <bits/stdc++.h>
using namespace std;
void checkPair(int arr[], int n, int sum){
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]=i;
    }
    
    for(int i=0;i<n;i++){
        if(m.find(sum - arr[i]) != m.end()){
            cout << "Pair found at index " << i << 
						 " and " << m[sum - arr[i]];
			return;
        }
    }
    cout<<"Pair not found"<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    checkPair(arr, n, sum);
	}
	return 0;
}
