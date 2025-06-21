#include<iostream>
#include<set>
#include<vector>

using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        string s;
        cin>>s;
        int odd=0;
        vector<int> freq(26,0);
        for(int i=0;i<x;i++){
            freq[s[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            odd+=freq[i]%2;
        }
        if(odd >k+1){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes\n";
        }

    }
}