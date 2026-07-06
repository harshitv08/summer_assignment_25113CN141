#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
struct Book{
    int id;
    char title[50];
    char author[50];
    int available; 
};

struct Book library[MAX];
int count = 0;
void addBook() {
    if (count >= MAX){
        printf("Library is full!\n");
        return;
    }
    library[count].id = count + 1;
    printf("Enter book title: ");
    scanf(" %[^\n]", library[count].title);
    printf("Enter author name: ");
    scanf(" %[^\n]", library[count].author);
    library[count].available = 1;
    count++;
    printf("Book added successfully!\n");
}
void displayBooks(){
    if (count == 0) {
        printf("No books in library.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Author: %s | %s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].available ? "Available" : "Issued");
    }
}
void searchBook(){
    char title[50];
    printf("Enter book title to search: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found: ID %d | Author: %s | %s\n",
                   library[i].id,
                   library[i].author,
                   library[i].available ? "Available" : "Issued");
            return;
        }
    }
    printf("Book not found.\n");
}
void issueBook(){
    int id;
    printf("Enter book ID to issue: ");
    scanf("%d", &id);
    if (id <= 0 || id > count) {
        printf("Invalid book ID.\n");
        return;
    }
    if (library[id - 1].available) {
        library[id - 1].available = 0;
        printf("Book issued successfully!\n");
    } else {
        printf("Book already issued.\n");
    }
}
void returnBook(){
    int id;
    printf("Enter book ID to return: ");
    scanf("%d", &id);
    if (id <= 0 || id > count) {
        printf("Invalid book ID.\n");
        return;
    }
    if (!library[id - 1].available) {
        library[id - 1].available = 1;
        printf("Book returned successfully!\n");
    } else {
        printf("Book was not issued.\n");
    }
}
int main(){
    int choice;
    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
struct Book{
    int id;
    char title[50];
    char author[50];
    int available; 
};

struct Book library[MAX];
int count = 0;
void addBook(){
    if (count >= MAX){
        printf("Library is full!\n");
        return;
    }
    library[count].id = count + 1;
    printf("Enter book title: ");
    scanf(" %[^\n]", library[count].title);
    printf("Enter author name: ");
    scanf(" %[^\n]", library[count].author);
    library[count].available = 1;
    count++;
    printf("Book added successfully!\n");
}
void displayBooks(){
    if (count == 0) {
        printf("No books in library.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++){
        printf("ID: %d | Title: %s | Author: %s | %s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].available ? "Available" : "Issued");
    }
}
void searchBook(){
    char title[50];
    printf("Enter book title to search: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < count; i++){
        if (strcmp(library[i].title, title) == 0){
            printf("Book found: ID %d | Author: %s | %s\n",
                   library[i].id,
                   library[i].author,
                   library[i].available ? "Available" : "Issued");
            return;
        }
    }
    printf("Book not found.\n");
}
void issueBook(){
    int id;
    printf("Enter book ID to issue: ");
    scanf("%d", &id);
    if (id <= 0 || id > count){
        printf("Invalid book ID.\n");
        return;
    }
    if (library[id - 1].available){
        library[id - 1].available = 0;
        printf("Book issued successfully!\n");
    } else{
        printf("Book already issued.\n");
    }
}
void returnBook(){
    int id;
    printf("Enter book ID to return: ");
    scanf("%d", &id);
    if (id <= 0 || id > count){
        printf("Invalid book ID.\n");
        return;
    }
    if (!library[id - 1].available){
        library[id - 1].available = 1;
        printf("Book returned successfully!\n");
    } else{
        printf("Book was not issued.\n");
    }
}
int main(){
    int choice;
    while (1){
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#define MAX_TICKETS 100

struct Ticket {
    int ticketID;
    char name[50];
    char event[50];
    int seats;
    int isBooked; // 1 = booked, 0 = cancelled
};

void bookTicket(struct Ticket *t, int id, char name[], char event[], int seats) {
    t->ticketID = id;
    strcpy(t->name, name);
    strcpy(t->event, event);
    t->seats = seats;
    t->isBooked = 1;
    printf("Ticket booked successfully!\n");
}

void cancelTicket(struct Ticket *t) {
    if (t->isBooked) {
        t->isBooked = 0;
        printf("Ticket ID %d cancelled successfully!\n", t->ticketID);
    } else {
        printf("Ticket is not booked or already cancelled.\n");
    }
}

void displayTicket(struct Ticket t) {
    printf("\n--- Ticket Details ---\n");
    printf("Ticket ID: %d\n", t.ticketID);
    printf("Name: %s\n", t.name);
    printf("Event: %s\n", t.event);
    printf("Seats: %d\n", t.seats);
    printf("Status: %s\n", t.isBooked ? "Booked" : "Cancelled");
}

int main() {
    struct Ticket tickets[MAX_TICKETS];
    int choice, id = 1, seats;
    char name[50], event[50];

    while (1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter your name: ");
                scanf("%s", name);
                printf("Enter event name: ");
                scanf("%s", event);
                printf("Enter number of seats: ");
                scanf("%d", &seats);
                bookTicket(&tickets[id], id, name, event, seats);
                id++;
                break;

            case 2:
                printf("Enter Ticket ID to cancel: ");
                scanf("%d", &seats);
                if (seats < id)
                    cancelTicket(&tickets[seats]);
                else
                    printf("Invalid Ticket ID.\n");
                break;

            case 3:
                printf("Enter Ticket ID to display: ");
                scanf("%d", &seats);
                if (seats < id)
                    displayTicket(tickets[seats]);
                else
                    printf("Invalid Ticket ID.\n");
                break;

            case 4:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}


#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

void addContact(struct Contact contacts[], int *count) {
    if (*count >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", contacts[*count].name);
    printf("Enter phone: ");
    scanf("%s", contacts[*count].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*count].email);

    (*count)++;
    printf("Contact added successfully!\n");
}

void searchContact(struct Contact contacts[], int count) {
    char name[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("\n--- Contact Found ---\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

void displayContacts(struct Contact contacts[], int count) {
    if (count == 0) {
        printf("No contacts available.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Contact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
        printf("-------------------\n");
    }
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0, choice;

    while (1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Display All Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                searchContact(contacts, count);
                break;
            case 3:
                displayContacts(contacts, count);
                break;
            case 4:
                printf("Exiting system...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
