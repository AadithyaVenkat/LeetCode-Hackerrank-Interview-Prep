class Solution {
public:
    int compress(vector<char>& chars) {
        
        if(chars.size()==0)
            return 0;
        
        chars.push_back(chars[chars.size()-1]+' ');
        int pos=0,  cnt=1;
        for(int i=1; i<chars.size();i++)
        {
            if(chars[i]==chars[i-1])
                cnt++;
            else
            {
                chars[pos++]=chars[i-1];
                if(cnt>1)
                {
                    string n=to_string(cnt);
                    for(auto c:n)
                    {
                        chars[pos++]=c;
                    }
                }
                cnt=1;
            }
        }
        return pos;

    }
};
