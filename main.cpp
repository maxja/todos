#include <fstream>

int main(void)
{
    std::ofstream todofile;
    todofile.open("todo.lst", std::ios_base::app);
    todofile << "test TODOS";
    todofile.close();

    return 0;
}
