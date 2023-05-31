#include<stdio.h>
#include<string.h>

struct library {
	int no;
	char title[50];
	char author[50];
	int price;
	int issued;
};

int main() {
	int flag = 1;
	struct library lib[20];
	int i = 0;
	while(flag) {
		printf("\nLIBRARY PORTAL\n");
		printf("Choose One option from Below Options: \n");
		printf("1. Add book information.\n");
		printf("2. Display book information. \n");
		printf("3. List all books of given author. \n");
		int choice;
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		printf("\n");
		switch(choice) {
			case 1: printf("Enter Accession Number: ");
				scanf("%d", &lib[i].no);
				printf("Enter title of book: ");
				scanf(" %50[^\n]", lib[i].title);
				printf("Enter author's name: ");
				scanf(" %50[^\n]", lib[i].author);
				printf("Enter price of book: ");
				scanf("%d", &lib[i].price);
				printf("Enter 1 if issued and 0 if not: ");
				scanf("%d", &lib[i].issued);
				i++;
				break;
			case 2: char name[50];
				int there = 0;
				printf("Enter title of book: ");
				scanf(" %50[^\n]", name);
				for(int j = 0 ; j < i ; j++) {
					if(!strcmp(lib[j].title, name)) {
					       	printf("Accession Number : %d\n", lib[j].no);
				       		printf("Title: %s\n", lib[j].title);
				 		printf("Author's Name: %s\n", lib[j].author);
						printf("Price: %d\n", lib[j].price);
						printf("Issued: ");
						if(lib[j].issued)
							printf("yes\n");
						else
							printf("no\n");
						there = 1;
						break;
					}
				}
				if(!there)
					printf("The given book is not present.\n");
				break;
			case 3: char aut[50];
				int found = 0;
				printf("Enter author's name: ");
				scanf(" %50[^\n]", aut);
				for(int j = 0 ; j < i ; j++) {
					if(!strcmp(lib[j].author, aut)) {
						printf("\nAccession Number : %d\n", lib[j].no);
						printf("Title: %s\n", lib[j].title); 
						printf("Price: %d\n", lib[j].price);  
						printf("Issued: ");        
						if(lib[j].issued)    
							printf("yes\n");         
						else   
							printf("no\n");    
						found = 1;
					}
				}
				if(!found)
					printf("The author has no books.\n");
				break;
			default: printf("Wrong Choice.\n");
		}
		printf("\nEnter 1 to Continue, 0 to Exit: ");
		scanf("%d", &flag);
	}
	return 0;
}	