//
//  DateDormatter.cpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#include <stdio.h>
#include <iostream>
#include "DateFormatter.hpp"

using namespace std;

DateFormatter::DateFormatter(Date date) : date(SECONDS_PER_DAY) {
    this->date = date;
}

DateInfo DateFormatter::getFullInfo() {
    const long int days = daysInDate();
    const long int hours = hoursInDate();
    const long int minutes = minutesInDate();
    const long int seconds = secondsInDate();
    return  DateInfo(days,hours,minutes,seconds);
}

long DateFormatter::daysInDate() {
    if (date.getSeconds() == SECONDS_PER_DAY) {
        return  1;
    }
    if (date.getSeconds() <= (SECONDS_PER_DAY - 1)) {
        return 0;
    }
    return date.getSeconds() / SECONDS_PER_DAY;
}

long DateFormatter::hoursInDate() {
    if (date.getSeconds() == HOURS_PER_DAY) {
        return 1;
    }
    if (date.getSeconds() <= (HOURS_PER_DAY - 1)) {
        return 0;
    }
    return daysInDate() * HOURS_PER_DAY;
}

long DateFormatter::minutesInDate() {
    if (date.getSeconds() == MINUTES_PER_DAY) {
        return 1;
    }
    if (date.getSeconds() <= (MINUTES_PER_DAY - 1)) {
        return  0;
    }
    return  daysInDate() * MINUTES_PER_DAY;
}

long DateFormatter::secondsInDate() {
    if (date.getSeconds() == SECONDS_PER_DAY) {
        return 1;
    }
    if (date.getSeconds() <= (SECONDS_PER_DAY - 1)) {
        return 0;
    }
    return daysInDate() * SECONDS_PER_DAY;
}
