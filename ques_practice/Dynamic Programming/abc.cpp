#include<iostream>
using namespace std;void b(string s, int n){int m=-1,c=1,a[27]={0};for(int i=0;i<n;i++){if(s[i]!=s[i+1]){if(a[s[i]-'a']<c){a[s[i]-'a']=c;}c=1;}else{c++;}}for(int i=0;i<27;++i){if(a[i]>m){m=a[i];}}string d="";for(int i=0;i<27;++i){if(a[i]==m){char z=i+'a';d=d+z;}}cout<<m<<" "<<d<<endl;}int main(){int t;cin>>t;while(t--){int n;cin>>n;string s;cin>>s;b(s,n);}return 0;}