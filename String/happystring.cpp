//https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/description/?envType=daily-question&envId=2025-02-19
class Solution {
public:
void answer(int n,char c,string s, vector<string>&list)
{

    if(s.length() == n)
    {

        list.push_back(s);

        return ;
    }

    if(c != 'a' )
    {

    answer( n,'a',s+'a',list);
    }

    if(c != 'b')
   {

    answer( n,'b',s+'b',list);
   }
    if(c != 'c')
    {

    answer( n,'c',s+'c',list);
    }




}
    string getHappyString(int n, int k) {
        string s,prev;
        vector<string>list ;
        answer(n,'d',s,list);

        if( k> list.size())
        {
            return "";
        }
        else
        {
            return list[k-1];
        }

    }
};
