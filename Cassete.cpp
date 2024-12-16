#include "Cassete.h"


Cassette::Cassette() : InformationCarrier(), recordingSpeed("Normal") {}

Cassette::Cassette(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& speed)
    : InformationCarrier(type, author, title, year, stat), recordingSpeed(speed) {}

std::string Cassette::getRecordingSpeed() const {
    return recordingSpeed;
}

void Cassette::setRecordingSpeed(const std::string& speed) {
    recordingSpeed = speed;
}

void Cassette::displayDetails() const {
    std::cout << "Type: " << getType()
              << "\nAuthor: " << getAuthor()
              << "\nTitle: " << getTitle()
              << "\nYear of Publication: " << getYear()
              << "\nStatus: " << getStatus()
              << "\nRecording Speed: " << recordingSpeed << std::endl;
}
