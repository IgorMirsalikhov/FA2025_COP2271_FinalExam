#include <stdio.h>

typedef struct {
    char destination[30];   // destination city (e.g. Paris, Tokyo)
    int hour;               // departure hour   (0–23)
    int minute;             // departure minute (0–59)
} Flight;


Flight createFlight();
int canConnect(const Flight *f1, const Flight *f2);


int main() {
    Flight a = createFlight();
    Flight b = createFlight();
    if (canConnect(&a, &b))
        puts("Can connect");
    else
        puts("Cannot connect");

    return 0;
}
