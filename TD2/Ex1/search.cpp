#include <iostream>
#include "searching.h"

int Searching::totalComparisons = 0;
int Searching::totalSearch = 0;
double Searching::averageComparisons = 0;

Searching::Searching()
{
    numberComparisons = 0;
}

void Searching::displaySearchResults(ostream& v, int res, int target)
{
    if (res == -1)
    {
        v << target << " pas trouvé" << endl;
    }
    else
    {
        v << target << " trouvé à l'index " << res << endl;
    }

    v << "Nombre de comparaisons: " << numberComparisons << endl;

    totalComparisons += numberComparisons;
    totalSearch++;

    averageComparisons = totalComparisons / totalSearch;

    v << "Total des comparaisons: " << totalComparisons << endl;

    v << "Total des recherches: " << totalSearch << endl;

    v << "Moyenne des comparaisons: "<< averageComparisons << endl;
}