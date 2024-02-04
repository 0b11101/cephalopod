#ifndef DES_H 
#define DES_H

#include <vector>

namespace des {
    std::vector<char> encrypt(const std::vector<char>& data, bool text);

    std::vector<char> data_to_binary();
}
#endif
