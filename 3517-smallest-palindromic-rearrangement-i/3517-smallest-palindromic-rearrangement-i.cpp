class Solution {
public:
    string reverse(string str){
        int n=str.length();
        int l=0;
        int r=n-1;
        while(l<r){
            swap(str[l],str[r]);
            l++;
            r--;
        }
        return str;
    }
    string smallestPalindrome(string s) {
        int n=s.length();
        if(n==1 || n==2){
            return s;
        }
        string ans="";
        if(n%2==0){
            int e=n/2;
            for(int i=0;i<e;i++){
                ans+=s[i];
            }
            sort(ans.begin(),ans.end());
            ans+=reverse(ans);
        }
        else{
            int e=n/2;
            for(int i=0;i<e;i++){
                ans+=s[i];
            }
            string temp=ans;
            sort(temp.begin(),temp.end());
            sort(ans.begin(),ans.end());
            ans+=s[e];
            ans+=reverse(temp);

        }

        
       return ans;

    }
};