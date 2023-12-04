#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <string>
#include "Model.h"

class Translator{
    public:
        Translator();
        ~Translator();
        std::string translateEnglishWord(std::string singleEnglishWord);
        std::string translateEnglishSentence(std::string singleEnglishSentence);
        
    private:
        //Additional method to combine the two translation methods for both word and sentence because they are the same and therefore redundant
        std::string Translate(std::string newString);
        //Pointer to Model class to implement its methods
        Model* model;
        std::string consonants;
};

#endif