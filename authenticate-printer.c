#include <stdio.h>

#include "authenticate-printer-library/authenticate_printer.h"

#define MAX_SIZE_USERNAME 20

int main() {
  puts("Username:");
  char username[MAX_SIZE_USERNAME];
  char *result = fgets(username, MAX_SIZE_USERNAME, stdin);
  if (result == NULL) {
    puts("Unable to read the username");
    return 1;
  }
  
  // get rid of the newline
  for (int i = 0; i < MAX_SIZE_USERNAME; i++) {
    if (username[i] == '\n') {
      username[i] = '\0';
    }
  }

  authenticate_jobs(username);
  
  return 0;
}
