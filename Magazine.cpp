#include "Magazine.h"


Magazine::Magazine() : InformationCarrier(), publisher("Unknown"), magazineType("Unknown") {}

Magazine::Magazine(const std::string& type, const std::string& author, const std::string& title,
                   int year, bool stat, const std::string& publisher, const std::string& magazineType)
    : InformationCarrier(type, author, title, year, stat), publisher(publisher), magazineType(magazineType) {}


std::string Magazine::getPublisher() const {
    return publisher;
}

void Magazine::setPublisher(const std::string& publisher) {
    this->publisher = publisher;
}

std::string Magazine::getMagazineType() const {
    return magazineType;
}

void Magazine::setMagazineType(const std::string& magazineType) {
    this->magazineType = magazineType;
}

void Magazine::displayDetails() const {
    std::cout << "Type: " << getType()
              << "\nAuthor: " << getAuthor()
              << "\nTitle: " << getTitle()
              << "\nYear of Publication: " << getYear()
              << "\nStatus: " << getStatus()
              << "\nPublisher: " << publisher
              << "\nMagazine Type: " << magazineType << std::endl;
}
