#ifndef SEARCH_H 
#define SEARCH_H

#include <vector>
#include <iostream>

using namespace std;

class Searching
{

   protected :
      int numberComparisons;

   private:
      static int totalComparisons;
      static int totalSearch;
      static double averageComparisons; //double pour éviter arondi lors du calcul

   public :
      Searching();
      virtual int search(vector<int> element, int target)=0;
      void displaySearchResults(ostream& v, int res, int target);

};

#endif