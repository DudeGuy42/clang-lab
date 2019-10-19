#include <iostream>

#include "log.h"

int main(int argc, char *argv[])
{
    using namespace std;
    using namespace Lab;

    Log log;

    log.Write("Hello Log");
    
    return 0;
}