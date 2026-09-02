/*
class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char,char>hash1,hash2;
       for(int i=0;i<t.length();i++){
        char a=s[i];
        char b=t[i];
        if(hash1.count(a)&& hash1[a]!=b)return false;
        if(hash2.count(b)&& hash2[b]!=a)return false;

        hash1[a]=b;
        hash2[b]=a;
       }
       return true;
        
    }
};
*/