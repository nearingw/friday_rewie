

#include <stdio.h>
#define NMAX 20

struct Person {
        char first_name[NMAX];
        char second_name[NMAX];
        int hight;
    };

void input(struct Person* people, int count_elements);
void output(struct Person* people, int count_elements, int hight_number);

int main() {
    struct Person people[NMAX];
    int count_elements = 0;
    scanf("%d", &count_elements);
    input(people, count_elements);
    int hight_number = 0;
    scanf("%d", &hight_number);

    output(people, count_elements, hight_number);
    
    return 0;
}

void input(struct Person* people, int number_of_elements) {
    for (int i = 0; i < number_of_elements; i++) {
        scanf("%s", people[i].first_name);
        scanf("%s", people[i].second_name);
        scanf("%d", &people[i].hight);
    }
}

void output(struct Person* people, int number_of_elements, int hight_number) {
    int count = 0;
    for (int i = 0; i < number_of_elements; i++) {
        if (people[i].hight >= hight_number) {
            if (count != 0) printf(", ");
            printf("%s ", people[i].first_name);
            printf("%s", people[i].second_name);
            count ++;

            }
    }
    if (count == 0) printf ("Nothing");
}