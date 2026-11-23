class ProductOfNumbers {
public:
    vector<int>v;
    ProductOfNumbers() {
        v.clear();
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int i=v.size()-k;
        int pro=1;
        while(i<v.size()){
            pro*=v[i];
            i++;
        }
        return pro;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */