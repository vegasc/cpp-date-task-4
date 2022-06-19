//
//  DateFormatter.hpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#ifndef DateFormatter_hpp
#define DateFormatter_hpp

#include <stdio.h>
#include "Date.hpp"
#include "DateFormatter/DateInfo.cpp"
#include "DateFormatter/DateFormatter+Macros.h"

class DateFormatter {
private:
    Date date;
    long int daysInDate();
    long int hoursInDate();
    long int minutesInDate();
    long int secondsInDate();
public:
    DateFormatter(Date date);
    DateInfo getFullInfo();
};

#endif /* DateFormatter_hpp */
