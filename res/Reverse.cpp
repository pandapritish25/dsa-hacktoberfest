/*
// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.
*/

class Solution {
public:
    string reverseOnlyLetters(string str)
    {
        int ptr1=0,ptr2=str.size()-1;
        while(ptr1<ptr2)
        {
            if(isalpha(str[ptr1]))
            {
                if(isalpha(str[ptr2]))
                {
                    swap(str[ptr1],str[ptr2]);
                    ptr1++;ptr2--;
                }
                else
                    ptr2--;
            }
            else
                ptr1++;
        }
        return str;
    }
};
