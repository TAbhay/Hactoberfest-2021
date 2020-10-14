#include <bits/stdc++.h>
class Anagram {
public:
    bool isAnagram(string s, string t) {
    map <char,int> hash;
    map <char,int> hash1;
    if(s.size()==t.size())
    {
        for(int i=0;i<s.size();i++)
            {   if(hash.find(s[i])==hash.end())
                    hash.insert(pair<char, int>(s[i],1));
                else
                   hash[s[i]]++;
            }
            for(int i=0;i<s.size();i++)
            {   if(hash1.find(t[i])==hash1.end())
                        hash1.insert(pair<char, int>(t[i],1));
                else
                   hash1[t[i]]++;
            }

        for(auto itr:hash1)
        {
            cout<<itr.first<<itr.second<<"\n";
        }
        if(hash1.size()==hash.size())
            {
            
            for (auto itr:hash)
            {
                if(hash1.find(itr.first)==hash1.end())
                    return false;
            }
            for (auto itr:hash)
            {
                auto i=itr.first;
                if(hash1[i]!=itr.second)
                    return false;
            }
            

            return true;
            }   
        else
            return false;
    }
    else
    {
        return false;
    }
    
    }
};
int main()
{
Anagram obj;
bool output=obj.isAnagram("anagram", "nagaram"");
cout<<output;
return 0;}
