#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
using namespace std;

bool checkIfPrime(int value) {
    bool res = true;
    if (value == 1) {
        res = false;
    }
    else {
        for (int j = 2; j < value; j++) 
            if (value != j && value % j == 0) 
                res = false;
    }
    return res;
}

int main() {
    int size;

    cin >> size;

    int* tab = new int[size];


    for (int i = 0; i < size; i++)
        cin >> tab[i];

    for (int i = 0; i < size; i++) {
        bool prime = checkIfPrime(tab[i]);
                
        if (prime)
            cout << "TAK\n";
        else
            cout << "NIE\n";
           
    }

    delete[] tab;

    return 0;
}

