#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

bool isthesame(std::string reading, char *occurence)
{
    size_t i = 0;

    while (occurence && reading[i] == occurence[i] && occurence[i])
    {
        std::cout << "occ i :" << occurence[i] << std::endl;
        i++;
    }
    if (!occurence[i])
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (1);

    std::ifstream og_file;
    std::ofstream new_file;
    std::string   new_name = av[1];
    size_t              i = 0;
    size_t              j = 0;

    og_file.open(av[1], og_file.in);

    if (og_file.rdstate() == og_file.failbit)
        return (dprintf(2, "ERROR : \"%s\" can't be opened\n", av[1]), 1);
    new_name += ".replace";
    new_file.open(new_name.c_str(), new_file.out);
    if (new_file.rdstate() == new_file.failbit)
        return (dprintf(2, "ERROR : \"%s\" can't be opened\n", (new_name + ".replace").c_str()), 1);

    og_file.seekg(0, og_file.end);
    j = og_file.tellg();
    og_file.seekg(0, og_file.beg);

    char                *buff = (char *)std::malloc(j);
    og_file.read(buff, j);
    buff[j] = '\0';
    new_name = buff;
    
    while (new_name[i])
    {
        if (new_name[i] == av[2][0])
        {
            if (isthesame(&new_name[i], av[2]))
            {
                new_file << av[3];
                i += std::strlen(av[2]);
            }
            else
                new_file << new_name[i++];
        }
        else
            new_file << new_name[i++];
    }
}