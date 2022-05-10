#ifndef BOX_CONTAINER_HPP
#define BOX_CONTAINER_HPP
#include <iostream>
namespace BC
{
    class BoxContainer
    {
        typedef int type;
        static const size_t DEFAULT_CAPACITY{30};

    public:
        BoxContainer(const size_t capacity = DEFAULT_CAPACITY);
        BoxContainer(const BoxContainer &source);
        ~BoxContainer();
        const size_t getSize() const;
        const size_t getCapacity() const;

    private:
        size_t m_size;
        size_t m_capacity;

    protected:
    };

};

#endif