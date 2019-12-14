nclude <signal.h>
#include <string.h>
#include <unistd.h>

#include <chrono>
#include <iostream>
#include <thread>

void handle_signal(int const signal_number)
{
    std::cerr << "got signal: " << signal_number;
    std::cerr << ": " << strsignal(signal_number) << "\n";
}

auto main() -> int
{
    signal(SIGTERM, handle_signal);
    signal(SIGHUP, handle_signal);
    signal(SIGCHLD, handle_signal);
    signal(SIGQUIT, handle_signal);

    std::cerr << "send me a signal to PID " << getpid() << "\n";

    std::this_thread::sleep_for(std::chrono::seconds{60});

    return 0;
}
