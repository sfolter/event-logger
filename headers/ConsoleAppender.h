/* 
 * File:   ConsoleAppender.h
 * Author: Sfolter
 *
 * Created on 14 Март 2016, 18:41
 */

#ifndef CONSOLEAPPENDER_H
#define	CONSOLEAPPENDER_H

#include "../headers/IAppender.h"
#include "../headers/IFormatter.h"
#include "../headers/Appender.h"

class ConsoleAppender : public Appender {
public:
    ConsoleAppender(IFormatter *formatter);
    virtual ~ConsoleAppender() { }

    virtual void append(std::string msg, ReportLevel lvl);

};

#endif	/* CONSOLEAPPENDER_H */

