# Car Rental System - C Language Menu Driven Project

The **Car Rental System** is a menu-driven project developed in C language that provides both admin and customer portals for efficient car rental management. The admin portal allows administrators to add car details for rental, including car name, model, price, pickup, and drop-off details. Admins can also delete car details when needed. On the customer portal, users can view car details, check the number of available cars, prices, and rent a car from the pickup location and return it to any drop-off location.

## Features

### Admin Portal

- **Add Car Details**: Administrators can add new cars for rental by providing car name, model, price, pickup location, and drop-off details.

- **Delete Car Details**: Admins have the option to delete car details from the system.

### Customer Portal

- **View Car Details**: Customers can view the available car details, including car name, model, price, pickup, and drop-off information.

- **Check Availability**: Customers can check the number of available cars for rent.

- **Rent a Car**: Users can rent a car by selecting a pickup location and specifying a drop-off location.

## Getting Started

To run the Car Rental System, follow these steps:

1. Clone or download this repository to your local machine.

2. Compile the project using a C compiler (e.g., GCC):

   ```bash
   gcc car_rental_system.c -o car_rental_system
   ```

3. Run the compiled executable:

   ```bash
   ./car_rental_system
   ```

4. Follow the on-screen instructions to navigate and use the Car Rental System.

## Usage

### Admin Portal

1. **Admin Login**:
   - To access the admin portal, log in with the admin credentials.

2. **Add Car Details**:
   - Add car details, including name, model, price, pickup, and drop-off details.

3. **Delete Car Details**:
   - Delete car details using the car ID.

### Customer Portal

1. **View Car Details**:
   - Customers can view the available car details.

2. **Check Availability**:
   - Check the availability of cars for rental.

3. **Rent a Car**:
   - Select a car for rental and specify pickup and drop-off locations.

## Project Structure

- `car_rental_system.c`: The main C program for the Car Rental System.
- `admin.c`: Contains admin-related functions.
- `customer.c`: Contains customer-related functions.
- `cars.csv`: Stores car data, including name, model, price, pickup, and drop-off details.
- `users.csv`: Stores admin login credentials.

## Contributing

Contributions to this project are welcome. You can contribute by opening issues, providing feedback, or submitting pull requests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Enjoy using the Car Rental System for your car rental needs! 🚗
