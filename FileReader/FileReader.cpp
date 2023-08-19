#include <iostream>
#include <fstream>

using namespace std;

void readFile(string &fileName) {

    ifstream file(fileName);
    if (file.is_open()){
        string line;
        while ( getline (file, line) ){
         cout << line << '\n';
        }
        cout << "close, push any button: "; cin >> line;
        file.close();
    }
    
}

void saveFile(string &fileName, string &fileInfo) {
    ofstream file(fileName, ios_base::out);
    if(file.is_open()){
        file << fileInfo;
        file.close();
    }
}

int main() {
    char readOrSave; cout << "r/s: "; cin >> readOrSave;
    string fileName; cout << "file name: "; cin >> fileName;
    if (readOrSave == 'r') readFile(fileName);
    else if (readOrSave == 's'){ 
        string fileInfo; cout << "file info: "; cin >> fileInfo;
        saveFile(fileName, fileInfo);
    }
    
    return 0;
}