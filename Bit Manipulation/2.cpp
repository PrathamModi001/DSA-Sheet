// https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1

// Find the two non-repeating elements in an array of repeating elements

// in notes: Bit Magic
vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> myVector;
        vector<int> RES1;
        vector<int> RES2;
        
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            res = res ^ nums[i];
        }
        int k = (res) & ((~(res - 1)));
        
        int res1 = 0; int res2 = 0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i] & k) !=0){
                res1 = res1 ^ nums[i];
            } 
            else {
                res2 = res2 ^ nums[i];
            }
        }
        
        if (res1 < res2) {
        myVector.push_back(res1);
        myVector.push_back(res2);
        } 
        
        else {
        myVector.push_back(res2);
        myVector.push_back(res1);
        }
    
        return myVector;
    }