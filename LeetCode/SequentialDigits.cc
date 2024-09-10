#include <vector>

class Solution {
public:

    std::vector<int> res(int digit, int curr, int low, int high, std::vector<int> &res){
        if(curr<low){
            curr = (curr*10) + (digit+1);
            digit++;
            
        }
    }

    std::vector<int> sequentialDigits(int low, int high) {
        
    }
};