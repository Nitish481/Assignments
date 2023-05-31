#include<stdio.h>

struct customer {
	int no;
	char name[50];
	float balance;
};

void belowCent(struct customer users[], int n) {
	printf("\nCustomers with Balance Less than 1000.\n");
	printf("Acc. No.  \tName\n");
	for(int i = 0 ; i < n ; i++)
		if(users[i].balance < 1000.00)
			printf("%d \t\t%s\n", users[i].no, users[i].name);
}

int main() {
	int n;
	printf("Enter the number of customers: ");
	scanf("%d", &n);
	struct customer users[n];
	for(int i = 0 ; i < n ; i++) {
		printf("Enter Account Number for Customer %d: ", i + 1);
		scanf("%d", &users[i].no);
		printf("Enter Name of Customer %d: ", i + 1);
		scanf(" %50[^\n]", users[i].name);
		printf("Enter Balance of Customer %d: ", i + 1);
		scanf("%f", &users[i].balance);
	}
	belowCent(users, n);

	int flag = 1;
	int accno;
	char name[50];
	while(flag) {
		struct customer temp;
		printf("\nBANK PORTAL");
		printf("\nEnter Account Number: ");
		scanf("%d", &accno);
		int notThere = 1;
	       	for(int i = 0 ; i < n ; i++) {
		       	if(users[i].no == accno) {
		       		temp = users[i];
		 		notThere = 0;
				break;
			}
		}
		if(notThere) {
			printf("Wrong Account Number.\n");
			continue;
		}
		float amount;
		printf("Enter Amount: ");
		scanf("%f", &amount);
		printf("Enter 1 to deposit, 0 to withdraw: ");
		int choice;
		scanf("%d", &choice);
		if(choice) {
			temp.balance += amount;
		} else {
			if(amount > temp.balance)
				printf("Insufficent Balance to withdraw.\n");
			else
				temp.balance -= amount;
		}
		printf("Your current balance is: %.2f\n", temp.balance);
		printf("\nEnter 1 to make more request or 0 to exit: ");
		scanf("%d", &choice);
		if(!choice)
			flag = 0;
	}	
	return 0;
}