Restaurant Management System
Overview
This is a C++-based restaurant management system designed to handle various aspects of a restaurant, including employee management, order processing, reservations, menu management, client management, billing, and payments. The system uses object-oriented programming principles, including inheritance, polymorphism, and encapsulation.
Project Structure
The project consists of multiple classes, each responsible for a specific aspect of the restaurant management system. Below is a list of the key files:
Header Files

chefCuisinier.h: Defines the ChefCuisinier class for chefs.
chefsale.h: Defines the ChefSale class for savory dish chefs.
chefsucre.h: Defines the ChefSucre class for dessert chefs.
commande.h: Defines the Commande class for managing orders.
employe.h: Defines the abstract Employe base class.
facture.h: Defines the Facture class for invoices.
gerant.h: Defines the Gerant class for managers.
maitreHotel.h: Defines the MaitreHotel class for the maître d'hôtel.
paiement.h: Defines the Paiement class for payment processing.
plat.h: Defines the Plat class for dishes.
projet.h: Defines the Projet class for employee projects.
reservation.h: Defines the Reservation class for table reservations.
serveur.h: Defines the Serveur class for waiters.
table.h: Defines the Table class for restaurant tables.
client.h: Defines the Client, ClientFidele, ClientEtranger, and ProgrammeFidelite classes for customer management.
menu.h: Defines the Menu class for managing the restaurant menu.

Source Files

chefCuisinier.cpp: Implementation of ChefCuisinier.
chefsale.cpp: Implementation of ChefSale.
chefsucre.cpp: Implementation of ChefSucre.
commande.cpp: Implementation of Commande.
employe.cpp: Implementation of Employe.
facture.cpp: Implementation of Facture.
gerant.cpp: Implementation of Gerant.
maitreHotel.cpp: Implementation of MaitreHotel.
paiement.cpp: Implementation of Paiement.
plat.cpp: Implementation of Plat.
projet.cpp: Implementation of Projet.
reservation.cpp: Implementation of Reservation.
serveur.cpp: Implementation of Serveur.
table.cpp: Implementation of Table.
client.cpp: Implementation of Client, ClientFidele, ClientEtranger, and ProgrammeFidelite.
menu.cpp: Implementation of Menu.
main.cpp: Main program with a menu-driven interface to interact with the system.

Features

Employee Management: Add, remove, modify salaries, and display employees (managers, waiters, chefs, etc.).
Order Management: Create orders, add/remove dishes, calculate totals.
Reservation Management: Create, confirm, and cancel table reservations.
Menu Management: Add, remove, and display dishes on the menu.
Client Management: Manage faithful and foreign clients, including fidelity points and discounts.
Billing and Payments: Create invoices and process payments.
Reports: Generate sales and employee reports.

Prerequisites

A C++ compiler (e.g., g++).
A standard C++ library supporting C++11 or later.
A terminal or IDE to compile and run the program.

Compilation and Execution

Clone or Download the Project:

Download the ZIP file containing all project files.


Compile the Program:

Use a C++ compiler like g++. Compile all .cpp files together:g++ -std=c++11 main.cpp chefCuisinier.cpp chefsale.cpp chefsucre.cpp commande.cpp employe.cpp facture.cpp gerant.cpp maitreHotel.cpp paiement.cpp plat.cpp projet.cpp reservation.cpp serveur.cpp table.cpp client.cpp menu.cpp -o restaurant




Run the Program:

Execute the compiled binary:./restaurant




Interact with the Menu:

Follow the on-screen prompts to manage employees, orders, reservations, etc.



Usage Example
Upon running the program, you’ll see a menu like this:
=== Système de Gestion de Restaurant ===
1. Gestion des Employés
2. Gestion des Commandes
3. Gestion des Réservations
4. Gestion du Menu
5. Gestion des Clients
6. Gestion des Factures et Paiements
7. Générer Rapports
8. Quitter
Entrez votre choix (1-8):

Select an option (e.g., 4 for menu management) to add dishes, then create orders or reservations linked to clients.
Notes

Ensure all header files are in the same directory as the source files.
The program assumes valid user input for simplicity. Add input validation for production use.
Memory management is handled carefully, but use a tool like Valgrind to check for leaks during testing.
Some classes (e.g., MaitreHotel) may require additional implementation for full functionality.

Author
This project was developed as part of a C++ programming workshop. Contributions and improvements are welcome!
