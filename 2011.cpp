//optimal solution
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(string op : operations) {
            if(op[1] == '+') x++;
            else x--;
        }

        return x;
    }
};
//little better code
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(string op : operations) {
            if(op == "++X" || op == "X++") {
                x++;
            } else {
                x--;
            }
        }

        return x;
    }
};
//my code
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="X++"){
                x++;
            }
            else if(operations[i]=="X--"){
                x--;
            }
            else if(operations[i]=="--X"){
                --x;
            }
            else{
                ++x;
            }

        }
        return x;
    }
};
