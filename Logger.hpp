#include <string>

class Logger
{
public:
     static Logger* Instance(); //returns a pointer to the static instance of the class
     bool openLogFile(std::string logFile);
     void writeToLogFile();
     bool closeLogFile();
 
private:
    Logger(){};
    Logger(Logger const&){};
    Logger& operator=(Logger const&){};
    static Logger* _instance;
    
};