#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> // For sleep() function

#define MAX_WITHDRAW 10000
#define MAX_DEPOSIT 20000
#define INIT_BALANCE 10000000
#define PIN_LENGTH 5
#define OTP_LENGTH 7

void process() {
    printf("\nPlease Wait, We are Processing...\n");
    sleep(1);
}

void generateOTP(char *otp, int length) {
    const char digits[] = "0123456789";
    for (int i = 0; i < length - 1; i++) {
        otp[i] = digits[rand() % 10];
    }
    otp[length - 1] = '\0';
}

int main() {
    char pin[PIN_LENGTH], gpin[PIN_LENGTH], npin[PIN_LENGTH];
    int pin_try = 3, choice, amt, balance = INIT_BALANCE;
    char response, phoneNumber[15], otp[OTP_LENGTH], user_otp[OTP_LENGTH];

    srand(time(0));
    printf("\n\tWELCOME TO GREENLEAF ATM SYSTEM\n");
    printf("\t--------------------------------\n");
    printf("CREATE PIN (4-digits): ");
    scanf("%4s", pin);

    while (1) {
        printf("\nDO YOU REMEMBER THE PIN? (Y/N): ");
        scanf(" %c", &response);

        if (response == 'Y' || response == 'y') {
            while (pin_try > 0) {
                printf("\nENTER YOUR PIN: ");
                scanf("%4s", gpin);
                
                if (strcmp(pin, gpin) == 0) {
                    process();
                    printf("\n1: Cash Withdraw\n2: Cash Deposit\n3: Check Balance\n4: Exit\nEnter choice: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                            printf("Enter Withdraw Amount: ");
                            scanf("%d", &amt);
                            if (amt % 100 != 0) {
                                printf("\nEnter amount in multiples of 100.\n");
                            } else if (amt > balance) {
                                printf("\nInsufficient Balance!\n");
                            } else if (amt > MAX_WITHDRAW) {
                                printf("\nMax withdrawal limit is %d.\n", MAX_WITHDRAW);
                            } else {
                                process();
                                balance -= amt;
                                printf("\nWithdraw Successful! Updated Balance: %d\n", balance);
                            }
                            break;
                        case 2:
                            printf("\nEnter Deposit Amount: ");
                            scanf("%d", &amt);
                            if (amt > MAX_DEPOSIT) {
                                printf("\nMax deposit limit is %d.\n", MAX_DEPOSIT);
                            } else {
                                process();
                                balance += amt;
                                printf("\nDeposit Successful! Updated Balance: %d\n", balance);
                            }
                            break;
                        case 3:
                            process();
                            printf("\nYour Current Balance: %d\n", balance);
                            break;
                        case 4:
                            printf("\nThank you for using GREENLEAF ATM!\n");
                            return 0;
                        default:
                            printf("\nInvalid Choice. Try Again!\n");
                    }
                } else {
                    pin_try--;
                    if (pin_try > 0) {
                        printf("\nInvalid PIN! %d attempts left.\n", pin_try);
                    } else {
                        printf("\nYour account is locked due to multiple incorrect attempts.\n");
                        return 1;
                    }
                }
            }
        } else {
            printf("\nEnter Your Phone Number for OTP Verification: ");
            scanf("%s", phoneNumber);
            generateOTP(otp, OTP_LENGTH);
            printf("Generated OTP for %s: %s\n", phoneNumber, otp);
            
            printf("Enter OTP: ");
            scanf("%s", user_otp);
            
            if (strcmp(otp, user_otp) == 0) {
                printf("\nOTP Verified! Enter New PIN (4-digits): ");
                scanf("%4s", npin);
                strcpy(pin, npin);
                printf("\nPIN Updated Successfully!\n");
            } else {
                printf("\nInvalid OTP!\n");
            }
        }
    }
    return 0;
}