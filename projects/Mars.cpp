#include <iostream>

//Module 2, Project 1
//This project calculates the time to communicate to Mars assuming the speed of communication and distance
//Author: eggermarc@gmail.com

int main() {
    int closest_to_mars, speed_mps;
    double time_to_mars;

    closest_to_mars = 34000000;
    speed_mps = 186000;

    time_to_mars = (double) closest_to_mars / speed_mps;

    std::cout << "Seconds to communicate to Mars are: " << time_to_mars << "s";
    std::cout << "\nMinutes to communicate to Mars are: " << time_to_mars / 60 << std::endl;
    return 0;
}