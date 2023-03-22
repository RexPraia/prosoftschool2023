#ifndef NEWA_H
#define NEWA_H

#include "OtherComparisionOperators.h"
class NewA : public OtherComparisionOperators<NewA>
{
public:
    NewA(int a, int b) : m_a(a), m_b(b) {}

    // Операторы сравнения с NewA
    bool operator<(const NewA& other) const
    {
        return (m_a < other.m_a) && (m_b < other.m_b);
    }

    bool operator>(const NewA& other) const
    {
        return (m_a > other.m_a) && (m_b > other.m_b);
    }

    // Операторы сравнения с int
    bool operator<(const int other) const
    {
        return m_a < other;
    }

    bool operator>(const int other) const
    {
        return m_a > other;
    }
    // Сравнение с double
    bool operator<(const double& other) const
    {
        return (m_a < other) && (m_b < other);
    }

    bool operator>(const double& other) const
    {
        return (m_a > other) && (m_b > other);
    }
    // Сравнение с char
    bool operator<(const char& other) const
    {
        return (m_a < other) && (m_b < other);
    }

    bool operator>(const char& other) const
    {
        return (m_a > other) && (m_b > other);
    }
private:
    int m_a = 0;
    int m_b = 0;
};
#endif //NEWA_H
