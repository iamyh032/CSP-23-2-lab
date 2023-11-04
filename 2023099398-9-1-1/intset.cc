#include "intset.h"
#include <iostream>
#include <string>
#include <vector>

void IntegerSet::AddNumber(int num){
    int finding = -1;
    for(int i=0; i<numbers_.size(); i++){
        if(numbers_[i]==num){
            finding = i;
        }
    }
    if(finding==-1){
        numbers_.push_back(num);
    }
    for(int i=0; i<numbers_.size(); i++){
        std::cout << numbers_[i] << " ";
    }
    std::cout << std::endl;
} 

void IntegerSet::DeleteNumber(int num){
    int finding = -1;
    for(int i=0; i<numbers_.size(); i++){
        if(numbers_[i]==num){
            finding = i;
        }
    }
    if(finding!=-1){
        numbers_.erase(numbers_.begin()+finding);
    }
    for(int i=0; i<numbers_.size(); i++){
        std::cout << numbers_[i] << " ";
    }
    std::cout << std::endl;
}

int IntegerSet::GetItem(int pos){
    if(pos>numbers_.size()){
        return -1;
    }
    else{
        return numbers_[pos];
    }
}

std::vector<int> IntegerSet::GetAll(){
    std::vector<int> numbers = numbers_;
    return numbers;
}
