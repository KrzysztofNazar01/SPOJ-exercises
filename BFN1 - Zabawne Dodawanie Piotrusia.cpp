#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int getLengthOfInt(int n) {
    int len = 0;
    while (n > 0) {
        len++;
        n /= 10;
    }
    return len;
}

char* intToCharArray(int n) {
    int nDigits = getLengthOfInt(n);
    char* c = new char[nDigits];
    sprintf(c, "%ld", n);

    return c;
}
bool palindrom(int n) {
    bool pal = true;

    char* c = intToCharArray(n);
    int len = getLengthOfInt(n);
   // cout << "roz= " << len << endl;
    for (int i = 0; i < len; i++) {
        int lptr = i;
        int rptr = len - i - 1;

       // cout << " comp " << c[lptr] << " with " << c[rptr] << endl;

        if (c[lptr] != c[rptr])
            pal = false;
    }

    return pal;
}

int inv(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int addNormalAndInverse(int n) {
    int res = 0;

    //cout << " inv=" << inv(n) << endl;

    res = n + inv(n);

    return res;
}


int main() {
    int repet;
    cin >> repet;

    for (int i = 0; i < repet; i++) {
        int n;
        cin >> n;

        bool pal = false;
        int rep = 0;
        while (pal == false) {
            pal = palindrom(n);

            if (pal) {
               // cout << "TAK" << endl;
                cout << n << " " << rep << endl;
            }
            else {
                //cout << "NIE" << endl;
                n = addNormalAndInverse(n);
            }
            rep++;

            if (rep == 10) pal = true;
        }

    }

    return 0;
}

