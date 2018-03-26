//
//  Maxone_opti.cpp
//  MaxOnes
//
//  Created by Abhilash on 25/3/18.
//  Copyright © 2018 abhi. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
class Solution_optimize {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_l = 0;
        int n = nums.size();
        int temp = max_l;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                max_l ++;
            } else {
                temp = max(max_l, temp);;
                max_l = 0;
            }
        }
        return max_l = max(max_l, temp);
    }
    /*int max_l = 0;
    int n = nums.size();
    int i = 0;
        while (i<n) {
            if(nums[i] == 1) {
                int current_len = 1;
                int r = i + 1;
                while (r<n && nums[r] == 1) {
                    ++r;
                    ++current_len;
                }
                i = r;
                max_l = max(max_l, current_len);
            }
            else {
                ++i;
            }
        }
        
        return max_l;
    }
    */
        /*
        int max_cnt = 0, cnt = 0;
        for (auto n : nums) {
            if (n == 1) max_cnt = max(++cnt, max_cnt);
            else cnt = 0;
        }
        return max_cnt;
    }*/
    
};
