/* 
 * File:   ConsoleAppender.cpp
 * Author: Sfolter
 * 
 * Created on 14 Март 2016, 18:41
 */

#include "ConsoleAppender.h"

ConsoleAppender::ConsoleAppender(IFormatter *formatter) : Appender(formatter) { }



void ConsoleAppender::append(std::string msg, ReportLevel lvl) {
    
    std::cout << formatter->format(msg, lvl);
}