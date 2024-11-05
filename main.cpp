#include <ctime>
#include <cassert>
#include <iostream>
#include "timer.hpp"

using namespace std;

int main() {
    // Test one - 1 second
    Timer timer1;
    timer1.get_the_system_time();
    timer1.start();
    int wait_time1 = 1;
    timer1.wait_for_a_few_seconds(wait_time1);
    timer1.stop();
    timer1.get_the_system_time();
    int elapsed_time1 = timer1.elapsed();
    cout << "Elapsed time: " << elapsed_time1 << " s" << endl;
    assert(elapsed_time1 >= wait_time1 && elapsed_time1 <= wait_time1 + 1); // Allowing for slight timing inaccuracies

    // Test two - 5 seconds
    Timer timer2;
    timer2.get_the_system_time();
    timer2.start();
    int wait_time2 = 5;
    timer2.wait_for_a_few_seconds(wait_time2);
    timer2.stop();
    timer2.get_the_system_time();
    int elapsed_time2 = timer2.elapsed();
    cout << "Elapsed time: " << elapsed_time2 << " s" << endl;
    assert(elapsed_time2 >= wait_time2 && elapsed_time2 <= wait_time2 + 1);

    // Test three - 10 seconds
    Timer timer3;
    timer3.get_the_system_time();
    timer3.start();
    int wait_time3 = 10;
    timer3.wait_for_a_few_seconds(wait_time3);
    timer3.stop();
    timer3.get_the_system_time();
    int elapsed_time3 = timer3.elapsed();
    cout << "Elapsed time: " << elapsed_time3 << " s" << endl;
    assert(elapsed_time3 >= wait_time3 && elapsed_time3 <= wait_time3 + 1);

    // Test four - 15 seconds
    Timer timer4;
    timer4.get_the_system_time();
    timer4.start();
    int wait_time4 = 15;
    timer4.wait_for_a_few_seconds(wait_time4);
    timer4.stop();
    timer4.get_the_system_time();
    int elapsed_time4 = timer4.elapsed();
    cout << "Elapsed time: " << elapsed_time4 << " s" << endl;
    assert(elapsed_time4 >= wait_time4 && elapsed_time4 <= wait_time4 + 1);

    // Test five - 30 seconds
    Timer timer5;
    timer5.get_the_system_time();
    timer5.start();
    int wait_time5 = 30;
    timer5.wait_for_a_few_seconds(wait_time5);
    timer5.stop();
    timer5.get_the_system_time();
    int elapsed_time5 = timer5.elapsed();
    cout << "Elapsed time: " << elapsed_time5 << " s" << endl;
    assert(elapsed_time5 >= wait_time5 && elapsed_time5 <= wait_time5 + 1);

    // Test six - 0 seconds
    Timer timer6;
    timer6.get_the_system_time();
    timer6.start();
    int wait_time6 = 0;
    timer6.wait_for_a_few_seconds(wait_time6);
    timer6.stop();
    timer6.get_the_system_time();
    int elapsed_time6 = timer6.elapsed();
    cout << "Elapsed time: " << elapsed_time6 << " s" << endl;
    assert(elapsed_time6 == wait_time6);

    cout << "All of the tests have passed!" << endl;

    return 0;
}
