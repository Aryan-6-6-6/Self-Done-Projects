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
   
   // else if to reduce compilation time as compare to multiple if's
   
   if(ch == '+')
   printf("Addition of %d and %d is : %d",num1,num2,num1 + num2);
   
   else if(ch == '-')
   printf("Substraction is : %d",num1 - num2);
   
   else if(ch =='/')
   printf("Division of %d and %d is : %d",num1,num2,num1/num2);
   
   else if(ch == '*')
   printf("Multiply of %d and %d is : %d",num1,num2,num1 * num2);
   
   else if(ch == '%')
   printf("Modulus(or Remainder) of %d and %d is : %d",num1,num2,num1 % num2);
    
}
// Function Declaration for Bitwise Operations

void bitwise(int num) {
     int num1,num2,operation;
    // input for first number
    printf("Enter First Number : ");
    scanf("%d",&num1);
    // input for second number
    printf("Enter Second Number : ");
    scanf("%d",&num2);
    
// else if to reduce compilation time as compare to multiple if's
   if(num == 1)
   printf("Bitwise AND of %d and %d is : %d",num1,num2,num1 & num2);
   
   else if(num == 2)
   printf("Bitwise OR of %d and %d is : %d",num1,num2, num1 | num2);
   
   else if(num == 3)
   printf("Bitwise NOT of %d and %d is : %d",num1,num2, ~num1, ~num2 );
   
   else if(num == 4) 
   printf("Bitwise XOR(Exclusive OR) of %d and %d is : %d",num1,num2, num1 ^ num2);
}
// Function Declaration Scientific Operations
void scientific(char ch,int x) {
    int y;
    
    switch(ch) {
        case 's':
        printf("Sin(%d) is : %f",x,sin(x));
        break; // to avoid fall through 
        
        case 'c':
        printf("Cos(%d) is : %f",x,cos(x));
        break;
        
        case 't':
        printf("Tan(%d) is : %f",x,tan(x));
        break;
        
        case 'e':
        int y;
        printf("Enter for Exponent( or power) : ");
        scanf("%d",&y);
        printf("Exponent of %d ^ %d is %d",x,y,pow(x,y));
        break;
        
        case 'l':
        printf("log(%d) is : %d",x,log(x));
        break;
    }
}

int main() {
    int num;
    char ch;
    // Details for operations
    printf("Welcome to Digital Calculator...\n");
    printf("Which mathematical operation do you want to perform?\n\n");
    printf("1 - Arithmetic Operation(+,-,/,*,%)\n\n");
    printf("2 - Bitwise Operation(AND,OR,NOT,XOR)\n\n");
    printf("3 - Scientific Operation(sinx,coxs,tanx,exponent,logx)\n\n");
    printf("4 - Exit ");
    
// Loop until case 4 is selected.
   do{
       printf("\n------------");
       // Input from user
        printf("\nEnter  number to perform it : ");
        scanf("%d",&num);
        // Switch to handle multiple statements
       switch(num) {
       case 1:
       getchar();
       printf("Enter Arithmetic Operation(+,-,/,*,%) : ");
       ch = getchar(); // saves input in ch
       if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%')
       // Function Call
            arithmetic(ch); // Line 5 to 30
        else
            printf("Only Enter +,-,/,*,% ");
            break;
    
        case 2:
        printf("\nEnter  Bitwise Operation(AND,OR,NOT,XOR)\n");
        printf(" 1 - AND \t 2 - OR \n 3 - NOT \t 4 - XOR\n");
        printf("Enter It : ");
        scanf("%d",&num);
        if(num >= 1 && num <= 4)
        // Function Call
        bitwise(num); // Line 33 to 54
        
        else
            printf("Enter a valid number !!");
            break;
            
       case 3:
       printf("Enter value of x : ");
        scanf(" %d",&num);
       printf("Enter first word of(sinx,coxs,tanx,exponent,logx) in smaller case only!\n");
       printf("Enter : ");
       scanf(" %c",&ch); // ignores whitespace
       
       if(ch == 's' || ch == 'c' || ch == 't' || ch == 'e' || ch == 'l')
       // Function call
       scientific(ch,num); // Line 57 to 84
       
       else
       printf("\nInvalid Character!");
       break;
       case 4:
       printf("Exitted Successfully!");
       break;
       default:
       printf("Incorrect Number !!!");
        }
   }while(num != 4);
   
    printf("\n---------\n ");
    
    return 0;
}