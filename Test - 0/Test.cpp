#include <iostream>

using namespace std;

class Building {
private:
    string name;
    int year;
public:

    Building(string name, int year) {
        setBuild(name, year);
    }
    
    ~Building() {
        cout << "delete object" << endl;
    }

    void setBuild(string name, int year) {
        this->name = name;
        this->year = year;
    }

    string getName() {
        return name;
    }

    int getYear() {
        return year;
    }
    

};

int main() {
    Building build("school", 2010);
    cout << build.getName() << '-' << build.getYear() << endl;

    return 0;
}