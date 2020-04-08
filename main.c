#include <stdio.h>
#include <stdlib.h>

void tidak_berhenti();

int main()
{
    tidak_berhenti();
}

void tidak_berhenti()
{
    printf("Ctrl-Break untuk berhenti\n");
    tidak_berhenti();
}
