#include <vector>
#include <iostream>

using namespace std;

int min_counter(int one, int two) {
    
    if (one > two)
        return two;
    
    return one;
}

string find_common_prefix(string one, string two) {
    
    string found_common = "";
    int common_len = min_counter(one.size(), two.size());
    
    for(int i = 0 ; i < common_len ; i++) {
        
        if(one[i] == two[i]) {
            
            found_common = found_common + one[i];
            
        }
        
        else {
            
            break;
        }
        
    }
    
    return found_common;
}

int main() {
    
    vector<string> strings = {"abs"};
    string common = "";
    
    if (strings.size() == 1) {
        
        common = strings[0];
    } 
    
    else {
        
        common = find_common_prefix(strings[0], strings[1]);
    
        for (int i = 2 ; i < strings.size() ; i++) {
            
            common = find_common_prefix(common, strings[i]);
            
        }
    }
    
    cout<<"it's "<<common;
    return 0;
}













