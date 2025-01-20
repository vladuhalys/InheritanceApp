#include "logger.h"

/**
 * @brief Logs a debug message.
 * @param message The message to log.
 */
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

/**
 * @brief Logs an info message.
 * @param message The message to log.
 */
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

/**
 * @brief Logs an error message.
 * @param message The message to log.
 */
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

/**
 * @brief Logs a warning message.
 * @param message The message to log.
 */
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

/**
 * @brief Logs a message with a specified color.
 * @param message The message to log.
 * @param color The color to use for the message.
 */
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