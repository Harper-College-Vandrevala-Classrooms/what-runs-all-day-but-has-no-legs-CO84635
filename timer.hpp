#ifndef TIMER_H
#define TIMER_H
#include <ctime>

class Timer {
private:
    long long elapsed_time = 0;
    bool is_recording = false;
    long long starting_time = 0;

public:

    void get_the_system_time(){
        time_t now = time(nullptr);
        int seconds = now % 60;
        int minutes = (now / 60) % 60;
        int hours = (now / 3600) % 24 - 6; // Central Standard Time 

        if (hours < 0) {
            hours += 24;
        }

        std::string am_or_pm = (hours >= 12) ? "PM" : "AM";

        if (hours > 12) {
            hours -= 12;
        } else if (hours == 0) {
            hours = 12;
        }

        std::cout << "Current time: " << hours << ":" << minutes << ":" << seconds << " " << am_or_pm << std::endl;
    }

    void start() {
        if (!is_recording){
            is_recording = true;
            starting_time = std::time(nullptr);
        }
    }

    void stop(){
        if (is_recording) {
            long long ending_time = std::time(nullptr);
            elapsed_time += ending_time - starting_time;
            is_recording = false;
        }
    }

    void wait_for_a_few_seconds(int seconds){
        long long end_time = std::time(nullptr) + seconds;
        while(std::time(nullptr) < end_time) {

        }
    }

    int elapsed(){
        if (is_recording){
            return static_cast<int>(elapsed_time + (std::time(nullptr) - starting_time));
        }
        return static_cast<int>(elapsed_time);
    }

};

#endif // TIMER_H