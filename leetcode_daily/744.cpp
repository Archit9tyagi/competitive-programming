class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x = (int)target;
        char result = letters[0];

        for(int i = 0;i<letters.size();i++){
            int y = (int)letters[i];
            if(y > x){
                result = letters[i];
                break;
            }
        }
        return result;
    }
};
