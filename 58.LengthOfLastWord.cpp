//Given a string s consisting of words and spaces, return the length of the last word in the string.

//A word is a maximal
//substring
//consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int index=0;
        int size=0;
        for(int i=s.length()-1;i>0;i--)
        {
            if(s[i]!=' ')
            {
                index=i;
                break;
            }

        }
        for(int i=index;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                size+=1;
            }
            else
            {
                break;
            }

        }
        return size;
    }
};

 
