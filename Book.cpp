#include "Book.h"

Book::Book() : InformationCarrier(), genre("Unknown") {}

Book::Book(const std::string& type, const std::string& author, const std::string& title, int year, bool stat, const std::string& genre)
    : InformationCarrier(type, author, title, year, stat), genre(genre) {}

std::string Book::getGenre() const {
    return genre;
}


void Book::setGenre(const std::string& g) {
    genre = g;
}

void Book::displayDetails() const {
    std::cout << "Type: " << getType()
              << "\nAuthor: " << getAuthor()
              << "\nTitle: " << getTitle()
              << "\nYear of Publication: " << getYear()
              << "\nStatus: " << getStatus()
              << "\nGenre: " << genre << std::endl;
}
