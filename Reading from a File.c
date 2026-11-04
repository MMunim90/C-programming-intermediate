#include<stdio.h>
int main()
{
    FILE *fptr;
    int stock;
    char buffer[200], item[10], c;
    float price;

    // myfile.txt: Inventory\n100 Widget 0.29\nEnd of List
    fptr = fopen("myfile.txt", "w");

    // write to file
    fprintf(fptr, "Inventory\n");
    fprint(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);
    fclose(fptr);
    
    return 0;
}