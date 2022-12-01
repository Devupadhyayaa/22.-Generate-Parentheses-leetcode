#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin>>t;while(t--)
#define loop(variable,n) for(int variable=0;variable<n;variable++)
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(int l,int r,string temp,vector<string>&ans,int n){
    if(l==n&&r==n){
        ans.push_back(temp);
        return ;
    }
    if(l<n){
        solve(l+1,r,temp+'(',ans,n);
    }
    if(r<l){
        solve(l,r+1,temp+')',ans,n);
    }
}
vector<string> generateParenthesis(int n) {
    string temp="";
    vector<string>ans;
    solve(0,0,temp,ans,n);
    return ans;
}
int main(){
    fastIO();
    int n;cin>>n;
    vector<string>v=generateParenthesis(n);
    loop(i,v.size()){
        cout<<v[i]<<endl;
    }
return 0;
}