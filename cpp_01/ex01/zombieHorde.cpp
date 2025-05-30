#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        return (NULL);
    Zombie* zombies = new (std::nothrow) Zombie[N];
    for (int i = 0; i < N; i++){
        zombies[i].set_name(name);
    }
    return (zombies);
}
