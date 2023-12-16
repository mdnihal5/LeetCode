#include<bits/stdc++.h>
#define int long long

using namespace std;

bool compare(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

int32_t main(){
    int tt=1;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        vector<pair<int,int>> p;

        for(int i=0;i<n;i++) p.push_back({(int)s[i],i});
        sort(p.begin(),p.end(),compare);
        reverse(p.begin(),p.end());
        int last = -1;

        for(int i=0;i<n;i++){
            if(p[i].second < last) continue;
            v.push_back(p[i].second);
            last = p[i].second;
        }
        string s3="";
        int m = v.size();
        for(int i=0;i<m;i++) s3 += s[v[i]];
        reverse(s3.begin(),s3.end());
        for(int i=0;i<m;i++){
            s[v[i]] = s3[i];
        }
        string s2 = s;
        sort(s2.begin(),s2.end());
        int cnt=0;
        reverse(s3.begin(),s3.end());
        while(1){
            if(cnt == m) break;
            if(s3[cnt] == s3[0]) cnt++;
            else break;
        }

        int ans = m - cnt;
        if(s == s2) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
