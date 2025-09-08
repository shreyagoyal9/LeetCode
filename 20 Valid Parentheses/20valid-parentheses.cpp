class Solution {
public:
    bool isValid(string s) {
        //store all chahracters in a temporary vector
            string temp;
        //auto iteration for each element
        for (char c : s) {
            //store only the initial openings
            if (c == '(' || c == '{' || c == '[') {
                temp.push_back(c);
            } else {
                if (temp.empty()) return false;
                //as soon as the new iteration element come, if its a 
                //closing bracket match with the last pushed
                char lastelement = temp.back();
                if ((c == ')' && lastelement != '(') ||
                    (c == '}' && lastelement != '{') ||
                    (c == ']' && lastelement != '[')) {
                    return false;
                }
                temp.pop_back();
            }
        }
        return temp.empty();
    }
};

        
    