#ifndef MATRIXBASE_H 
#define MATRIXBASE_H

#include <vector>
#include <iostream>

class MatrixBase{
    private :
        std::vector<std::vector<int>> data;
        std::size_t rows, cols;
    
    public :
        MatrixBase();
        void addElement(std::size_t row, std::size_t col, int val);
        int getElement(std::size_t row, std::size_t col) const;
        std::size_t getRows() const;
        std::size_t getCols() const;
        void display() const;
};
