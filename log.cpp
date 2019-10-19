#include <iostream>
#include <fstream>

#include "log.h"

namespace Lab
{
    Log::Log()
    {
        _filename = "log.txt";
    }

    Log::~Log()
    {
    }

    void Log::Write(std::string message)
    {
        using namespace std;
        fstream file;

        cout << "Writing to " << _filename.c_str() << endl;
        
        file.open(_filename.c_str(), ios_base::out);

        file << message << endl;

        file.close();
    }
    
} // namespace Lab