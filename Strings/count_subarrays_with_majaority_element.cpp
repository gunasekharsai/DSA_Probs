// approch1

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        long long result = 0;

        for(int i = 0;i<n;i++){

            for(int j = i;j<n;j++){
                // is majaority elememt = target then count ++

                 int count = 0;
                for(int k = i;k<=j;k++){
                    if(nums[k] == target){
                        count++;
                    }

                    
                }

                if(count>(j-i+1)/2){
                        result++;
                    }
            }
        }

        return result;
    }
};





//aproch 2 (TC : O(N2))

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        long long result = 0;

        for(int i = 0;i<n;i++){

            int count = 0;

            for(int j = i;j<n;j++){
                // is majaority elememt = target then count ++

            

            count += (nums[j]==target) ? 1 : 0; 

            if(count>(j-i+1)/2){
                result++;
            }

        }
        }

        return result;
    
    }
};




//aproch 3 (TC:O(N2))

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        long long result = 0;

        for(int i = 0;i<n;i++){

            int count = 0;

            for(int j = i;j<n;j++){
                // is majaority elememt = target then count ++

            

            count += (nums[j]==target) ? 1 : -1; 

            if(count>0){
                result++;
            }

        }
        }

        return result;
    
    }
};




//approch 4 O(N)

class Solution {
public:

//cummulative sum

    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        long long result = 0;

        unordered_map<int, int> mp;
        int cumsum = 0;
        mp[cumsum]++;

        long long validleftpoints = 0;
        for(int i = 0;i<n;i++){

           //

           if(nums[i] == target){
           
            
            validleftpoints += mp[cumsum];
            cumsum++;
           }else{
            cumsum--;
            validleftpoints -= mp[cumsum];
            
           }

           result+=validleftpoints;
           mp[cumsum]++;

        }

        return result;
    
    }
};



