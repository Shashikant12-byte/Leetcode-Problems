class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n=answers.size();
        unordered_map<int, int>m;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(m[answers[i]+1]==0){
                ans+=answers[i]+1;
                m[answers[i]+1]=1;

                if (m[answers[i]+1] == answers[i]+1) {
        m.erase(answers[i]+1);
    }
            }
            else{
              m[answers[i]+1]++;
              int key=answers[i]+1;
              int value=m[key];
              if(key==value){
                m.erase(key);
              }
            }
            
        }
        
        
        return ans;
    }
};