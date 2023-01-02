#include <stdio.h>

#define NUM_STUDENTS 3

int main(void) {
  char names[NUM_STUDENTS][50]; // array to store names
  int roll_numbers[NUM_STUDENTS]; // array to store roll numbers
  int marks[NUM_STUDENTS]; // array to store marks

  // input
  for (int i = 0; i < NUM_STUDENTS; i++) {
    printf("Enter name for student %d: ", i+1);
    scanf("%s", names[i]);
    printf("Enter roll number for student %d: ", i+1);
    scanf("%d", &roll_numbers[i]);
    printf("Enter mark for student %d: ", i+1);
    scanf("%d", &marks[i]);
  }

  // output
  for (int i = 0; i < NUM_STUDENTS; i++) {
    printf("Name: %s, Roll Number: %d, Mark: %d\n", names[i], roll_numbers[i], marks[i]);
  }

  return 0;
}
