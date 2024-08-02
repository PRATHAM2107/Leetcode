            if(nums[j%n] == 1) {
                currCount++;
            }
        while(j < 2*n) {

        int maxCount = 0;
        int currCount = 0;
        int j = 0;
        int i = 0;

        int countOnes = count(nums.begin(), nums.end(), 1);

        // }

            if(j-i+1 > countOnes) {
                currCount -= nums[i%n];
                i++;
            }

            maxCount = max(maxCount, currCount);
            j++;
        }
[
[0,1,0,1,1,0,0]
[0,1,1,1,0,0,1,1,0]
[1,1,0,0,1]
1
2
0
1
2
0
