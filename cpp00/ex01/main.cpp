#include "phonebook.class.hpp"
#include "user.class.hpp"

bool    isthesame(const char *s1, std::string s2)
{
    size_t i = 0;

    if (!s1)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (s1[i] == s2[i])
        return (1);
    return (0);
}

int main()
{
    Phonebook instance;
    std::string buff;
    while (1)
    {
        std::cout << std::endl << std::endl << "Enter a command : ADD / SEARCH / EXIT" << std::endl;
        std::cin  >> buff;
        if (isthesame("ADD", buff))
            instance.add();
        else if (isthesame("SEARCH", buff))
            instance.search();
        else if (isthesame("EXIT", buff))
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}