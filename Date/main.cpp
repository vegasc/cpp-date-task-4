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
    
    int long seconds = 0;
    cout << "seconds: " << endl;
    cin >> seconds;
    
    Date date = Date(seconds);

    DateFormatter dateFormatter = DateFormatter(date);
    DateInfo info = dateFormatter.getFullInfo();
    
    cout << info.days << " days, " << info.hours << " hours, " << info.minutes << " minutes, " << info.seconds << " seconds" << endl;
    
    return 0;
}
