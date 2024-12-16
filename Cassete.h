#ifndef CASSETTE_H
#define CASSETTE_H

#include "InformationCarrier.h"
#include <string>
#include <iostream>

class Cassette : public InformationCarrier {
private:
    std::string recordingSpeed;

public:
    Cassette();
    Cassette(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& speed);

    std::string getRecordingSpeed() const;
    void setRecordingSpeed(const std::string& speed);

    void displayDetails() const override;

    ~Cassette() override = default;
};

#endif
