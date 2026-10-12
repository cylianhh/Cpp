#include "searching.h"

class Linearsearch : public Searching{
    public :
    int search(vector<int> v, int target) override {
        numberComparisons = 0;
        for (int i=0; i<v.size(); i++){
            numberComparisons++;
            if (v[i] == target) return i;       
        }
        
        return -1;
    };
}