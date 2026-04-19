#include <iostream>

#include "header1.hpp"


int main(int argc, char *argv[])
{
    using namespace std;

    cout << "Program is invoked as:" << endl;
    if( argv[0] ){ cout << argv[0]; }
    for( int i{1}; i < argc; ++i ){ cout << " " << argv[i]; }
    cout << endl;

    return 0;  // Optional
}
