//Struct Example

#include <stdio.h>

//struct for a college course
//not garunteed to be contiguous
struct course
{
  char* name;
  char* subject;
  int id;
  int credits;


};

//define a type called Course that is an alias for type "struct course"
//We can even do this before the struct is designed - it is called
//a forward declaration
typedef struct course Course;


void print_course(Course);

int main(int argc, char** argv)
{
  int i;

//create some courses - specify values in order o
  Course course1 = {"C Programming","CIS", 205, 3};
  Course course2 = {"C# Programming","CIS", 206, 4};

//modify members on stack
  course1.credits = 4;
  course2.id = 240;

//pointer to course
  Course* crs_ptr;
  crs_ptr = &course2;

//modify member by pointer use ->
  crs_ptr->name = "C++ Programming";

  print_course(course1);
  print_course(course2);

}
//if we pass by value all members are pass by value even arrays
void print_course(Course c)
{
  printf("--------\n%s\n", c.name);
  printf("%s%d\n", c.subject, c.id);
  printf("%d credits\n--------\n", c.credits);
}










