#ifndef TEST_MYCUSTOMEXCEPTION_H
#define TEST_MYCUSTOMEXCEPTION_H

#include <iostream>

class MyCustomException : public std::exception {
public:
    char *what() {
        return "Too much weight for this container\n";

    }
};

#endif //TEST_MYCUSTOMEXCEPTION_H
