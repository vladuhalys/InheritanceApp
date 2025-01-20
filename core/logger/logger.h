#ifndef LOGGER_H
#define LOGGER_H

#include "../../library.h"

/**
 * @enum Colors
 * @brief Enum representing various color codes for logging.
 */
enum Colors
{
    Default = 7,      ///< Default color
    Blue = 1,         ///< Blue color
    Green = 2,        ///< Green color
    Cyan = 3,         ///< Cyan color
    Red = 4,          ///< Red color
    Pink = 5,         ///< Pink color
    Yellow = 6,       ///< Yellow color
    White = 7,        ///< White color
    BrightBlue = 9,   ///< Bright blue color
    BrightGreen = 10, ///< Bright green color
    BrightCyan = 11,  ///< Bright cyan color
    BrightRed = 12,   ///< Bright red color
    BrightPink = 13,  ///< Bright pink color
    BrightYellow = 14,///< Bright yellow color
    BrightWhite = 15  ///< Bright white color
};

/**
 * @class Logger
 * @brief A class for logging messages with different severity levels and colors.
 */
class Logger
{
public:
    static bool is_print_logs; ///< Flag to enable or disable logging

    static const unsigned short _debug = 10;    ///< Debug level
    static const unsigned short _info = 11;     ///< Info level
    static const unsigned short _error = 12;    ///< Error level
    static const unsigned short _warning = 14;  ///< Warning level
    static const unsigned short _default = 7;   ///< Default log level

    /**
     * @brief Logs a debug message.
     * @param message The message to log.
     */
    static void debug(std::string message);

    /**
     * @brief Logs an info message.
     * @param message The message to log.
     */
    static void info(std::string message);

    /**
     * @brief Logs an error message.
     * @param message The message to log.
     */
    static void error(std::string message);

    /**
     * @brief Logs a warning message.
     * @param message The message to log.
     */
    static void warning(std::string message);

    /**
     * @brief Logs a message with a specified color.
     * @param message The message to log.
     * @param color The color to use for the message.
     */
    static void log(std::string message, Colors color);
};

#endif