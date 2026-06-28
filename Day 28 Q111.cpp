#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Seat {
public:
    int seatNumber;
    bool isBooked;
    string passengerName;

    Seat(int num) {
        seatNumber = num;
        isBooked = false;
        passengerName = "";
    }
};


class TicketBookingSystem {
private:
    vector<Seat> seats;
    string movieName;
    double ticketPrice;

public:
 
    TicketBookingSystem(string movie, double price, int totalSeats) {
        movieName = movie;
        ticketPrice = price;
        for (int i = 1; i <= totalSeats; i++) {
            seats.push_back(Seat(i));
        }
    }

   
    void displaySeats() {
        cout << "\n--- Seating Arrangement for " << movieName << " ---" << endl;
        for (const auto& seat : seats) {
            cout << "[Seat " << seat.seatNumber << ": ";
            if (seat.isBooked) {
                cout << "Booked (" << seat.passengerName << ")] ";
            } else {
                cout << "Available] ";
            }
          
            if (seat.seatNumber % 5 == 0) {
                cout << endl;
            }
        }
    }

  
    void bookTicket() {
        int seatNum;
        string name;

        cout << "\nEnter seat number to book (1-" << seats.size() << "): ";
        cin >> seatNum;

      
        if (seatNum < 1 || seatNum > static_cast<int>(seats.size())) {
            cout << "Invalid seat number! Please choose a valid seat." << endl;
            return;
        }

      
        int index = seatNum - 1;

        if (seats[index].isBooked) {
            cout << "Sorry, Seat " << seatNum << " is already booked!" << endl;
        } else {
            cout << "Enter passenger name: ";
            cin.ignore(); 
            getline(cin, name);

            seats[index].isBooked = true;
            seats[index].passengerName = name;

            cout << "\nSuccessfully booked Seat " << seatNum << " for " << name << "!" << endl;
            cout << "Total Price: $" << ticketPrice << endl;
        }
    }

  
    void cancelTicket() {
        int seatNum;
        cout << "\nEnter seat number to cancel booking: ";
        cin >> seatNum;

        if (seatNum < 1 || seatNum > static_cast<int>(seats.size())) {
            cout << "Invalid seat number!" << endl;
            return;
        }

        int index = seatNum - 1;

        if (!seats[index].isBooked) {
            cout << "Seat " << seatNum << " is not currently booked." << endl;
        } else {
            cout << "Booking for " << seats[index].passengerName << " at Seat " << seatNum << " has been canceled." << endl;
            seats[index].isBooked = false;
            seats[index].passengerName = "";
        }
    }
};

int main() {
   
    TicketBookingSystem system("Avengers: Endgame", 12.50, 15);
    int choice;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====" << endl;
        cout << "1. View Available Seats" << endl;
        cout << "2. Book a Ticket" << endl;
        cout << "3. Cancel a Ticket" << endl;
        cout << "4. Exit Application" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.displaySeats();
                break;
            case 2:
                system.bookTicket();
                break;
            case 3:
                system.cancelTicket();
                break;
            case 4:
                cout << "Thank you for using the Ticket Booking System!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
