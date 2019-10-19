#ifndef __log_h
#define __log_h

namespace Lab 
{
    class Log
    {
    public:
        Log();
        ~Log();

        void Write(std::string message);

    private:
        std::string _filename;
    };
}

#endif // __log_h
