#include <iostream>

#include "ProjectWorkSpaceConfig.h"

int main() {
    std::cout << "Project Output : Hello world!\n";
    std::cout << "Project Version: " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << std::endl;
    return 0;
}