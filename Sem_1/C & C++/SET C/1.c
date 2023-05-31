#include<stdio.h>
#include<string.h>
struct student {
	char name[50];
	int roll;
	int marks[5];
	int tot;
	float avg;
};

void swap(struct student *s1, struct student *s2) {
	struct student temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int main() {
	int n;
	printf("Enter number of students: ");
	scanf("%d", &n);
	struct student st[n];
	printf("Enter the details for the students.\n");
	for(int i = 0 ; i < n ; i++) {
		printf("Enter Name of Student %d: ", i + 1);
		scanf(" %50[^\n]", st[i].name);
		printf("Enter Roll Number of Student %d: ", i + 1);
		scanf("%d", &st[i].roll);
		int sum = 0;
		for(int j = 0 ; j < 5 ; j++) {
			printf("Enter Marks of Subject %d of Student %d: ", j + 1, i + 1);
		       	scanf("%d", &st[i].marks[j]);
			sum += st[i].marks[j];
		}
		st[i].tot = sum;
		st[i].avg = sum / 5.0;
	}
	for(int i = 0 ; i < n ; i++) {
		int max = i;
		for(int j = i + 1 ; j < n ; j++)
			if(st[j].tot > st[max].tot)
				max = j;
		swap(&st[max], &st[i]);
	}

	printf("\nRoll \tName \tTotal \tAverage\n");
	for(int i = 0 ; i < n ; i++)
		printf("%d\t%s\t%d\t%.2f\n", st[i].roll, st[i].name, st[i].tot, st[i].avg);
	return 0;
}	

