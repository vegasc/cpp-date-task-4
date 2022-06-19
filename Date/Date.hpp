//
//  Date.hpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

class Date {
private:
    long int seconds;
public:
    Date(long int seconds);
    long getSeconds();
};

#endif /* Date_hpp */
