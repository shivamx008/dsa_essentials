#include<bits/stdc++.h>
using namespace std;


int compress(vector<char>& chars) {
  
    string sent;
    if(chars.size()>1)
    {
        int i,ans=0,count=1;//assuming it's not a empty string
        for( i=1;i<chars.size();i++)
        {
            if(chars[i]==chars[i-1])
                count++;
            else
            {   sent+=chars[i-1];
                if(count>1){
                    sent+=to_string(count);
                    int n=log10(count)+1;
                    ans=ans+n+1;
                    count=1;
                }
                else
                {
                    ans++;
                    count=0;
                }
            }
        }
        sent+=chars[i-1];
        if(count>1){
            sent+=to_string(count);
            int n=log10(count)+1;
            ans=ans+n+1;
            count=1;
        }
        else
            ans++;
        chars.clear();
        for(i=0;i<sent.length();i++)
        {
            chars.push_back(sent[i]);
        }
        return ans;
    }
    
   
    
    else if(chars.size()==1)
    {
        char ch=chars[0];
        chars.clear();
        chars.emplace_back(ch);
        return 1;
    }
    else
        return 0;


    //thismethod did not work so we need to make a new attempt, because we have to update the array as well
    //Now it's fine ,🔥🔥😁



}
int compressSolutoion(vector<char>& chars) {
    
	int count_=1;
    string ans;
	
    for(int i=0;i<chars.size();i++)
    {
        while(i<chars.size()-1 && chars[i+1] == chars[i])
        {
            count_++;
            i++;
        }
        ans += chars[i];
        if(count_ == 1)
        {
            continue;
        }
        ans += to_string(count_);
        count_ = 1;
    }
    
     chars.clear();
    
     for(int i=0;i<ans.size();i++)
     {
          chars.push_back(ans[i]);
     } 
 
    return chars.size();
}
int main()
{
    vector<char> ch={'a','b','b','b','b','b','b','b','c','c','c','c','c','c','c','c','c','c','c','c','c','c','c'};
    int ans=compress(ch);
    cout<<ans<<"\n";

    for(auto x:ch){
        cout<<x<<", ";
    }
}
//i had forgot the count =1 ar line number at 35 and 21
