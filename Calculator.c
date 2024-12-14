// Maths Program for various operations(arithmetic,bitwise,scientific)
#include<stdio.h>
#include<math.h>
// Function Declaration for Arithmetical Operations
void arithmetic(char ch) {
    int num1,num2,operation;
    // input for first number
    printf("Enter First Number : ");
    scanf("%d",&num1);
    // input for second number
    printf("Enter Second Number : ");
    scanf("%d",&num2);
   
 
   
    
}
int main() {
    int num;
    char ch;
    // Details for operations
    printf("Welcome to Digital Calculator...\n");
    printf("Which mathematical operation do you want to perform?\n\n");
    printf("1 - Arithmetic Operation(+,-,/,*,%)\n\n");
    printf("2 - Bitwise Operation(AND,OR,NOT)\n\n");
    printf("3 - Scientific Operation(sin,cos,tan,exponent,log)\n\n");
    printf("4 - Exit \n\n");
    // Input from user
    printf("Enter  number to perform it : ");
    scanf("%d",&num);
   // Switch to handle multiple statements
   switch(num) {
       case 1:
       printf("Enter Arithmetic Operation(+,-,/,*,%) : ");
       ch = getchar(); // saves input in ch
       if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%')
            arithmetic(ch);
        else
            printf("Only Enter +,-,/,*,% ");
    //   case 2:
    //   case 3:
       case 4:
       printf("Exitted Successfully!");
       break;
       default:
       printf("Incorrect Number !!!");
   }
   
    printf("\n---------\n ");
    
    return 0;
}