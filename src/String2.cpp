// Constructors/Destructors

template <class T>
String2<T>::String2(T _a) : _x(_a)
{
}

template <class T>
String2<T>::~String2()
{
}

template <class T>
void String2<T>::hello()
{
    std::cout << this->_x << std::endl;
}
