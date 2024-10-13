//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.

class Solution {
public:
    bool isPalindrome(string s) {
        vector< char > temp;
        bool flag=true;
        for(int i=0;i<s.length();i++)
        {
            if(int(s[i])>=65 && int(s[i])<=90 )
            {
                s[i]=char(int(s[i])+32);
                temp.push_back((s[i]));
            }
            else if(int(s[i])>=97 && int(s[i])<=122)
            {
                temp.push_back((s[i]));
            }
            else if(int(s[i])>=48 && int(s[i])<=57)
            {
                temp.push_back((s[i]));
            }
        }
        if(temp.size()==0 ||temp.size()==1 )
        {
            return true;
        }
        int end=temp.size()-1;
        for(int i=0;i<temp.size()/2;i++)
        {
            if(temp[i]!=temp[end] && i<end)
            {
                flag=false;
                break;
            }
            end--;

        }
        return flag;
    }
};
