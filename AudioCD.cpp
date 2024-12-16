#include "AudioCD.h"
#include <iostream>

AudioCD::AudioCD() : InformationCarrier(), duration("00:00") {}

AudioCD::AudioCD(const std::string& type, const std::string& author, const std::string& title,
                 int year, bool stat, const std::string& duration)
    : InformationCarrier(type, author, title, year, stat), duration(duration) {}

std::string AudioCD::getDuration() const {
    return duration;
}

void AudioCD::setDuration(const std::string& dur) {
    duration = dur;
}

void AudioCD::displayDetails() const {
    std::cout << "Type: " << getType()
              << "\nAuthor: " << getAuthor()
              << "\nTitle: " << getTitle()
              << "\nYear of Publication: " << getYear()
              << "\nStatus: " << getStatus()
              << "\nDuration: " << duration << std::endl;
}
