# Algorithms - Fourth Edition

The main purpose of this repo is to review and practice exercises in this book to have a better understanding of commomly used algorithms.


## Structure 
containersImpl directory contains implementation practices of data structures mentioned in Algorithms 4th edition


### Tips during implementation

> 1. **compiler should have access to implementation to instanciate the template with specifier type**
> To create a template class, all implementation details should be in header file(or at least visible for header file). More details in https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file#_=_
>
> there are 2 ways to do so
>   - write template class details in header file
>   - write implementation details in .tpp file and include it in hpp 
>
> 2. **virtual destructor**
> pure virtual destructor is correct when the base class is not meant to be instanciated. However for a base class type pointer that points to derived class object, compilation error will occur during deletion. So an empty body of base class destructor is needed. For me it's better to avoid pure virtual destructor.
