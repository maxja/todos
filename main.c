#include <stdio.h>

int main(void)
{
    FILE *todo = fopen("todo.lst", "a");
    char dataToAppend[1000] = "test TODOS";
    fputs(dataToAppend, todo);
    fclose(todo);

    return 0;
}
