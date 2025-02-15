# XYZ Airlines Reservation System

## Overview

The XYZ Airlines Reservation System is a console-based application written in C++. It allows users to enter customer details, book flights, and print tickets. The application is designed to provide a simple and interactive way for users to manage their flight reservations.

## Features

- **Customer Details Entry**: Users can enter their personal information, including Customer ID, Name, Age, Address, and Gender.
- **Flight Booking**: Users can view available flights to different countries and book a flight of their choice.
- **Ticket Generation**: After booking a flight, users can generate and print their ticket, which includes customer details and flight information.
- **Data Persistence**: The application saves ticket information to a text file (`records.txt`) for future reference.

## Requirements

- C++ Compiler (e.g., g++, clang++)
- Basic understanding of C++ programming

## How to Compile and Run

1. **Clone the Repository** (if applicable):
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

## Usage

1. **Main Menu**: Upon starting the application, the main menu will be displayed with the following options:
   - Enter Customer Details
   - Book a Flight
   - Print Ticket
   - Exit

2. **Entering Customer Details**: Select option 1 to enter customer details. The application will prompt for Customer ID, Name, Age, Address, and Gender.

3. **Booking a Flight**: Select option 2 to view available flights. The application will display a list of flights to different countries. Choose a flight by entering the corresponding number.

4. **Printing Ticket**: Select option 3 to generate and display the ticket. The ticket will include customer details and flight information.

5. **Exiting the Application**: Select option 4 to exit the application.

## Code Structure

- **Classes**:
  - `Management`: Initializes the application and displays the main menu.
  - `Details`: Handles customer information input and storage.
  - `Registration`: Manages flight booking and pricing.
  - `Ticket`: Generates and displays the ticket, saving it to a file.

- **Functions**:
  - `mainMenu()`: Displays the main menu and handles user choices.
  - `information()`: Collects customer details.
  - `flights()`: Displays available flights and handles booking.
  - `Bill()`: Generates the ticket and saves it to a file.
  - `dispBill()`: Reads and displays the ticket from the file.

## Notes

- Ensure that you have write permissions in the directory where the application is run, as it creates a file named `records.txt` to store ticket information.
- The application is designed for educational purposes and may require further enhancements for production use, such as error handling and input validation.