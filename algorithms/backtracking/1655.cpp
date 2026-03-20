#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> nums = {1,1,2,2,2,3};
    vector<int> quantity = {2,1};

    unordered_map<int,int> freq;

    // Create frequency map
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
    }

    // Process quantity array
    for(int i = 0; i < quantity.size(); i++){

        int x = quantity[i];

        for(auto &p : freq){

            if(p.second >= x){
                p.second = p.second - x;
                break;
            }
        }
    }

    

    return 0;
}