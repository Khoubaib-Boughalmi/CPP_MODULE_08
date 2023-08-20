template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) {
    *this = other;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
const MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
    if (this!= &other)
        this->c = other.c;
    return (*this);
}

