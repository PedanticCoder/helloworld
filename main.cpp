#include "lib.h"
#include "version.h"
#include <iostream>

int main()
{
    std::cout << "Build "<< PROJECT_VERSION_PATCH << std::endl;
    std::cout << "Hello World" << std::endl;

    return 0;
}
