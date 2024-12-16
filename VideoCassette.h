#ifndef VIDEOCASSETTE_H
#define VIDEOCASSETTE_H

#include "InformationCarrier.h"
#include <string>
#include <iostream>

class VideoCassette : public InformationCarrier {
private:
    std::string resolution;

public:
    VideoCassette();
    VideoCassette(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& resolution);

    std::string getResolution() const;
    void setResolution(const std::string& res);

    void displayDetails() const override;

    ~VideoCassette() override = default;
};

#endif
