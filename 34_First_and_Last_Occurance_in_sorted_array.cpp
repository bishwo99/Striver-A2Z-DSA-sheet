class Solution {
    private: 
     int firstoccurance(vector<int>&v,int k)
    {
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int first = -1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(v[mid] == k){
            first = mid;
            high = mid - 1;
        }
        else if(v[mid] < k) low = mid + 1;
        else
        high = mid - 1;
    }
    return first;
    }

    int lastoccurance(vector<int>&v,int k)
    {
    int n = v.size();
    int low = 0;
    int high = n - 1;
    int last = -1;

    while(low<=high){
        int mid = (low + high) / 2;
        if(v[mid] == k){
            last = mid;
            low = mid + 1;
        }
        else if(v[mid] < k) low = mid + 1;
        else
        high = mid - 1;
    }
    return last;
    }

public:   
    vector<int> searchRange(vector<int>& v, int k) {
        vector<int>res;
        int f = firstoccurance(v,k);
        int l = lastoccurance(v,k);
        res.push_back(f);
        res.push_back(l);
        return res;
    }        
};
