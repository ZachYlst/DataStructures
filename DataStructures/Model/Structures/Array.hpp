//
//  Array.hpp
//  DataStructures
//
//  Created by Ylst, Zachary on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
public:
    template <class Type>
    Array<Type> :: Array(int size)
    {
        assert(size > 0);
        this->size = size;
        
        internalArray = new Type[size];
    }
    Array<Type>(int size);
    
    template <class Type>
    Array<Type> :: Array(const Array<Type> & toCopy)
    {
        this->size = toCopy.getSize();
        
        //Build Data Structure
        internalArray = new Type[size];
        
        for (int index = 0; index < size; index++)
        {
            internalArray[index] = toCopy[index];
        }
    }
    Array<Type>(const Array<Type> & toCopy);
    template <class Type>
    Array<Type> :: ~Array()
    {
        delete[] internalArray;
    }
    ~Array<Type>();
    
    template <class Type>
    Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
    {
        if (&toAssign != this)
        {
            if (size != toAssign.getSize())
            {
                delete[] internalArray;
                size = toAssign.getSize();
                internalArray = new Type[size];
            }
            
            for (int index = 0; index < size; index++)
            {
                internalArray[index] = toAssign[index];
            }
        }
        return *this;
    }
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator[] (int index);
    Type operator[] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
private:
    Type * internalArray;
    int size;
}

#endif /* Array_hpp */