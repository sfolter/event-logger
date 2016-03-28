/* 
 * File:   SimpleFormatter.cpp
 * Author: Sfolter
 * 
 * Created on 14 Март 2016, 21:21
 */

#include "../headers/SimpleFormatter.h"

SimpleFormatter::SimpleFormatter() {
}



SimpleFormatter::~SimpleFormatter() {
}

std::string SimpleFormatter::format(std::string msg, ReportLevel lvl) {
    char buf[100];
    time_t timeNow = time(0);
    struct tm *now = localtime(&timeNow);
    std::ostringstream ss;
    
    ss << msg << " - " << lvl << " - ";
 
    strftime(buf, 100, "%d.%m.%y %H:%M:%S", now);
   
    ss << buf;
    ss << '\n';
    return ss.str();
    
}