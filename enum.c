#include <stdio.h>

#include <stdlib.h>


enum status {
  processing = 102,
  resolved = 200,
  movedPermanently = 301,
  unauthorized = 401,
  notFound = 404,
  serverError = 500  
}serverStatus;

int main() {
    serverStatus = notFound;

    switch (serverStatus)
    {
        case 102:
            printf("server is processing");
            break;
        case 200:
            printf("OKKK");
            break;
        case 301:
            printf("Redirecting as it is moved permanently");
            break;
        case 401:
            printf("You are unauthorized");
            break;
        case 404:
            printf("What you're looking for is not found");
            break;
        case 500:
            printf("Sorry, server error");
            break;
        default:
            break;
    }
}