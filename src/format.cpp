#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    
    std::string hours = seconds / 3600 > 9 ? std::to_string(seconds / 3600) : "0" + std::to_string(seconds / 3600);
    std::string minutes = (seconds / 60) % 60 > 9 ? std::to_string((seconds / 60) % 60) : "0" + std::to_string((seconds / 60) % 60);
    std::string secs = seconds % 60 > 9 ? std::to_string(seconds % 60) : "0" + std::to_string(seconds % 60);

    return hours + ":" + minutes + ":" + secs; 
}