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
#include <vector>
#include <fstream>
#include "des/des.h"

using namespace std;

int main(int argc, char *argv[])
{
    // cout << "Accepted argument(s): " << argc << endl;
    // puts("This is a opensource program inspired by OpenSSL.");
    
    if (argc == 1)
        puts("Type \"cephlapod --help\" for help.");

    string arg = argv[1];
    if (arg == "-h" || arg == "--help")
    {
        cout << arg << "\n";
        puts("You ain't getting no help yet!");
    } else if (arg == "DES" || arg == "des")
    {
        if (argc > 3) 
        {
            string flag = argv[2];
            if (flag == "-t" || arg == "--text")
            {
                string text = argv[3];
                auto data = std::vector<char>(text.begin(), text.end());
                des::encrypt(data, true);
            }
        }
        // Reading from a file
        string record = argv[2];
        std::ifstream file(record);
        if (!file.is_open()) {
            std::cerr << "Failed to open " << record << std::endl;
            return 1;
        }

        // Get the size of the file
        file.seekg(0, std::ios::end);
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);

        // Read the file into a buffer
        std::vector<char> buffer(size);
        if (file.read(buffer.data(), size)) {
            // Process the buffer
            std::cout << "File read successfully. Size: " << size << " bytes." << std::endl;
            des::encrypt(buffer, false);
        } else {
            std::cerr << "Failed to read the file." << std::endl;
        }



        file.close();
    }
    
    return 0;
}


