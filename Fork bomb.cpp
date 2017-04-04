//Fork bomb
//Warning: Save all your work before testing this code, everrything will hang and a restart will be needed.
#include <unistd.h>
int main(void)
{
    while(1) fork();
}