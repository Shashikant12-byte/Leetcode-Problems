class Solution {
public:
    bool checkString(string s) {
        int n= s.length();
        int x=n,y=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                x=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                y=i;
            }
        }
        return (y<x)?true:false;
    }
};