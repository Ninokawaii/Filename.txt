#include <iostream>
#include <fstream>
using namespace std;

int main(){    
    string name;    
    int age;    
    cout << "Please input your name: ";    
    cin>>name;    
    cout << "Please input your age: ";    
    cin >> age; 

    ofstream MyFile("information.txt");    
    MyFile << "My name is: "<< name << endl;    
    MyFile << "I'm "<< age << " years old"<< endl;    
    MyFile.close(); 

    string line;
    ifstream RFile("information.txt");   
    while(getline(RFile, line)){        
        cout << line << endl;    
    }
    RFile.close();    
    return 0;
    }