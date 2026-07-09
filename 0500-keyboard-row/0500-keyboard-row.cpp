class Solution {
public:
    string lower(string v){
        transform(v.begin(),v.end(),v.begin(),[](unsigned char c){return tolower(c);});
        return v;
    }
    vector<string> findWords(vector<string>& words) {
        int n=words.size();
        vector<string>v;
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        for(int i=0;i<n;i++){
           string temp=lower(words[i]);
           int len=temp.length();
           int count=0;
           if(s1.contains(temp[0])){
               count++;
            for(int i=1;i<len;i++){
                if(s1.contains(temp[i])){
                    count++;
                }
            }
           }
           else  if(s2.contains(temp[0])){
               count++;
            for(int i=1;i<len;i++){
                if(s2.contains(temp[i])){
                    count++;
                }
            }
           }

           else if(s3.contains(temp[0])){
               count++;
            for(int i=1;i<len;i++){
                if(s3.contains(temp[i])){
                    count++;
                }
            }
           }

           if(count==len){
            v.push_back(words[i]);
           }

        }
        return v;
    }
};