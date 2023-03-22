#ifndef NEWB_H
#define NEWB_H

#include "OtherComparisionOperators.h"
#include <string>
class NewB : public OtherComparisionOperators<NewB>
{
public:
    NewB(std::string val) : m_stringView(val) {}
    bool operator<(const NewB& other) const
    {
        return m_stringView < other.m_stringView;
    }
    bool operator>(const NewB& other) const
    {
        return m_stringView > other.m_stringView;
    }
private:
    std::string m_stringView;

};
#endif //NEWB_H
