/* 
 * File:   SimpleFormatter.h
 * Author: Sfolter
 *
 * Created on 14 Март 2016, 21:21
 */

#ifndef SIMPLEFORMATTER_H
#define	SIMPLEFORMATTER_H

#include "IFormatter.h"

class SimpleFormatter : public IFormatter {
public:
    SimpleFormatter();
    virtual ~SimpleFormatter();

    virtual std::string format(std::string msg, ReportLevel lvl);

private:

};

#endif	/* SIMPLEFORMATTER_H */

