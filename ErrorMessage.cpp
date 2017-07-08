// Final Project Milestone 2
// Version 1.0
// Date	
// Author	
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include "ErrorMessage.h"

namespace sict{
    ErrorMessage::ErrorMessage() {
        message_ = nullptr;
    }

    ErrorMessage::ErrorMessage(const char *errorMessage) {
        message_ = nullptr;
        message(errorMessage);
    }

    ErrorMessage::~ErrorMessage() {
        delete[] message_;
    }

    void ErrorMessage::operator=(const char *errorMessage) {
        clear();
        message(errorMessage);
    }

    void ErrorMessage::clear() {
        delete[] message_;
        message_ = nullptr;
    }

    bool ErrorMessage::isClear() const {
        return (message_ == nullptr);
    }

    void ErrorMessage::message(const char* value) {
        delete[] message_;
        message_ = new char[strlen(value) + 1];
        strcpy(message_, value);
    }

    const char* ErrorMessage::message() const {
        return message_;
    }

    std::ostream& operator<<(std::ostream& os, const ErrorMessage& e){
        if (!e.isClear()) {
            os << e;
        }
        return os;
    }
}