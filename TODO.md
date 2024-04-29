# 📘 C++ Programming Language Course Content

## 🌟 General Introduction to C++
- [ ] History of C++
- [ ] C++ and programming paradigms
- [ ] C++ language standards
- [ ] C++98 – C++03
- [ ] C++11
- [ ] C++14
- [ ] C++17
- [ ] C++20
- [ ] Differences between old C++ and modern C++

## 🔍 C Language and C in C++
- [ ] Transition from C to C++
- [ ] Differences in function declarations and definitions
- [ ] Differences in types and type conversions
- [ ] Valid in C, invalid in C++ situations
- [ ] C99 and C++

## 📚 Basic Concepts
- [ ] Complete and incomplete types
- [ ] One definition rule
- [ ] Value categories of expressions
- [ ] Undefined behavior
- [ ] Implementation-defined and implementation-specified behaviors
- [ ] Compiler extensions
- [ ] Scope and name lookup
- [ ] Access control
- [ ] Ambiguity errors

## 🛠 Initialization
- [ ] Uniform initialization
- [ ] Narrowing conversions
- [ ] Most vexing parse
- [ ] Direct initialization
- [ ] Value initialization
- [ ] Copy initialization
- [ ] Default initialization
- [ ] Aggregate initialization

## 📏 Type Deduction
- [ ] Auto type deduction
- [ ] Decltype type deduction
- [ ] Trailing return type
- [ ] Auto return type
- [ ] Decltype auto

## 🚦 Scoped Enum Types
- [ ] Conventional enum types
- [ ] Underlying type selection
- [ ] Type conversions
- [ ] Enum classes and scope
- [ ] Using enum declarations (C++20)

## 🧮 Constant Expressions
- [ ] Const keyword and const semantics
- [ ] Const objects
- [ ] Constexpr keyword
- [ ] Constexpr functions
- [ ] Consteval functions - C++20
- [ ] Constinit keyword - C++20

## 📎 Reference Semantics
- [ ] L value references
- [ ] R value references
- [ ] References and const semantics
- [ ] Comparison of references and pointers
- [ ] Functions that take references as parameters
- [ ] Functions returning references
- [ ] Reference life extension

## 🔄 Function Overloading
- [ ] General rules
- [ ] Function overload resolution
- [ ] Const overloading
- [ ] Extern "C" declarations
- [ ] Considerations in function overloading

## 🔄 Type-cast Operators
- [ ] Static_cast<>
- [ ] Const_cast<>
- [ ] Reinterpret_cast<>
- [ ] Dynamic_cast<> (under inheritance)

## 🏃 Inline Functions and Variables
- [ ] One definition rule
- [ ] Inline functions
- [ ] Inline variables (C++17)

## 🏛 Introduction to Classes
- [ ] Class scope
- [ ] Classes and name lookup
- [ ] Access control and data hiding
  - [ ] Public members
  - [ ] Private members
  - [ ] Protected members
- [ ] Class members
  - [ ] Data members
    - [ ] Non-static data members
    - [ ] Mutable data members
    - [ ] Static data members
  - [ ] Member functions
    - [ ] Non-static member functions
    - [ ] Const member functions
    - [ ] Static member functions
  - [ ] The `this` pointer and `*this`
  - [ ] Type members of classes
- [ ] Constructors of classes
  - [ ] Constructor initializer list
  - [ ] Delegating constructors
  - [ ] Explicit constructors
- [ ] Destructors of classes
- [ ] Calling member functions
- [ ] Classes and const correctness
  - [ ] Const class objects
  - [ ] Const member functions
- [ ] Temporary class objects
- [ ] Implicit type conversions
- [ ] Mutable keyword
- [ ] Friend declarations
  - [ ] Friend declaration and data hiding
  - [ ] Friend declarations to global functions
  - [ ] Friend declarations to member functions of classes
  - [ ] Friend declarations to classes
  - [ ] Attorney-client idiom

## 🧩 Special Member Functions and Copy Control
- [ ] Special functions of classes
  - [ ] Default constructor
  - [ ] Destructor
  - [ ] Copy constructor
  - [ ] Move constructor
  - [ ] Copy assignment
  - [ ] Move assignment
- [ ] Defaulting special functions
- [ ] Deleting special functions
- [ ] Classes and move semantics
- [ ] Rule of zero
- [ ] Rule of five
- [ ] Copy-and-swap idiom
- [ ] Copy elision
  - [ ] Copy elision through temporaries
  - [ ] Return value optimization (RVO)
  - [ ] Named return value optimization (NRVO)
  - [ ] Mandatory copy elision

## ⚙️ Operator Overloading
- [ ] General rules of operator overloading
- [ ] Member operator functions
- [ ] Global operator functions
- [ ] Overloading arithmetic operators
- [ ] Overloading comparison operators
- [ ] 3-way comparison operator (C++20)
- [ ] Overloading "++" and "--" operators
- [ ] Overloading the arrow and dereferencing operators
- [ ] Overloading the subscript operator
- [ ] Overloading the function call operator
- [ ] Type-cast operator functions
- [ ] User-defined literals

## 🌐 Dynamic Objects
- [ ] New and delete expressions
- [ ] New[] and delete[] expressions
- [ ] Operator new functions
- [ ] Operator delete functions
- [ ] Overloading operator new and operator delete functions
- [ ] Std::bad_alloc
- [ ] Std::set_new_handler and std::get_new_handler functions
- [ ] Placement new operators
- [ ] Nothrow new

## 📑 Type Alias Declarations
- [ ] Typedef declarations
- [ ] Using declarations

## 🌌 Namespaces
- [ ] Creation of namespaces
- [ ] Namespaces and name lookup
- [ ] Scope resolution operator and namespaces
- [ ] Using declaration
- [ ] Using namespace directive
- [ ] Argument-dependent lookup
- [ ] Unnamed namespace
- [ ] Nested namespaces
- [ ] Inline namespaces
- [ ] Namespace alias
- [ ] Function overloading and namespaces

## 🧬 Classes and Inheritance
- [ ] Object-oriented programming and inheritance
- [ ] Public inheritance
- [ ] Runtime polymorphism
  - [ ] Static and dynamic type
  - [ ] Virtual functions
  - [ ] Pure virtual functions
  - [ ] Virtual destructor
  - [ ] Virtual constructor idiom
  - [ ] Override contextual keyword
  - [ ] Implementation of virtual dispatch mechanism
  - [ ] Object slicing
  - [ ] Non-virtual interface idiom
- [ ] Final contextual keyword
  - [ ] Final classes
  - [ ] Final override
- [ ] Multiple inheritance
  - [ ] Scope and name lookup in multiple inheritance
  - [ ] Special functions of a class in multiple inheritance
  - [ ] Diamond formation
  - [ ] Virtual inheritance
  - [ ] Multiple inheritance and inherited constructors
  - [ ] Copying and moving operations in multiple inheritance
- [ ] Private inheritance
  - [ ] Implementation inheritance
  - [ ] Empty base optimization
- [ ] Protected inheritance
- [ ] Class-internal using declaration
- [ ] Inherited constructors
- [ ] Mixin classes

## 🚨 Exception Handling
- [ ] Exception safety
- [ ] Throwing exception objects
  - [ ] Throw statement
  - [ ] Rethrow statement
- [ ] Try blocks
- [ ] Catch blocks
  - [ ] Catch all
- [ ] Uncaught exception object
- [ ] Std::terminate and std::set_terminate functions
- [ ] Rethrow statement
- [ ] Stack unwinding
- [ ] Exceptions in constructors
- [ ] Destructors and exception throwing
- [ ] Exception handling and inheritance
- [ ] Exception handling and dynamic class objects
- [ ] Use of smart pointers for exception safety
- [ ] Function try blocks
- [ ] Noexcept specifier
- [ ] Unexpected exception object
- [ ] Std::unexpected_exception
- [ ] Std::exception class and hierarchy
  - [ ] Std::exception class and what virtual function
  - [ ] Std::logic_error
    - [ ] Std::invalid_argument, std::domain_error, std::length_error, std::out_of_range, std::future_error classes
  - [ ] Std::runtime_error
    - [ ] Std::range_error, std::overflow_error, std::underflow_error classes
  - [ ] Std::system_error
  - [ ] Std::regex_error
  - [ ] Std::bad_alloc
  - [ ] Std::bad_typeid
  - [ ] Std::bad_cast
  - [ ] Std::bad_exception
  - [ ] Std::bad_weak_ptr
  - [ ] Std::bad_function_call
- [ ] Creating custom exception classes
- [ ] Exception guarantees
  - [ ] Basic exception guarantee
  - [ ] Strong exception guarantee
  - [ ] No throw guarantee
- [ ] Std::current_exception
- [ ] Std::exception_ptr
- [ ] Std::rethrow_exception

## 🔬 Runtime Type Identification (RTTI)
- [ ] Dynamic_cast operator
- [ ] Typeid operator
- [ ] Std::typeinfo class
- [ ] Std::bad_typeid

## 🧵 Concurrency
- [ ] Memory model
- [ ] Threads and thread management
- [ ] Std::this_thread namespace
- [ ] Data race concept and avoidance of data races
- [ ] Standard mutex classes and mutex operations
- [ ] Lock_guard and unique_lock classes
- [ ] Std::condition_variable class
- [ ] Std::future and std::promise classes
- [ ] Std::async function
- [ ] Atomic types
- [ ] Task-based programming
- [ ] Std::packaged_task class
- [ ] Parallel STL algorithms

