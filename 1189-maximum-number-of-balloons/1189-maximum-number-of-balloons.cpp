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
            if(text[i]=='a'){
                a++;
            }
            if(text[i]=='l'){
                l++;
            }
            if(text[i]=='o'){
                o++;
            }
            if(text[i]=='n'){
                n++;
            }
        }
        
      
        int count=0;
        while(b>=1 && a>=1 && l>=2 && o>=2 && n>=1){
            b--;
            a--;
            l--;
            l--;
            o--;
            o--;
            n--;
            count++;
        }
        return count;
    }
};