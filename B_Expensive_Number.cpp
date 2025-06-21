#include <cctype>
#include <iostream>
#include<vector>
using namespace std;



int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> p(n);
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    int maxi =0;
	    for(int i=0;i<n;i++){
	        bool swapped = false;
	        for(int j=0;j<n-i-1;j++){
	            if(p[j]>p[j+1]){
	                swap(p[j],p[j+1]);
	                maxi = max(maxi, p[j]+p[j+1]);
	                swapped = true;
	                
	            }
	        }if (!swapped) break;
	    }
	    cout<<maxi<<endl;
	}

}
