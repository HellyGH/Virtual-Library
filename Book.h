#ifndef BOOK_H
#define BOOK_H

#include "InformationCarrier.h"
#include <string>
#include <iostream>


class Book : public InformationCarrier {
private:
    std::string genre;

public:

    Book();
    Book(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& genre);

    // Getter and Setter for genre
    std::string getGenre() const;
    void setGenre(const std::string& g);


    void displayDetails() const override;

    ~Book() override = default;
};

#endif
