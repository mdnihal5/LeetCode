int n,m;
  cin>>n>>m;
  vi a(n,0);
  read(a);
  string s;
  cin>>s;
  int l=0;
  int r=n-1;
  int val=1;
  // reverse me ? 
  for(int i=0;i<n-1;i++){
   if(s[i]=='L'){l++;}
   else{r--;}
  }
  vector<int> ans;
  int cur=a[r];
  // l,r
  for(int i=n-2;i>=-1;i--){
   val=cur%m;
   cur=cur%m;
   // if(cur%m!=0){cur=cur%m;}
   ans.push_back(val);
   if(s[i]=='L'){
    l--;
    cur=cur*a[l];
   }
   else{
    r++;
    cur=cur*a[r];
   }
  }
  
  reverse(ans.begin(),ans.end());
  for(auto it:ans){
   cout<<it<<" ";
  }
  cout<<endl;
