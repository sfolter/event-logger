/* 
 * File:   Logger.cpp
 * Author: Sfolter
 * 
 * Created on 13 Март 2016, 23:03
 */

#include "Logger.h"




Logger::Logger(std::vector<IAppender*>& appenders) : appenders(appenders) {}



Logger::~Logger() {
}


void Logger::info(std::string msg) {
    log(msg, ReportLevel::Info);
}
void Logger::warning(std::string msg) {
    log(msg, ReportLevel::Warning);
}
void Logger::error(std::string msg) {
    log(msg, ReportLevel::Error);

}
void Logger::critical(std::string msg) {
    log(msg, ReportLevel::Critical);

}
void Logger::fatal(std::string msg) {
    log(msg, ReportLevel::Fatal);

}

void Logger::log(std::string msg, ReportLevel lvl) {
    
    //appender->append(msg, lvl);
    for(int counter = 0; counter < appenders.size(); counter++) {
        appenders[counter]->append(msg, lvl);
    }
    
}

