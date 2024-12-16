#include "InformationCarrier.h"
//тук правим имплементацията
InformationCarrier::InformationCarrier()
    : type("Unknown"), author("Unknown"), title("Unknown"), yearOfPublication(0), status(true) {}


InformationCarrier::InformationCarrier(const std::string& t, const std::string& a, const std::string& ti, int year, bool stat)
    : type(t), author(a), title(ti), yearOfPublication(year), status(stat) {}


std::string InformationCarrier::getType() const { return type; }
std::string InformationCarrier::getAuthor() const { return author; }
std::string InformationCarrier::getTitle() const { return title; }
int InformationCarrier::getYear() const { return yearOfPublication; }
std::string InformationCarrier::getStatus() const { return status ? "Free" : "Busy"; }


void InformationCarrier::setType(const std::string& t) { type = t; }
void InformationCarrier::setAuthor(const std::string& a) { author = a; }
void InformationCarrier::setTitle(const std::string& ti) { title = ti; }
void InformationCarrier::setYear(int year) { yearOfPublication = year; }
void InformationCarrier::setStatus(bool stat) { status = stat; }


void InformationCarrier::displayDetails() const {
    std::cout << "Type: " << type
              << "\nAuthor: " << author
              << "\nTitle: " << title
              << "\nYear of Publication: " << yearOfPublication
              << "\nStatus: " << (status ? "Free" : "Busy") << std::endl;
}


std::ostream& operator<<(std::ostream& os, const InformationCarrier& media) {
    os << "Type: " << media.type
       << "\nAuthor: " << media.author
       << "\nTitle: " << media.title
       << "\nYear of Publication: " << media.yearOfPublication
       << "\nStatus: " << (media.status ? "Free" : "Busy");
    return os;
}


InformationCarrier::~InformationCarrier() {}
