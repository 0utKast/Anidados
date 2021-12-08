/*#include <iostream>

namespace foo
{
    namespace goo // goo es un namespace dentro del namespace foo
    {
        int sumar(int x, int y)
        {
            return x + y;
        }
    }
}

int main()
{
    std::cout << foo::goo::sumar(1, 2) << '\n';
    return 0;
}*/




















#include <iostream>

namespace foo::goo // goo es un namespace dentro del namespace foo  (estilo C++17)
{
    int sumar(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    std::cout << foo::goo::sumar(1, 2) << '\n';
    return 0;
}