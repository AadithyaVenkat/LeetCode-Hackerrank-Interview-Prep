class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
       map<int,string> myMap;
        myMap.insert({3, "Fizz"});
        myMap.insert({5, "Buzz"});
        vector<string> myVec;
        
        for(int i = 1; i <= n ; i++){
            
            string answ = "";
            for(auto& my : myMap)
            {
                
                if(i % my.first == 0){
                    answ += my.second;
                }
            
            }
            if(answ != "")
            {
                myVec.push_back(answ);
            }
            else
            {
                myVec.push_back(to_string(i));
            }
        }
        return myVec;
    }
};
