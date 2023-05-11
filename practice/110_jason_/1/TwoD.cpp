

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
        r = rol;
        c = col;
    }

    void  TwoD::input()
    {
        int ro, co
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
        cout << "Enter " << rol << " rows of " << col << " integers each" << endl;


        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < rol; j++)
            {
                cin >> p[i][j];
            }
        }


        
    }

    void output()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << p[i][j];
            }
            cout << endl;
        }

    }



    const TwoD operator = (TwoD& array1, TwoD& array2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                array1[i][j] = array2[i][j];
            }
        }
        return array1;
    }
    const TwoD operator + (TwoD& array1, TwoD& array2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                array1[i][j] += array2[i][j];
            }
        }
        return array1;
    }

    // desctructor
    TwoD::~TwoD()
    {
        for (int i = 0; i < row; i++)
        {
            delete[] p[i];
        }

        delete [] p;
    }


}