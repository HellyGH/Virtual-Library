#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "InformationCarrier.h"
#include <string>
#include <iostream>

class Magazine : public InformationCarrier {
private:
    std::string publisher;
    std::string magazineType;

public:
    Magazine();

    Magazine(const std::string& type, const std::string& author, const std::string& title,
             int year, bool stat, const std::string& publisher, const std::string& magazineType);

    std::string getPublisher() const;
    void setPublisher(const std::string& publisher);

    std::string getMagazineType() const;
    void setMagazineType(const std::string& magazineType);

    void displayDetails() const override;

    ~Magazine() override = default;
};

#endif
