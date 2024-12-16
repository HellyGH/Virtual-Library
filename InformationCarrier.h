#ifndef INFORMATIONCARRIER_H
#define INFORMATIONCARRIER_H

#include <string>
#include <iostream>

class InformationCarrier {
private:
    std::string type;
    std::string author;
    std::string title;
    int yearOfPublication;
    bool status;

public:
    InformationCarrier();
    InformationCarrier(const std::string& type, const std::string& author, const std::string& title, int year, bool stat);


    std::string getType() const;
    void setType(const std::string& t);

    std::string getAuthor() const;
    void setAuthor(const std::string& a);

    std::string getTitle() const;
    void setTitle(const std::string& ti);

    int getYear() const;
    void setYear(int year);

    std::string getStatus() const;
    void setStatus(bool stat);

    virtual void displayDetails() const;

    friend std::ostream& operator<<(std::ostream& os, const InformationCarrier& media);

    virtual ~InformationCarrier();
};

#endif
