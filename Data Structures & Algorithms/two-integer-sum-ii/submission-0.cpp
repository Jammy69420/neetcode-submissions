class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;

        vector<int> answer(2);
        while (i < j) {
            if (numbers[i] + numbers[j] == target) {
                answer[0] = i+1;
                answer[1] = j+1;
                return answer;
            }
            else if (numbers[i] + numbers[j] < target) {
                i++;
            }
            else {
                j--;
            }
        }

        return answer;
    }
};
 