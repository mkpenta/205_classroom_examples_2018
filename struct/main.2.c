
#include <stdio.h>

//foward declaration of Course
typedef struct course Course;

//same struct as previous example
//pointer to other another course
struct course
{
  char* name;
  char* subject;
  int id;
  int credits;
  Course* prereq;
};


void print_course(Course);

int main(int argc, char** argv)
{
  int i;

    struct course course_list[10];
    Course course_schedule[10];

    Course* ptr;
    ptr = malloc(sizeof(Course)*10);


  //create some courses
  struct course course1 = {"C Programming","CIS", 205, 4, NULL};
  Course course2 = {"C++ Programming","CIS", 240, 4, &course1 };


  print_course(course1);
  print_course(course2);

}

void print_course(Course c)
{
  printf("--------\n%s\n", c.name);
  printf("%s%d\n", c.subject, c.id);
  printf("%d credits\n", c.credits);
  //check for prereq
  if(c.prereq != NULL)
  {
    printf("%s","YOU MUST FIRST TAKE\n");
    print_course(*(c.prereq));
  }
  printf("%s","--------\n");
}





