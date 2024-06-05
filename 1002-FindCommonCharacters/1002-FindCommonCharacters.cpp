
        for (char ch : words[0]) {
            minFreq[ch - 'a']++;
        }

        for (int i = 1; i < words.size(); i++) {
            fill(currentFreq.begin(), currentFreq.end(), 0);  // Reset currentFreq to 0
            for (char ch : words[i]) {
                currentFreq[ch - 'a']++;
            }
            for (int j = 0; j < 26; j++) {
                minFreq[j] = min(minFreq[j], currentFreq[j]);
            }
        }

        vector<string> result;
        vector<int> currentFreq(26, 0);
        for (int i = 0; i < 26; i++) {
            while (minFreq[i]-- > 0) {
                result.push_back(string(1, 'a' + i));
            }
        }
[
