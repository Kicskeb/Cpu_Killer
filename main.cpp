#include <iostream>
#include <thread>

int main() {
    const unsigned int n = std::thread::hardware_concurrency();
    volatile long szamol = 2;
    std::thread random[n];
    for (int i= 1; i < n; i++)
        random[i-1] = std::thread ([&](){
            while (true) szamol *= szamol;
        });
    while (true) szamol *= szamol;
}
