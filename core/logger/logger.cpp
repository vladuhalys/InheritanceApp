#include "logger.h"

void Logger::debug(string message)
{
    if (Logger::is_print_logs)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, _debug);
        cout << "DEBUG: " << message << endl;
        SetConsoleTextAttribute(hConsole, _default);
    }
}

void Logger::info(string message)
{
    if (Logger::is_print_logs)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, _info);
        cout << "INFO: " << message << endl;
        SetConsoleTextAttribute(hConsole, _default);
    }
}
 
void Logger::error(string message)
{
    if (Logger::is_print_logs)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, _error);
        cout << "ERROR: " << message << endl;
        SetConsoleTextAttribute(hConsole, _default);
    }
}

void Logger::warning(string message)
{
    if (Logger::is_print_logs)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, _warning);
        cout << "WARNING: " << message << endl;
        SetConsoleTextAttribute(hConsole, _default);
    }
}

void Logger::log(string message, Colors color)
{
    if (Logger::is_print_logs)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, color);
        cout << "LOG: " << message << endl;
        SetConsoleTextAttribute(hConsole, _default);
    }
}