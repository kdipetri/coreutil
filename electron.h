#ifndef electron_h
#define electron_h

#include <vector>
#include <iostream>

#include "ElectronSelections.h"
#include "VVVSelections.h"
#include "Base.h"

using namespace std;

namespace CoreUtil
{
    class electron
    {

        public:

            std::vector<int> index;

            electron() { setup(); }
            ~electron() {}

            void setup();
            void process();
            bool pass(int i);

    };
}

#endif