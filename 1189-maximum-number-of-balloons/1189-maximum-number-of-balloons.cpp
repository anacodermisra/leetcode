#include <algorithm>
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int size= text.length();
        int b=0;
        int a=0;
        int l=0;
        int o=0;
        int n=0;
        for (int i=0;i<size;i++){
            if(text[i]=='b'){
                b++;
            }
            else if(text[i]=='a'){
                a++;
            }
            else if(text[i]=='l'){
                l++;
            }
            else if(text[i]=='o'){
                o++;
            }
            else if(text[i]=='n'){
                n++;
            }
        }
        int count= min({b,a,l/2,o/2,n});
      
       
        return count;
    }
};