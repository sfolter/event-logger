/* 
 * File:   FileAppender.cpp
 * Author: Sfolter
 * 
 * Created on 15 Март 2016, 02:18
 */

#include "../headers/FileAppender.h"

FileAppender::FileAppender(IFormatter *formatter, const char *filename) : Appender(formatter), filename(filename) {
    logFile.open(filename, std::ofstream::out | std::ofstream::app);

}
void FileAppender::append(std::string msg, ReportLevel lvl) {
    
    logFile << formatter->format(msg, lvl);
    
}
FileAppender::~FileAppender() {
    logFile.close();
}




