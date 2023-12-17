class Solution {
public:
    bool isPalindrome(long long num) {
        long long original = num;
        long long reverse = 0;

        while (num > 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        return original == reverse;
    }

    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        long long median = n % 2 == 0 ? (nums[n / 2 - 1] + nums[n / 2]) / 2 : nums[n / 2];

        long long nearest1 = 0, nearest2 = 0;
        for (long long num = median; num >= 0; --num) {
            if (isPalindrome(num)) {
                nearest1 = num;
                break;
            }
        }

        for (long long num = median + 1; num <= 1e9; ++num) {
            if (isPalindrome(num)) {
                nearest2 = num;
                break;
            }
        }

        long long cost1 = 0, cost2 = 0;
        for (int i = 0; i < n; ++i) {
            cost1 += abs(nums[i] - nearest1);
            cost2 += abs(nums[i] - nearest2);
        }

        return min(cost1, cost2);
    }
};