typedef long long ll; // Define shorthand for long long
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
     // Sort the input vector
    sort(nums.begin(), nums.end());
    int size = nums.size(); // Get the size of the vector
    ll result = 0; // Variable to store the maximum sum
    vector<ll> prefix_sum(size); // Vector to store prefix sums

    // Calculate prefix sums
    prefix_sum[0] = nums[0]; 
    for(int i = 1; i < size; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + nums[i]; 
    }
    
    // Iterate to find the maximum sum satisfying the condition
    for(int i = 2; i < size; i++) {
        if(nums[i] < prefix_sum[i - 1]) {
            result = std::max(result, prefix_sum[i]); 
        }
    }
    
    // If no valid sum found, set result to -1
    if(result == 0) {
        result = -1;
    }
    
    return result; // Return the maximum sum
    }
};