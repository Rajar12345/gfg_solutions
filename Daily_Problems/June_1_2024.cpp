class Solution {
  public:
    string oddEven(string s) {
        // code here
        unordered_map<char,int>mp;
        set<char>s1;
        int x=0,y=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            s1.insert(s[i]);
        }
        for(auto it:s1){
            if((it-97+1)%2==0 && mp[it]%2==0)   x++;
            if((it-97+1)%2!=0 && mp[it]%2!=0)   y++;

        }
        if((x+y)%2==0)  return "EVEN";
        else    return "ODD";
    }
};
