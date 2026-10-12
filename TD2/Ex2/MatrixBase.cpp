#include "MatrixBase.h"
#include "MatrixNumerical.h"
#include <cmath>

MatrixBase::MatrixBase(){};

void MatrixBase::addElement(std::size_t row, std::size_t col, int val) {
    data.at(row).at(col) = val;
}

int MatrixBase::getElement(std::size_t row, std::size_t col) const{
    return data.at(row).at(col);
}

std::size_t MatrixBase::getRows() const{
    return rows;
}

std::size_t MatrixBase::getCols() const{
    return cols;
}

void MatrixBase::display() const{
    for (int i=0; i< rows; i++){
        for (int j=0; j<cols; j++){
            std::cout << data[i][j] <<" ";
        }
        std::cout << '\n';
    }
}

T MatrixBase::getDeterminant(const std::vector<std::vector<T>>& data){
    if (data.empty()){
        std::cout << "matrice vide";
        return -1;
    }

    std::size_t rows = data.size();
    std::size_t cols = data[0].size();
    T determinant = 0;

    if (rows!=cols){
        std::cout << "matrice non carrée";
        return -1;
    }

    if (rows==1){
        return data[0][0];
    }

    if (rows==2){
        return data[0][0]*data[1][1]-data[0][1]*data[1][0];
    }

    for (std::size_t j = 0; j < cols; j++) {
        
        //creation de new_data utile pour la recursivite
        std::vector<std::vector<T>> new_data;

        for (std::size_t i = 1; i < rows; i++) {
            std::vector<T> new_row;

            for (std::size_t k = 0; k < cols; k++) {
                if (k != j) {
                    new_row.push_back(data[i][k]);
                }
            }

            new_data.push_back(new_row);
        }
    
        determinant+= pow(-1,j)*data[0][j]*getDeterminant(new_data);
    }

    return determinant;   
}