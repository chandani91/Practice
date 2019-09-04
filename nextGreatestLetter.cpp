class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size();
        int temp;
        if (end == 0 || end == 1)
            return 0;
        if (target == letters[end-1])
            return letters[start];
        while (start <= end){
            int midVal = (start+end)/2;
            if (letters[midVal] == target)
                return letters[midVal + 1];
            else if (letters[midVal] < target)
                start = midVal+ 1;
            else if (letters[midVal] > target){
                end = midVal - 1;
                temp = midVal;       
            }
            
        }
        return temp;
    }
};