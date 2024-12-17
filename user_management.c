// User Management System
#include<stdio.h>
#include<string.h>

struct userManagement {
    char username[30]; // for input
    char password[10]; // for input
    char check_name[30]; // 
    char check_password[10]; // for password
};

int main() {
    int userCount = 0;
    struct userManagement user[12];
    int n = 0;
    
    printf("User management system \n");
    printf("1. Register \n 2. Login \n 3. Exit\n");
    
    
// Loop until exit
    do{ 
    printf("\nSelect an option ");
    scanf("%d",&n);
     getchar(); // removes (or takes) '\n'
    // options for registration
        switch(n){
                case 1: // Registration
                printf("Register as a new user. \n");
                
                // Input for full name
                printf("Enter your  name : ");
                gets(user[userCount].username); // used to read character after space

                // input for password
                printf("Enter password(without space) : ");
                gets(user[userCount].password);
                
                // string copy for comparing name
                strcpy(user[userCount].check_name,user[userCount].username);
                // string copy for comparing password
                strcpy(user[userCount].check_password,user[userCount].password);
                
                printf("Registered Successfully !");
                userCount++;
                break;
                case 2: {// Login 
                char name[30],Password[10];
                // Input for name
                printf("Enter name : ");
                gets(name);
                
                // input for password
                printf("Enter password(without space) : ");
                
                gets(Password);

                int found = 0;
                for(int i=0; i<userCount; i++) {

                if(strcmp(name,user[i].username) == 0 && strcmp(Password,user[i].password) == 0)         
                    printf("Login successfully! Welcome %s",user[i].username);
                
                else
                printf("Login Failed!! Incorrect username or password"); 
                break; 
                }
            } // case 2 completed

                case 3: // exit
                printf("Exitted Successfully!");
                break;

            default:
            printf("Enter a valid number!!");
            break;
        }
    } while(n != 3);

    return 0;
}