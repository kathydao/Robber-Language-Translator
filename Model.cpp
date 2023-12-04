#include "Model.h"

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

Model::Model(){
}

Model::~Model(){
}

string Model::translateSingleConsonant(char c){
    //Change from char to string then translate to robber language
    std::string consonant(1, c);
    std::string translated = consonant + "o" + consonant;
    return translated;
};


string Model::translateSingleVowel(char v){
    //Keep as original input changed into a string 
    std::string translated = std::string(1, v);
    return translated;
}