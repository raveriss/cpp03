# **Projet CPP03 - École 42**

## Introduction
CPP03 explores the concept of inheritance in C++, demonstrating its utility in building complex object hierarchies. This module continues the exploration of object-oriented programming (OOP) principles using the C++98 standard, with a specific focus on how classes can inherit attributes and behaviors from other classes.

## Structure du Projet
Each exercise in this module progressively builds on the concept of inheritance, introducing more complex scenarios and challenges:

### Exercise 00: Aaaaand... OPEN!
- **Directory:** `ex00/`
- **Files to submit:**
  - `Makefile`
  - `main.cpp`
  - `ClapTrap.{h, hpp}`
  - `ClapTrap.cpp`

#### Functionality
Implementation of the `ClapTrap` class with basic functionalities like attack, take damage, and repair. This exercise sets the foundation for understanding how base classes work.

### Exercise 01: Serena, my love!
- **Directory:** `ex01/`
- **Files to submit:** 
  - Files from Exercise 00
  - `ScavTrap.{h, hpp}`
  - `ScavTrap.cpp`

#### Functionality
Introduction of the `ScavTrap` class, which inherits from `ClapTrap`. This exercise expands on the use of inheritance and constructor/destructor chaining.

### Exercise 02: Repetitive work
- **Directory:** `ex02/`
- **Files to submit:**
  - Files from previous exercises
  - `FragTrap.{h, hpp}`
  - `FragTrap.cpp`

#### Functionality
Creation of the `FragTrap` class, derived from `ClapTrap`, and showcasing how inherited classes can override parent functionalities while introducing their own unique features.

### Exercise 03: Now it’s weird!
- **Directory:** `ex03/`
- **Files to submit:**
  - Files from previous exercises
  - `DiamondTrap.{h, hpp}`
  - `DiamondTrap.cpp`

#### Functionality
Development of the `DiamondTrap` class, which inherits from both `ScavTrap` and `FragTrap`. This exercise highlights the complexities and potential pitfalls of multiple inheritance.

## Compilation and Execution
To compile an exercise, navigate to the corresponding directory and use `make`. Each program can be run from the command line to demonstrate the designed functionalities.

## Ressources
The exercises use standard C++98 features to explore inheritance, with references to common C++ resources and the official documentation.
