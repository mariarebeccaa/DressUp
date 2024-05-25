#ifndef OOP_AVATAREXCEPTIONS_H
#define OOP_AVATAREXCEPTIONS_H

// AvatarException.h

#include <exception>
#include <string>
#include <utility>

class AvatarException : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override = 0;
};

class AvatarReadException : public AvatarException {
private:
    std::string message;
public:
    explicit AvatarReadException(std::string  msg) : message(std::move(msg)) {}
    [[nodiscard]] const char* what() const noexcept override {
        return message.c_str();
    }
};

class AvatarFeatureException : public AvatarException {
private:
    std::string message;
public:
    explicit AvatarFeatureException(std::string  msg) : message(std::move(msg)) {}
    [[nodiscard]] const char* what() const noexcept override {
        return message.c_str();
    }
};

class AvatarClothingException : public AvatarException {
private:
    std::string message;
public:
    explicit AvatarClothingException(std::string  msg) : message(std::move(msg)) {}
    [[nodiscard]] const char* what() const noexcept override {
        return message.c_str();
    }
};


#endif //OOP_AVATAREXCEPTIONS_H
