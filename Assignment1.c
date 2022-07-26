/* This is a program which emulates an ATM machine. It begins with a four option menu numbered 1-4,
where by selecting one on the menu you decide to input the 4 digit PIN.  Number 2 allows the user to change their PIN, 
which then has to be verified by entering the correct pin again.
Number 3 displays the number of succesful and incorrrect PIN's entered and 4 exits the program.
I stored the main body of the program in a Do-While loop to ensure the menu appeared at least once.
It also contained a switch statement with seversl nested If statements.

I used visual Studio Code to compile and store my program.
Harry O'Donnell 21/11/2020
*/

#include <stdio.h>

int main(void)
{
    // The variables are being defined 
    int pin = 0;
    int menu = 0;
    int num_pins = 0;
    int verify_pin = 0;
    int valid_pin = 0;
    int invalid_pin = 0;


    // menu design must display number options 1-4
    // do while used as it must run through at least once.
    // Start Do-While
    do {
        printf("      Menu: Enter Option 1-4             ");
        printf("\n==================================");
        printf("\n1. Enter Pin and Verify Correct \n");
        printf("2. Change Pin \n");
        printf("3. The Number of times you have guessed the pin correctly and incorrectly \n");
        printf("4. Exit program \n");
        printf("==================================\n");
        scanf("%d", &menu);

        // Start Switch Statement
        switch (menu)
        {
        //If '1' is entered the program enters Case 1.
        case 1:
        
            //Outer If statement 
            if (pin != 1234)
            {
              
              
              pin == verify_pin;
              printf("\nEnter your 4 digit pin: ");
              scanf("%d", &pin);
                
              // Inner If statement
              if (pin == verify_pin || pin == 1234)
                {
                valid_pin = valid_pin + 1;
                printf("Correct pin \n");
                }
              // End Inner If

              //Inner Else-If
              else if (pin != 1234 && pin != verify_pin)
                {
                printf("incorrect pin \n");
                invalid_pin = invalid_pin + 1;
                }
              //End Else-if

            }
            //End Outer If
        break;

        //Case 2 is used to change the pin and verify the correct pin.
        // If '2' is entered the program enters Case 2.
        case 2:
            printf("\nChange pin by Entering a 4 digit number: ");
            scanf("%04d", &pin);
            pin == verify_pin;

            //This If statement Validates the pin to be 4 digits
            if (pin > 999 && pin < 9999)
            //Outer If
            {
                printf("verify new pin: ");
                scanf("%d", &verify_pin);

                // Inner If
                if (pin == verify_pin)
                {
                    printf("Congratulations your pin has been succesfully changed to %04d\n\n", verify_pin);
                }
                // End Inner if

                // Inner else-if
                else if (pin != verify_pin)
                {
                    printf("Error Pin not correct \n");
                    pin == 1234;
                }
                // End inner else-if
            
            //End Outer if
            }
            
            else
            //Else Statement valiadates the incorrect inputs
            {
                printf("invalid operation, please enter a 4 digit pin\n");
            //End if
            }
            
            break;

         /*
         'Case 3' is used to show the amount of time a correct or incorrect pin was pin. The operation is created in 'Case 1' inside an If statement (valid_pin = valid_pin + 1).
         The same applies for Invalid_pin, which is also found in 'case 1'. The valid + 1 creates a counter affect, whcih counts every time the If statement is entered.
         */
         //If '3' is entered the program executes Case 3.
        case 3:
            printf("\nThe Number of times you have guessed the pin correctly: %d \n\n", valid_pin);
            printf("The Number of times you have guessed the pin incorrectly: %d\n\n", invalid_pin);
            break;

        /* when 4 is entered the loop ends the program terminates  */
        // When '4' is entered the program executes case 4.
        case 4:
            printf("Exit Program \n");
            break;

            
        // If a number less than 1 or greater than 4 is entered this message will be displayed.
        default:
            printf("Invalid operation, Enter a number between 1 and 4 on the menu. \n");

            break;
        }

    /*
    This if statement validates the input of a character key using getchar(). 
    The if statement runs for getchar() when it isn't equal to '\n' (Enter). It ends when it is equal to '\n'.
    It validates the input of characters and floating points.
    It clears the input Buffer.
    */

    if (getchar() != '\n')
        {
        printf("\n Invalid operation, you must enter an integer!! \n");
        }
    
    // End do-while statement 
    } while (menu != 4);



    return 0;
}