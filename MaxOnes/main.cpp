//
//  main.cpp
//  MaxOnes
//
//  Created by Abhilash on 25/3/18.
//  Copyright © 2018 abhi. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Maxone_opti.cpp"
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int nMax_Ones = 0;
        int n = (int)nums.size(); // size of the vector array
        for (int i= 0; i<n; ++i) {
            if(nums[i] == 1) {
                int curr_len = 1;
                int r = i + 1;
                while(r<n && nums[r] == 1) {
                    ++curr_len;
                    ++r;
                }
                nMax_Ones = max(nMax_Ones, curr_len);
            }
            
        } // for loop
        return nMax_Ones;
    }
};
int main(int argc, const char * argv[]) {
    
    vector<int> nums {1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
    
   // Solution mysln;
   // int result =  mysln.findMaxConsecutiveOnes(nums);
    
    Solution_optimize optimum;
    int result = optimum.findMaxConsecutiveOnes(nums);
    cout << result;
    
    return 0;
}
