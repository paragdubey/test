#include <iostream>

class Test {
    public:
        Test (int nn) : n(nn) {}
        void Print ()
        {
            std::cout << "n = " << n << std::endl;
        } 
    private:
        int n;
};

