/* 
 * File:   Appender.h
 * Author: Sfolter
 *
 * Created on 16 Март 2016, 01:25
 */

#ifndef APPENDER_H
#define	APPENDER_H

#include "IAppender.h"
#include "IFormatter.h"

class Appender : public IAppender {
protected:
    
    IFormatter *formatter;
    virtual void append(std::string msg, ReportLevel lvl) = 0;
    Appender(IFormatter *formatter) : formatter(formatter) {}
    
};


#endif	/* APPENDER_H */

