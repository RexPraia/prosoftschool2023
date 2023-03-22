#ifndef OTHERCOMPARISIONOPERATORS_H
#define OTHERCOMPARISIONOPERATORS_H
template <typename T>
class OtherComparisionOperators
{
public:
    T* leftVal = static_cast<T*>(this);
    template <typename T1>
    bool operator<=(const T1& rightVal)
    {
        return !(*leftVal > rightVal);
    }
    template <typename T1>
    bool operator>= (const T1& rightVal)
    {
        return !(*leftVal < rightVal);
    }
    template <typename T1>
    bool operator== (const T1& rightVal)
    {
        return !(*leftVal > rightVal) && !(*leftVal < rightVal);
    }
    template <typename T1>
    bool operator!= (const T1& rightVal)
    {
        return !(*leftVal == rightVal);
    }
};
#endif //OTHERCOMPARISIONOPERATORS_H
