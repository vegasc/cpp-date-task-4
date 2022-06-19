//
//  main.cpp
//  Date
//
//  Created by Aleksey on 19.06.2022.
//

#include <iostream>
#include "Date.hpp"
#include "DateFormatter.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Date date = Date(SECONDS_PER_DAY*3);

    DateFormatter dateFormatter = DateFormatter(date);
    DateInfo info = dateFormatter.getFullInfo();
    
    cout << info.days << " days, " << info.hours << " hours, " << info.minutes << " minutes, " << info.seconds << " seconds" << endl;
    
    return 0;
}
