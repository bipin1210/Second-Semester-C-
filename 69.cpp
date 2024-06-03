#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
   ifstream sourceFile("source.txt");
    if (!sourceFile.is_open()) {
    cout<< "Error opening the source file!" <<endl;
        return 1; 
    }

   ofstream destFile("destination.txt");

    if (!destFile.is_open()) {
    cout<< "Error opening the destination file!" <<endl;
        return 1;
    }

   string line;

    while (std::getline(sourceFile, line)) {
        destFile << line <<endl;
    }

    sourceFile.close();
    destFile.close();

 cout<< "File copied successfully!" <<endl;

    return 0;
}
