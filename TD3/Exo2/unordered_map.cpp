
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*fonctionne uniquement si vecteur déjà trié

vector<int> twoSumBruteForce(const vector<int>& nums, int target) {
    vector<int> v1;

    for (int i=0; i<size(nums);i++){
        if (nums[i]>target){
            break;
        }
        for (int j=i+1; j<size(nums);j++){

            if (nums[i]+nums[j]==target){
                v1.push_back(i);
                v1.push_back(j);
                return v1;
            }
            else if (nums[i]+nums[j]>target){
                break;
            }

        }
    }
    return v1;
}*/

vector<int> twoSumBruteForce(const vector<int>& nums, int target){
    vector<int> v1;

    for (int i=0; i<size(nums);i++){
        int val = target - nums[i];

        for (int j = i+1; j < nums.size(); j++){

            if (nums[j] == val){
                v1.push_back(i);
                v1.push_back(j);
                return v1;
            }
        }
    }
    return v1;
}


vector<int> twoSumOptimal(const vector<int>& nums, int target){
    unordered_map<int, int> numbers;

    for (int i=0; i < nums.size(); i++){

        int complement = target - nums[i];

        if (numbers.find(complement) != numbers.end()) {
            return {numbers[complement], i};
        }

        numbers[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> indicesBruteForce = twoSumBruteForce(nums, target);
    cout << "Brute-Force-Solution: ["
         << indicesBruteForce[0]
         << ","
         << indicesBruteForce[1]
         << "]" << endl;

    vector<int> indicesOptimal = twoSumOptimal(nums, target);
    cout << "Optimal-Solution: ["
         << indicesOptimal[0]
         << ","
         << indicesOptimal[1]
         << "]" << endl;

    return 0;
}
