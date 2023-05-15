#include <iostream>
#include <vector>
#include <cassert>


int main() {
    std::vector<std::vector<int>> matrixOne{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    std::vector<std::vector<int>> matrixTwo{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    std::cout<<"Input matrix#1: ";
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            std::cin>>matrixOne[i][j];
            assert(!std::cin.fail());
        }
    }

    std::cout<<"Input matrix#2: ";
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            std::cin>>matrixTwo[i][j];
            assert(!std::cin.fail());
        }
    }

    bool equal=true;

    for (int i=0;i<4 && equal;i++) {
        for (int j=0;j<4 && equal;j++) {
            if (matrixOne[i][j]!=matrixTwo[i][j]) {
                equal=false;
            }
        }
    }

    std::cout<<std::endl;

    if (equal) {
        for (int i=0;i<4;i++) {
            for (int j=0;j<4;j++) {
                if (i!=j) {
                    matrixOne[i][j]=0;
                }
                std::cout<<matrixOne[i][j];
            }
            std::cout<<std::endl;
        }
    } else {
        std::cout<<"not equal";
    }
    






}