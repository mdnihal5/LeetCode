#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        vector<int>ans;
        if(n%2==1){
            std::cout << -1 << std::endl;
            continue;
        }
        else{
            int count=0;
            while(i<j && count<300){
                if(s[i]==s[j]){
                    if(s[i]=='1'){
                        s.insert(i,"01");
                        ans.push_back(i+1);
                        // i=i-2;
                        j=j+2;
                        count++;
                    }
                    else{
                        s.insert(j+1,"01");
                        ans.push_back(j+1);
                        j=j+2;
                        // i=i-2;
                        count++;
                    }
                }
                i++,j--;
            }
            if(i>=j){
                if(ans.size()==0){
                    cout<<0<<endl;
                    cout<<" "<<endl;
                }
                else{
                    cout<<ans.size()<<endl;
                    for(auto it:ans){
                        std::cout << it<<" ";
                    }
                    cout<<endl;
                }
               
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
    }

    return 0;
}
