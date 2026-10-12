#include "searching.h"

class BinarySearch : public Searching{
    public:
    // Suppose que v est déjà trié par ordre croissant

    int search(vector<int> v, int target) override {
        return searchRec(v, target, 0, (int)v.size() - 1);
    }

    private:
        int searchRec(const vector<int>& v, int target, int a, int b) {
            if (a>b) return -1; // zone de recherche vide

            int m = (a+b) / 2;
            numberComparisons++;
            if (v[m] == target) return m;
            
            //doit on aussi compter ces comparaisons ?
            numberComparisons++;
            if (v[m] > target) return searchRec(v, target, a, m - 1);
            return searchRec(v, target, m + 1, b);
        }
};
