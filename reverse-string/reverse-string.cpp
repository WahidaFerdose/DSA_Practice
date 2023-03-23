class Solution {
    void rev(vector<char> &s, int i,int j)
    {
        if(i>=j)
            return;
        swap(s[i],s[j]);
        rev(s,i+1,j-1);
    }
public:
    void reverseString(vector<char>& s) {
       /* int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return;*/
        
        
        int n=s.size();
        rev(s,0,n-1);
        return ;
    }
};