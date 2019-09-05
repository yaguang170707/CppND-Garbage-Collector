// This class defines an element that is stored
// in the garbage collection information list.
//

//1. Declare generic class PtrDetails
//2. Create generics via templates
template <class T>
class PtrDetails
{
  /*3. all attributes and methods are going to be public, 
  because they are going to be used by other classes */
  public:

    //4. create attribute for refcount
    unsigned refcount; // current reference count

    /*5. create attribute memPtr as generic pointer for 
    storage of basic info about memory*/
    T *memPtr;         // pointer to allocated memory

    /*6. create bool attribute isArray for recognition 
    of memory type allocated*/
    /* isArray is true if memPtr points
    to an allocated array. It is false
    otherwise. */
    bool isArray; // true if pointing to array

    /*7. create attribute arraySize for working 
    with array allocation*/
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    unsigned arraySize; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

    /*8. Declare constructor for PtrDetails 
    which will have two parameters*/
    /*9. First constructor paremeter is going to be pointer 
    and second which is not required, is going to be size
     of eventual array in memory*/
    PtrDetails(T *ptr, unsigned size = 0) 
    {
        // TODO: Implement PtrDetails
        /*10. We need to construct logic of the constructor 
        which will set isArray attribute if size is 
        larger than 0*/
        this->refcount = 1; //automatically set refcount to 1 when initialising the object.
        this->arraySize = size;
        this->isArray = (this->arraySize > 0); 
        this->memPtr =  ptr;
        }
};

/*11. Create overload operator == which will be used for comparison
 between to PtrDetails object in lists. It is mandatory*/
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==
    return ob1.memPtr == ob2.memPtr;
}
