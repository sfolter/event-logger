/* 
 * File:   Logger.h
 * Author: Sfolter
 *
 * Created on 13 Март 2016, 23:03
 */

#ifndef LOGGER_H
#define	LOGGER_H
#include <iostream>
#include "ReportLevel.h"
#include "IAppender.h"
#include <vector>

class Logger {
public:
    Logger(std::vector<IAppender*>& appenders);
    virtual ~Logger();
    void info(std::string msg);
    void warning(std::string msg);
    void error(std::string msg);
    void critical(std::string msg);
    void fatal(std::string msg);
private:
    void log(std::string msg, ReportLevel lvl);
    std::vector<IAppender*> appenders;
};

#endif	/* LOGGER_H */

