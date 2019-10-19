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

        cout << "Just making a change to test workflow...here." << endl;
        cout << "Could theoretically do continuous building with this by monitoring .o files for changes..." << endl;
        cout << "It's kind of fun. Then python becomes my command line, of sorts." << endl;
        cout << "Writing to " << _filename.c_str() << endl;
        
        file.open(_filename.c_str(), ios_base::out);

        file << message << endl;

        file.close();
    }
    
} // namespace Lab