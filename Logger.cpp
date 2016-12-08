#include "Logger.h"

Logger* Logger::_instance = 0;

Logger* Logger::Instance()
{
    if(_instance == 0){
        _instance = new Logger;
    }
    
    return _instance;
}

bool Logger::openLogfile(std::string _logFile)
{
    //some implementation
}