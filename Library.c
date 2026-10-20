//LIBRARY MANAGEMENT SYSTEM
//C PROGRAMMING

#include <stdio.h>
#include <string.h>
#define MAX 100
// Structure definition
struct Book 
{
	int id;
	char title[50];
	char author[50];
	int quantity;
};
// Global array and counter
struct Book library[MAX];
int count = 0;
// Function declarations
void addBook();
void displayBooks();
void searchBook();
void updateBook();
void deleteBook();
int main()
{
	int choice;
	while (1)
	{
		printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
		printf("1. Add Book\n");
		printf("2. Display All Books\n");
		printf("3. Search Book by ID\n");
		printf("4. Update Book\n");
		printf("5. Delete Book\n"); 
                          printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			addBook();
			break;
		case 2:
			displayBooks();
			break;
		case 3:
			searchBook();
			break;
		case 4:
			updateBook();
			break;
		case 5:
			deleteBook();
			break;
		case 6:
			return 0;
		default:
			printf("Invalid choice! Please try again.\n");
		}
	}
}

// Add a new book
void addBook()
{
	if (count >= MAX)
	{
		printf("Library is full! Cannot add more books.\n");
		return;
	}
	printf("\nEnter Book ID: ");
	scanf("%d", &library[count].id);

	printf("Enter Book Title: ");
	scanf(" %[^\n]s", library[count].title);

	printf("Enter Author Name: ");
	scanf(" %[^\n]s", library[count].author);

	printf("Enter Quantity: ");
	scanf("%d", &library[count].quantity);

	count++;
	printf("Book added successfully!\n");
}
// Display all books
void displayBooks()
{
	if (count == 0)
	{
		printf("\nNo books available!\n");
		return;
	}

	printf("\n--- List of Books ---\n");
	for (int i = 0; i < count; i++)
	{
		printf("\nBook %d:\n", i + 1);
		printf("ID       : %d\n", library[i].id);
		printf("Title    : %s\n", library[i].title);
		printf("Author   : %s\n", library[i].author);
		printf("Quantity : %d\n", library[i].quantity);
	}
}

// Search for a book by ID
void searchBook()
{
	int id, found = 0;
	printf("\nEnter Book ID to search: ");
	scanf("%d", &id);
	for (int i = 0; i < count; i++)
	{
		if (library[i].id == id)
		{
			printf("\nBook Found!\n");
			printf("ID       : %d\n", library[i].id);
			printf("Title    : %s\n", library[i].title);
			printf("Author   : %s\n", library[i].author);
			printf("Quantity : %d\n", library[i].quantity);
			found = 1;
			break;
		}
	}

	if (!found)
		printf("Book not found!\n");
}
// Update book details
void updateBook()
{
	int id, found = 0;
	printf("\nEnter Book ID to update: ");
	scanf("%d", &id);
	for (int i = 0; i < count; i++)
	{
		if (library[i].id == id)
		{
			printf("Enter new title: ");
			scanf(" %[^\n]s", library[i].title);

			printf("Enter new author: ");
			scanf(" %[^\n]s", library[i].author);

			printf("Enter new quantity: ");
			scanf("%d", &library[i].quantity);

			printf("Book updated successfully!\n");
			found = 1;
			break;
		}
	}

	if (!found)
		printf("Book not found!\n");
}

// Delete a book
void deleteBook()
{
	int id, found = 0;
	printf("\nEnter Book ID to delete: ");
	scanf("%d", &id);
	for (int i = 0; i < count; i++)
	{
		if (library[i].id == id)
		{
			for (int j = i; j < count - 1; j++)
			{
				library[j] = library[j + 1];
			}
			count--;
			printf("Book deleted successfully!\n");
			found = 1;
			break;
		}
	}

	if (!found)
		printf("Book not found!\n");
}










 
 
