#include<iostream>

class ConstRef
{
    public:
    ConstRef( int& );
    private:
    int mI;
    const int mCi;
    int& mRi;
};

class SomeType // delegating cinstructor
{
    int number;
    public:
    SomeType(int newNumber) : number(newNumber) {}
    SomeType() : SomeType(42) {} //someRype will call par.ctor and number will equal to 42
};

ConstRef::ConstRef( int& inI ): mI( inI ), mCi( inI ), mRi( inI ) 
// only way i can deal with reference is to initializt it through initializer list
{
    mI = inI; //OK
    //mCi = inI; //ERROR: cannot assign to a const
    //mRi = inI; //ERROR: uninitialized reference member
}