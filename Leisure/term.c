/*#include <stdio.h>
#include <time.h>

int main() {
  char location[100];
  struct tm *timeinfo;
  time_t now;

  printf("Enter the location: ");
  scanf("%s", location);

  // Get current time and date
  now = time(NULL);
  timeinfo = localtime(&now);

  printf("Current date and time in %s: %s\n", location, asctime(timeinfo));

  return 0;
}*/
/*#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        // Get current time
        time_t currentTime;
        struct tm *localTime;
        time(&currentTime);
        localTime = localtime(&currentTime);

        // Display time
        printf("%02d:%02d:%02d\r", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
        
        // Wait for one second
        sleep(1);
    }

    return 0;
}*/
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void displayBlockDigits(int digit) {
    const char* blockDigits[][7] = {
        {
            "      ",
            " ████ ",
            " █  █ ",
            " █  █ ",
            " █  █ ",
            " ████ ",
            "      "
        },
        { 
            "      ",
            " ██   ",
            "  █   ",
            "  █   ",
            "  █   ",
            " ███  ",
            "      "
        },
        {
            "      ",
            " ████ ",
            "    █ ",
            " ████ ",
            " █    ",
            " ████ ",
            "      "
        },
        {
            "      ",
            " ████ ",
            "    █ ",
            "  ███ ",
            "    █ ",
            " ████ ",
            "      "
        },
        {
            "      ",
            " █  █ ",
            " █  █ ",
            " ████ ",
            "    █ ",
            "    █ ",
            "      "
        },
        {
            "      ",
            " ████ ",
            " █    ",
            " ████ ",
            "    █ ",
            " ████ ",
            "      "
        },
        {
            "      ",
            " ████ ",
            " █    ",
            " ████ ",
            " █  █ ",
            " ████ ",
            "      "
        },
        {
            "      ",
            " ████ ",
            "    █ ",
            "   ███",
            "    █ ",
            "    █ ",
            "      "
        },
        {
            "      ",
            " █████",
            " █   █",
            " █████",
            " █   █",
            " █████",
            "      "
        },
        {
            "      ",
            " █████",
            " █   █",
            " █████",
            "     █",
            "     █",
            "      "
        }
    };

    for (int i = 0; i < 7; i++) {
        printf("%s\n  ", blockDigits[digit][i]);
    }
}

/*
 * Function: displayTime
 * ---------------------
 * Displays the current time using block characters.
 *
 * hour: The current hour.
 * min: The current minute.
 * sec: The current second.
 */
void displayTime(int hour, int min, int sec) {
    displayBlockDigits(hour / 10);
    displayBlockDigits(hour % 10);

    printf("     ");
    printf("\n\n");

    displayBlockDigits(min / 10);
    displayBlockDigits(min % 10);

    printf("     ");
    printf("\n\n");

    displayBlockDigits(sec / 10);
    displayBlockDigits(sec % 10);

    // Add a newline at the end to separate the lines
    printf("\n");
}

int main() {
    while (1) {
        // Get current time
        time_t currentTime;
        struct tm *localTime;
        time(&currentTime);
        localTime = localtime(&currentTime);

        // Display time using block characters
        displayTime(localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

        // Wait for 1 second
        sleep(1);

        // Clear the screen
        printf("\033[H\033[J\n");
    }

    return 0;
}
