#include <iostream>
#include <fstream>
using namespace std;

int main(){    
    ofstream MyFile("example.txt");    
    MyFile << "My name is Test\n";    
    MyFile << "I'm 45 years old";    
    MyFile.close();
    return 0;
}
