#include "FileProcessor.h"
#include "Translator.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

FileProcessor::FileProcessor(){
    translator = new Translator();
}

FileProcessor::~FileProcessor(){
}

void FileProcessor::processFile(std::string input, std::string output){
    std::string translated = "";
    std::fstream inputFile;
    std::string currentLine;
    
    //Open input file
    inputFile.open(input, ios::in);
    //Loop through each line to translate
    for(std::string line; getline(inputFile, line);){
        currentLine += line + "\n";
        translated += translator->translateEnglishSentence(line);
    }
    inputFile.close();

    //Open output file
    std::fstream outputFile;
    outputFile.open(output, ios::out);
    //Append the translated content then close 
    outputFile << translated;
    outputFile.close();
    
    //Create a new html file
    ofstream htmlFile("translation.html");
    htmlFile << "<!DOCTYPE html>\n<html>\n<head>\n<body>\n<p><b>";
    htmlFile << currentLine;
    htmlFile << "</b></p>\n<break><p><i>";
    htmlFile << translated;
    htmlFile << "</i></p>\n</body>";
    htmlFile.close();
}