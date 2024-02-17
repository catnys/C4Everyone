# Inheritance in C++

Inheritance is a fundamental concept in object-oriented programming that allows you to create new classes based on existing classes. This README provides an overview of inheritance in C++ and key terms associated with it.

## Table of Contents

1. [Introduction to Inheritance](#introduction-to-inheritance)
2. [Base and Derived Classes](#base-and-derived-classes)
3. [Types of Inheritance](#types-of-inheritance)
4. [Access Control](#access-control)
5. [Key Terms](#key-terms)
6. [Is-A Relationship](#Is-A-Relationshi)
7. [Has-A Relationship](#Is-A-Relationshi)

## Introduction to Inheritance

Inheritance is a mechanism in C++ that allows a class (the derived class) to inherit properties and behaviors from another class (the base class). It promotes code reusability and the creation of a hierarchy of classes.

## Base and Derived Classes

- **Base Class**: The class whose properties and behaviors are inherited by another class. It is also known as the parent class or superclass.

- **Derived Class**: The class that inherits properties and behaviors from a base class. It is also known as the child class or subclass.

## Types of Inheritance

C++ supports different types of inheritance:

- **Single Inheritance**: A derived class inherits from a single base class.

- **Multiple Inheritance**: A derived class inherits from multiple base classes.

- **Multilevel Inheritance**: A chain of inheritance where a derived class becomes the base class for another class.

- **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.

- **Hybrid Inheritance**: A combination of multiple inheritance types.

## Access Control

Access control specifies how members (variables and functions) of a base class are accessible to a derived class:

- **Public Inheritance**: All public members of the base class remain public in the derived class. Protected members become protected in the derived class.

- **Protected Inheritance**: All public and protected members of the base class become protected in the derived class.

- **Private Inheritance**: All members of the base class become private in the derived class.

## Key Terms

- **Base Class**: The class whose properties and behaviors are inherited by another class.

- **Derived Class**: The class that inherits properties and behaviors from a base class.

- **Inheritance**: The process of creating a new class by inheriting properties and behaviors from an existing class.

- **Single Inheritance**: Inheriting from a single base class.

- **Multiple Inheritance**: Inheriting from multiple base classes.

- **Multilevel Inheritance**: A chain of inheritance.

- **Hierarchical Inheritance**: Multiple derived classes from a single base class.

- **Hybrid Inheritance**: A combination of multiple inheritance types.

- **Access Control**: Determines the visibility and accessibility of base class members in the derived class.


## "is-a" Relationship

An "is-a" relationship, also known as inheritance, signifies that one class is a specialized version of another class. In other words, it implies that a subclass (derived class) shares characteristics and behaviors with its superclass (base class). 

For example, if you have a base class called `Animal` and a subclass named `Dog`, you can say that "Dog is-a type of Animal." In C++, this relationship is established through inheritance, where the `Dog` class inherits properties and behaviors from the `Animal` class.

```cpp
class Animal {
    // Base class members
};

class Dog : public Animal {
    // Dog inherits from Animal
};
```


## "has-a" Relationship
A "has-a" relationship, also known as composition or aggregation, represents the concept that one class contains another class as a part of its structure. It indicates that a class is composed of or contains objects of another class.

For instance, if you have a class Car that contains a reference to an object of the class Engine, you can say that "Car has-a Engine." This relationship is created by including an instance of the other class as a member within the class.

```cpp
class Engine {
    // Engine class members
};

class Car {
    Engine carEngine; // Car has an Engine
};
```


## Wrapping It Up: "is-a" and "has-a" in Plain English 🎀🌟

So, you might be wondering, what's the deal with these "is-a" and "has-a" relationships? Well, don't fret, because we're about to break it down in the simplest way possible.

**"is-a" Relationship**: This is like saying, "I'm a little like my awesome big sister!" 🧚‍♀️ Imagine you have a class called `Animal`, and then you create a special class called `Dog`. When you say "Dog is-a type of Animal," it's like acknowledging that our furry friend "Dog" shares some of the cool things from the "Animal" family. In code, it's like a magical inheritance spell!

```cpp
class Animal {
    // Base class magic 🪄
};

class Dog : public Animal {
    // Dog inherits the magic 🌟
};
```
"has-a" Relationship: This one's as easy as saying, "My ride has an awesome stereo!" 🚗🎵 Imagine you have a class called Car, and it's got an incredible sound system inside. When you say "Car has-a Engine," it's like revealing that your ride is all set with a powerful engine. In code, it's like making sure the pieces fit together!


```cpp
class Engine {
    // Engine stuff 🚀
};

class Car {
    Engine carEngine; // Car's secret weapon! 💻
};
```
And there you have it! These "is-a" and "has-a" relationships are like the secret sauce of object-oriented programming. They help you build amazing, organized, and super-maintainable code that's as fabulous as your favorite outfit. Now go out there and create some enchanting classes and objects! 

Thank youu for reading this writeup ✨👩‍💻