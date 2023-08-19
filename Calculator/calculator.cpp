#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    float num_1;
    char math;
    float num_2;

    cout << "number: "; cin >> num_1;
    cout << "charset: "; cin >> math;
    cout << "number: "; cin >> num_2;
    
    switch(math) {
        case '-': cout << "result is: " << num_1 - num_2 << endl;
        break;
        
        case '+': cout << "result is: " << num_1 + num_2 << endl; 
        break;
        
        case '*': cout << "result is: " << num_1 * num_2 << endl; 
        break;

        case '/': cout << "result is: " << num_1 / num_2 << endl; 
        break;

        default: cout << "error" << endl;
    }
    
    return 0;
}