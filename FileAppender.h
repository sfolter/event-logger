/* 
 * File:   FileAppender.h
 * Author: Sfolter
 *
 * Created on 15 Март 2016, 02:18
 */

#ifndef FILEAPPENDER_H
#define	FILEAPPENDER_H

#include "IAppender.h"
#include "IFormatter.h"
#include "Appender.h"
#include <fstream>

class FileAppender : public Appender {
public:
    void append(std::string msg, ReportLevel lvl);
    FileAppender(IFormatter *formatter, const char *filename);
    virtual ~FileAppender();
private:
    std::ofstream logFile;
    const char *filename;
};

#endif	/* FILEAPPENDER_H */

