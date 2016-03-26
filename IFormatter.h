/* 
 * File:   IFormatter.h
 * Author: Sfolter
 *
 * Created on 14 Март 2016, 21:16
 */

#ifndef IFORMATTER_H
#define	IFORMATTER_H

#include "ReportLevel.h"
#include <ctime>
#include <sstream>

inline std::ostream& operator<<(std::ostream& out, const ReportLevel& value){
    static std::map<ReportLevel, std::string> strings;
    if (strings.size() == 0){
#define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(Info);     
        INSERT_ELEMENT(Warning);     
        INSERT_ELEMENT(Error);             
        INSERT_ELEMENT(Critical);             
        INSERT_ELEMENT(Fatal);             
#undef INSERT_ELEMENT
    }  
    return out << strings[value];
}

class IFormatter {
public:
    virtual std::string format(std::string msg, ReportLevel lvl) = 0;
    friend std::ostream& operator<<(std::ostream& out, const ReportLevel& value);
    virtual ~IFormatter() { }
};

#endif	/* IFORMATTER_H */

