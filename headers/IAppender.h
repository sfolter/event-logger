/* 
 * File:   IAppender.h
 * Author: Sfolter
 *
 * Created on 14 Март 2016, 01:09
 */

#ifndef IAPPENDER_H
#define	IAPPENDER_H
#include "ReportLevel.h"

class IAppender {
public:
    virtual void append(std::string msg, ReportLevel lvl) = 0;
    friend std::ostream& operator<<(std::ostream& out, const ReportLevel& value);
    virtual ~IAppender() { }
};


#endif	/* IAPPENDER_H */

