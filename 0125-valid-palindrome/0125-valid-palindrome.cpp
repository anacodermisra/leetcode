class Solution {
    private:
    bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
   //anand
     bool checkPalindrome(string arr) {
    int s = 0;
    int e = arr.length() - 1;
    while (s <= e) {
        if (arr[s] != arr[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
public:
    bool isPalindrome(string s) {
      
        string temp="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                    temp.push_back(s[j]);
            }
        }
         for (int i = 0; i < temp.size(); i++) {
        temp[i] = tolower(temp[i]);
    }
   return checkPalindrome(temp);

    }
};