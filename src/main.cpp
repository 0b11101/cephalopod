/* Author: Jakob Loverde
 * About: This is part of a series of challenges 
 *        that I'm giving myself to learn more about encryption.
 * Rules: I am not allowed to use any other public libraries, psuedo code,
 *        help from AI. This is all going to come from my noggin.
 *
 * Permitted References:
 *     FIPS PUB 46-3 
 *     The C++ Programming Language Fourth Edition 
 * 
 * ChatGPT will be used to check formatting and style
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
    // cout << "Accepted argument(s): " << argc << endl;
    // puts("This is a opensource program inspired by OpenSSL.");

    if (argc < 2)
        puts("Type \"cephlapod --help\" for help.");

    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];
        if (arg == "-h" || "--help")
        {
            puts("You ain't getting no help yet!");
        }
    }


    return 0;
}


