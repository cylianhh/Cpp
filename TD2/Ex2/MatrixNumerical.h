#ifndef MATRIXNUMERICAL_H 
#define MATRIXNUMERICAL_H

#include <vector>
#include <iostream>
template <typename T>

class MatrixNumerical : public MatrixBase{
    private :
        std::vector<std::vector<T>> data;

    public :
        MatrixNumerical();
        void addElement(std::size_t row, std::size_t col, int val);
        int getElement(std::size_t row, std::size_t col) const;
        std::size_t getRows() const;
        std::size_t getCols() const;
        void display() const;
        T getDeterminant(const std::vector<std::vector<T>>& data);
};
