#include <cs50.h>
#include <stdio.h>
int main(void) {
    string first_name = get_string("What is your first name: ");
    string last_name = get_string("what is your last name: ");
    int age = get_int("what is your age: ");
    string number = get_string("what is your phone number ");
    printf("name: %s %s\n age: %i years old\n phone number: %s \n", first_name, last_name, age,number);

}
