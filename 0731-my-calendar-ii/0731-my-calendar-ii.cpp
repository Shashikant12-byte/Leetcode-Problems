class MyCalendarTwo {
public:
    map<int,int>mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
       int currCount=0;
       mp[startTime]+=1;
       mp[endTime]-=1;

       for(auto &m:mp){
           currCount+=m.second;

            if(currCount>2){
                mp[startTime]-=1;
                mp[endTime]+=1;
                return false;
            } 
       }
       return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */