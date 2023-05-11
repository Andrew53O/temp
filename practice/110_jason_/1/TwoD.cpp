

#include <iostream>
using namespace std;

#include "TwoD.h"


namespace TD
{
    TwoD::TwoD()
    {
        r = 0;
        c = 0;
    }
    
    TwoD::TwoD(int row, int col)
    {
        r = row;
        c = col;
    }

    void  TwoD::input()
    {
        int ro, co;
        cout << "Enter the row and column dimensions of the array" << endl;
        cin >> ro >> co;

        make_array(ro, co);

    }

    void TwoD::make_array(int row, int col)
    {
        // create a pointer that point to a pointer
        p = new int*[row];

        for (int i = 0; i < row; i++)
        {
            // every pointer array make a array of int
            p[i] = new int[col];

        }

        // prompt input
        cout << "Enter " << row << " rows of " << col << " integers each" << endl;


        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cin >> p[i][j];
            }
        }


        
    }

    void TwoD::output()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << p[i][j];
            }
            cout << endl;
        }

    }


    // member function overload
    const TwoD TwoD::operator =(TwoD& array)
    {
         
    }

    // friend overload
    const TwoD operator + (TwoD& array1, TwoD& array2)
    {
        int row = array1.r;
        int col = array1.c;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                array1.p[i][j] += array2.p[i][j];
            }
        }
        return array1;
    }

    // desctructor
    TwoD::~TwoD()
    {
        for (int i = 0; i < r; i++)
        {
            delete[] p[i];
        }

        delete [] p;
    }


}