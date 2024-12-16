#include "VideoCassette.h"

VideoCassette::VideoCassette() : InformationCarrier(), resolution("480p") {}

VideoCassette::VideoCassette(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& resolution)
    : InformationCarrier(type, author, title, year, stat), resolution(resolution) {}

std::string VideoCassette::getResolution() const {
    return resolution;
}

void VideoCassette::setResolution(const std::string& res) {
    resolution = res;
}

void VideoCassette::displayDetails() const {
    std::cout << "Type: " << getType()
              << "\nAuthor: " << getAuthor()
              << "\nTitle: " << getTitle()
              << "\nYear of Publication: " << getYear()
              << "\nStatus: " << getStatus()
              << "\nResolution: " << resolution << std::endl;
}
