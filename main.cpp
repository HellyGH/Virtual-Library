#include "Book.h"
#include "Cassete.h"
#include "Magazine.h"
#include "AudioCD.h"
#include "VideoCassette.h"
#include <vector>
#include <memory>
#include <iostream>
#include <limits>


int validateIntegerInput() {
    int value;
    while (!(std::cin >> value)) {
        std::cout << "Invalid input! Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}

bool validateStatusInput() {
    char status;
    while (true) {
        std::cin >> status;
        if (status == 'f' || status == 'b') {
            return status == 'f'; // Returns true if free (f), false if busy (b)
        }
        std::cout << "Invalid input! Please enter 'f' for Free or 'b' for Busy: ";
    }
}

void addMedia(std::vector<std::unique_ptr<InformationCarrier>>& library) {
    int choice;
    std::cout << "\nSelect the type of media to add:\n";
    std::cout << "1. Book\n2. Magazine\n3. Audio CD\n4. Cassette\n5. Video Cassette\n";
    choice = validateIntegerInput();

    if (choice < 1 || choice > 5) {
        std::cout << "Invalid choice. Returning to main menu.\n";
        return;
    }

    std::string author, title;
    int year;
    bool status;

    std::cin.ignore();
    std::cout << "Enter author: ";
    std::getline(std::cin, author);

    std::cout << "Enter title: ";
    std::getline(std::cin, title);

    std::cout << "Enter year of publication: ";
    year = validateIntegerInput();

    std::cout << "Is the media free (f) or busy (b)? ";
    status = validateStatusInput();

    switch (choice) {
        case 3: {
            std::string duration;
            std::cin.ignore();
            std::cout << "Enter duration (e.g., 42:19): ";
            std::getline(std::cin, duration);
            library.push_back(std::make_unique<AudioCD>("AudioCD", author, title, year, status, duration));
            break;
        }
        case 1: {
            std::string genre;
            std::cin.ignore();
            std::cout << "Enter genre: ";
            std::getline(std::cin, genre);
            library.push_back(std::make_unique<Book>("Book", author, title, year, status, genre));
            break;
        }
        case 2: {
            std::string publisher, magazineType;
            std::cin.ignore();
            std::cout << "Enter publisher: ";
            std::getline(std::cin, publisher);
            std::cout << "Enter type of magazine (e.g., Fashion, Fantasy): ";
            std::getline(std::cin, magazineType);
            library.push_back(std::make_unique<Magazine>("Magazine", author, title, year, status, publisher, magazineType));
            break;
        }
        case 4: {
            std::string recordingSpeed;
            std::cin.ignore();
            std::cout << "Enter recording speed (e.g., Normal, High): ";
            std::getline(std::cin, recordingSpeed);
            library.push_back(std::make_unique<Cassette>("Cassette", author, title, year, status, recordingSpeed));
            break;
        }
        case 5: {
            std::string resolution;
            std::cin.ignore();
            std::cout << "Enter resolution (e.g., 1080p): ";
            std::getline(std::cin, resolution);
            library.push_back(std::make_unique<VideoCassette>("VideoCassette", author, title, year, status, resolution));
            break;
        }
    }

    std::cout << "Media added successfully!\n";
}


void displayAllMedia(const std::vector<std::unique_ptr<InformationCarrier>>& library) {
    std::cout << "\n===== All Media in the Library =====\n";
    if (library.empty()) {
        std::cout << "No media available in the library.\n";
        return;
    }

    for (const auto& media : library) {
        std::cout << *media; 
        std::cout << "-------------------\n";
    }
}

int main() {
    std::vector<std::unique_ptr<InformationCarrier>> library;
    int choice;

    do {
        std::cout << "\n===== Menu =====\n";
        std::cout << "1. Add Media\n";
        std::cout << "2. Display All Media\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        choice = validateIntegerInput();

        switch (choice) {
            case 1:
                addMedia(library);
                break;
            case 2:
                displayAllMedia(library);
                break;
            case 3:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
