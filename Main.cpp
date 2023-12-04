#include "Main.h"
#include "FileProcessor.h"
#include "Model.h"
#include "Translator.h"

using namespace std;

int main(int argc, char** argv){
    FileProcessor fp = FileProcessor();
    fp.processFile(argv[1], argv[2]);

    return 0;
}