//
//  DateInfo.cpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#include <stdio.h>

struct DateInfo {
    long int days;
    long int hours;
    long int minutes;
    long int seconds;
    
    DateInfo(long int days, long int hours, long int minutes, long int seconds) {
        this->days = days;
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
};
