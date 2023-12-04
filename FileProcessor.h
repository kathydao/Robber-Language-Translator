#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <string>
#include "Translator.h"
#include "Model.h"

class FileProcessor{
    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(std::string input, std::string output);

    private:
        //Pointer to Translator class to implement its method 
        Translator* translator;
        
};

#endif