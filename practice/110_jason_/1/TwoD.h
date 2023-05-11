
#ifndef TWO_D
#define TWO_D

#include <iostream>

namespace TD
{
    class TwoD
    {
        public:
        // constructor
        TwoD();
        TwoD(int row, int col);

        void input();    

        void make_array(int row, int col); 

        void output();

        // operator overloading
        const TwoD operator = (TwoD& array);
        friend const TwoD operator + (TwoD& array1, TwoD& array2);

        // desctructor
        ~TwoD();

        private:
        int* *p;
        int r;
        int c;
    };
}

#endif
