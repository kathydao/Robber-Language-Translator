#include "Translator.h"
#include "Model.h"

#include <iostream>
#include <cstdlib>
#include <string> 

using namespace std;

Translator::Translator(){
    model = new Model();
}

Translator::~Translator(){
}

std::string Translator::Translate(std::string newString){
    //Declare consonants
    std::string consonants = "bcdfghjklmnpqrstvwxyz";
    std::string tranlated = "";
    //Loop through new string to begin translating
    for(int i = 0; i < newString.length(); i++){
        //Check for consonants 
        bool isSubstring = consonants.find(newString[i]) != std::string::npos;
        if(isSubstring){
            //Translate if it is a consonant
            tranlated += model->translateSingleConsonant(newString[i]);
        } else {
            //Append to string if otherwise
            tranlated += model->translateSingleVowel(newString[i]);
        }
    }
    return tranlated;
}

//The translated word is returned as a string
std::string Translator::translateEnglishWord(string singleEnglishWord){
    return Translate(singleEnglishWord);
}

//The translated sentence is returned as a string 
std::string Translator::translateEnglishSentence(string singleEnglishSentence){
    return Translate(singleEnglishSentence);
}