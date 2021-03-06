// Auther: JachinShen(jachinshen@foxmail.com)
#include <iostream>
#include <stdio.h>
#include <time.h>

#include <errno.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

#include "precom.h"

using namespace std;
class Serial {
private:
#if PLATFORM == MANIFOLD
    int fd;
#endif

private:
    int set_opt(int, int, int, char, int);

public:
    void init();
    void sendTarget(int, int, int);
};
