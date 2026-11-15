#include <stdio.h>
void printExamHeader () ;
int main() {
    printExamHeader ();
    printf ("candidate Name : Rahim Ahmed \n");
    printf ("seat Numbr : cs-204\n");
    printExamHeader ();
    return 0 ;
}
void printExamHeader () {
    printf ("====================================\n");
    printf (" CSE-101 MIDTERM EXAM ADMIT SLIP \n");
    printf ("====================================\n");
}