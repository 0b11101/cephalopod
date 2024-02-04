/**
 * @file des.cpp
 * @brief Implementation of the DES encryption algorithm.
 * 
 * This file contains the implementation of the Data Encryption Standard (DES) algorithm.
 * It includes functions for key generation, encryption, and decryption according to the
 * FIPS PUB 46-3 specification. The implementation is intended for educational purposes
 * and demonstrates the DES algorithm's core principles and operations.
 * 
 * @author Jakob Loverde
 * @date February 1, 2024
 * 
 * @note This implementation is part of the "Cephalopod" project, a collection of cryptographic
 * algorithms implemented for learning and demonstration purposes.
 */
#include "des.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

namespace des 
{
    std::vector<char> encrypt(const std::vector<char>& data, bool text)
    {
        for (char c : data) cout << c;
        return{};

    }


    std::vector<char> data_to_binary()
    {
       return {};
    }
}
