#include <iostream>

int main() {
    int lesson;
    std::cin >> lesson;

    int lesson_time = 45 * lesson;


    int break_time = (lesson / 2) * 15 + ((lesson - 1) / 2) * 5;

    int total_time = lesson_time + break_time;

    int hours = 9 + total_time / 60;
    int minutes = total_time % 60;

    std::cout << hours << " " << minutes << std::endl;

    return 0;
}
