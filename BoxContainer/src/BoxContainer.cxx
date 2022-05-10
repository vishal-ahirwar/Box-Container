#include "../include/BoxContainer.hpp"

namespace BC
{
    BoxContainer::BoxContainer(const size_t capacity){
        this->m_capacity=capacity;
    };
    BoxContainer::BoxContainer(const BoxContainer &source){

    };
    BoxContainer::~BoxContainer()
    {

    };
    const size_t BoxContainer::getSize() const
    {
        return this->m_size;
    };
    const size_t BoxContainer::getCapacity() const
    {
        return this->m_capacity;
    };

}