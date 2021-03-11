//
//  logger.hpp
//  home
//
//  Created by Lukas Fridl on 10.03.2021.
//

#ifndef logger_hpp
#define logger_hpp

#include <stdio.h>

class Logger
{
public:
    Logger();
    static Logger GetInstance();
    ~Logger();
private:
     static Logger logger;
};

#endif /* logger_hpp */
