class segment_tree{
    public:
    int m;
    vector<int>segTree;
    segment_tree(int size){
      m=size;
      segTree.assign(4*m,0);
    }

    void segTreeUpdate(int i,int l,int r,int cv){
        if(l==r){
            segTree[i]++;
            return;
        }
        int mid=l+(r-l)/2;
        if(cv<=mid){
            segTreeUpdate(2*i+1,l,mid,cv);
        }
        else{
             segTreeUpdate(2*i+2,mid+1,r,cv);

        }
        segTree[i]=segTree[2*i+1]+segTree[2*i+2];

    }

    int segTreeQueryRangeSum(int start,int end,int i,int l,int r){
        if(l>end || r<start){
            return 0;
        }
        if(l>=start && r<=end){
            return segTree[i];
        }
        int mid=l+(r-l)/2;
        return segTreeQueryRangeSum(start,end,2*i+1,l,mid) + segTreeQueryRangeSum(start,end,2*i+2,mid+1,r);
    }

    void update(int cv){
            segTreeUpdate(0,0,m-1,cv);
    }

    int query(int start,int end){
        return segTreeQueryRangeSum(start,end,0,0,m-1);

    }

};


class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>sortedNums(begin(nums), end(nums));
        sort(begin(sortedNums),end(sortedNums));
        unordered_map<int,int>mp;
        int cv=0;
        for(int x : sortedNums){
          if(!mp.count(x)){
        mp[x] = cv++;
    }
}
        int m=mp.size();
        vector<int>arr1;
        vector<int>arr2;

        segment_tree t1(m);
        segment_tree t2(m);

        arr1.push_back(nums[0]);
        t1.update(mp[nums[0]]);
        arr2.push_back(nums[1]);
        t2.update(mp[nums[1]]);

        for(int i=2;i<n;i++){
            cv=mp[nums[i]];
            int c1= t1.query(cv+1,m-1);
            int c2= t2.query(cv+1, m-1);

            bool addToarr1=false;
            if(c1>c2){
                addToarr1=true;
            }
            else if(c2>c1){
                addToarr1=false;
            }
            else{
                if(arr1.size()<=arr2.size()){
                    addToarr1=true;
                }
            }
            if(addToarr1){
                arr1.push_back(nums[i]);
                t1.update(cv);
            }
            else{
                arr2.push_back(nums[i]);
                t2.update(cv);
            }
        }
        arr1.insert(end(arr1),begin(arr2),end(arr2));
        return arr1;
    }
};