#include <iostream>

using namespace std;

//https://www.geeksforgeeks.org/find-last-digit-of-ab-for-large-numbers/



int main()
{
    int koncowki[10][4] = {
    {0,0,0,0},
    {1,1,1,1},
    {6,2,4,8},
    {1,3,9,7},
    {6,4,6,4},
    {5,5,5,5},
    {6,6,6,6},
    {1,7,9,3},
    {6,8,4,2},
    {1,9,1,9}
    };

    unsigned int przypadki;
    cin >> przypadki;

    if ((przypadki >= 1) && (przypadki <= 10))
        for (int i = 0; i < przypadki; i++)
        {
            int unsigned podstawa;
            int unsigned wykladnik;
            cin >> podstawa;
            cin >> wykladnik;

            cout << koncowki[podstawa % 10][wykladnik % 4] << endl; // znajdujemy cyfre jednosci podstawy i reszte z dzielenia
                                                              // wykladnika przez 4 która odpowiada liczbie jednosci danej
                                                              // podstawy
        }

    return 0;
}