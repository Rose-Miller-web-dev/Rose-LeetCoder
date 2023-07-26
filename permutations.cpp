#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > remove_repeats(vector<vector<int> > &res) {
    
    for (int i = 0 ; i < res.size() ; i++) {
        
        for (int j = i + 1 ; j < res.size() ; j++) {
            
            if (res[i] == res[j]) {
                
                res.erase (res.begin() + j);
            }
        }
    }
    
    return res;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void permutations(vector<vector<int> > &res, vector<int> nums, int low, int high) {
    
    if (low == high) {
        res.push_back(nums);
        return;
    }
    
    for (int i = low; i < high ; i++) {
        
        swap(nums[low], nums[i]);
        
        permutations(res, nums, low + 1, high);
        
        swap(nums[i], nums[high]);
        
        permutations(res, nums, i + 1, high);
    }
}

vector<vector<int> > p(vector<int> nums) {
    
    vector<vector<int> > res;
    int high_position = nums.size() - 1;
    permutations(res, nums, 0, high_position);
    
    return res;
}

int main() {
    
    vector<int> nums = {1,2,3,4,5,6};
    vector<vector<int> > res;
    
    res = p(nums);
    
    for (int i = 0 ; i < nums.size() ; i++)
        res = remove_repeats(res);
    
    //cout<<res.size()<<" permutations"<<endl;
    
    for (auto x : res) {
        
        for (auto y: x) {
            
            cout<<y<<' ';
        }
        
        cout<<endl;
    }
    
    return 0;
}

