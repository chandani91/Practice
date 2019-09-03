// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long start = 0;
       long end = n;
       long theVersion;
       long midVal;
        if (n == 1 || n == 0)
            return n;
        while (start <= end){
           midVal = (start+end)/2;
            if (isBadVersion(midVal) == true){
               end = midVal - 1;
               theVersion = midVal;
            }
            else 
                start = midVal + 1;
        }
        return theVersion;
    }
};