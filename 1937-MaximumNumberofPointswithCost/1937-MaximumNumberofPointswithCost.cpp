 
            left[0] = prev[0];
            for(int j = 1; j<n; j++) {
                left[j] = max(prev[j], left[j-1]-1);            
            }
            
            right[n-1] = prev[n-1];
            for(int j = n-2; j >= 0; j--) {
                right[j] = max(prev[j], right[j+1]-1); 
            }
            
            for(int j = 0; j<n; j++)
                curr[j] = points[i][j] + max(left[j], right[j]); 
            
            prev = curr;
        }
        return *max_element(prev.begin(), prev.end());
    }
};
[
[[1,2,3],[1,5,1],[3,1,1]]
[[1,5],[2,3],[4,2]]
9
11
9
11
