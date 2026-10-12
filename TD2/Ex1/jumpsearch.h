#include "searching.h"

class JumpSearch : public Searching{
    public :
    int search(vector<int> v, int target) override {
        numberComparisons = 0;

        // Suppose que v est déjà trié par ordre croissant
        int size = v.size();
        if (size == 0) return -1;

        int n = sqrt(v.size());
        int i;

        for (i=0; i < v.size(); i+=n) {
            numberComparisons++;
            if (v[i]==target) return i;

            numberComparisons++;
            if (v[i]>target){
                if (i == 0) return -1; //pour éviter que j=-1
                for (int j=i-1; j>i-n; j--){
                    numberComparisons++;
                    if (v[j]==target) return j;
                }

                return -1;
            }
            
        }

        // Dernier bloc : on remonte de la fin jusqu'au dernier saut
        for (int j = v.size() - 1; j > i - n; j--) {
            numberComparisons++;
            if (v[j] == target) return j;
        } 

        return -1;
    }
};