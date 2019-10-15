#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0)
       return a;
    else
        return gcd(b, a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int gcd_var = gcd(r, n);
        //cout<<gcd_var<<" gcd_var"<<endl;
        for(int i=0;i<gcd_var;i++){
            int temp = arr[i];
            int j=i;
            while(true){
                int k=j+r;
                
                if(k>=n)
                    k=k-n;
                
                if(k==i)
                    break;
                
                arr[j]=arr[k];   
                j=k;
            }
            arr[j]=temp;
        }
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
