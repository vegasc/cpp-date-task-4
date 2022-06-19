//
//  Date.cpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#include <stdio.h>
#include "Date.hpp"

Date::Date(long int seconds) {
    this->seconds = seconds;
}

long int Date::getSeconds() {
    return this->seconds;
}
