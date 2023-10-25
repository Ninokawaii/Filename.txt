#include <iostream>
#include <fstream>
using namespace std;

int main(){    
    string line;    
    ifstream MyFile("example.txt");    
    ofstream WriteFile("FileName.txt");

    while(getline(MyFile, line)){        
    WriteFile << line << endl; 
    }    
    
    MyFile.close();    
    WriteFile.close();

    return 0;
}