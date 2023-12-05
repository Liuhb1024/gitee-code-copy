#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
	public:
		vector<int> findAnagrams(string s, string p) {
			vector<int> result;
			int n = s.length();
			int m = p.length();

			if (n < m)
				return result;
			unordered_map<char, int> target, window;
			for (char c : p)
				target[c]++;

			int left = 0, right = 0, count = 0;

			while (right < n)
			{
				char c = s[right];

				if (target.count(c))
				{
					window[c]++;
					if (window[c] == target[c])
						count++;
				}
			}

			right++;

			if (right - left == m)
			{
				if (count == target.size())
					result.push_back(left);

				char d = s[left];

				if (target.count(d))
				{
					if (window[d] == target[d])
						count--;

					window[d]--;
				}

				left++;
			}

			return result;
		}
};