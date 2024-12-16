#ifndef AUDIOCD_H
#define AUDIOCD_H

#include "InformationCarrier.h"
#include <string>

class AudioCD : public InformationCarrier {
private:
    std::string duration;

public:

    AudioCD();
    AudioCD(const std::string& type, const std::string& author, const std::string& title,
            int year, bool stat, const std::string& duration);

    std::string getDuration() const;
    void setDuration(const std::string& dur);

    void displayDetails() const override;

    ~AudioCD() override = default;
};

#endif
