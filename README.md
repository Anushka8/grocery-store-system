# A smart grocery store management system

## Topics covered

- Object Oriented Programming

  - Polymorphism
  - Encapsulation
  - Inheritance

- Memory Management

  - Smart Pointers
  - Custom `new` and `delete`

- Data Structures (STL)

  - Vectors
  - Maps
  - Queues
  - Sets

- File I/O Serialization

  - Saving and loading data

- Multithreading

## Design

- All header and source code files are in `src`.
- `main` executitble is created in `build`.
- `Makefile` compiles and links programs

## Structure

- Using abstraction for all entities.
- Manager and Cashier classes are derived from Employee class.
- Inherited classes have display details overriden.

| Syntax                   | What it means                                              | Use case                                   |
| ------------------------ | ---------------------------------------------------------- | ------------------------------------------ |
| `Product product`        | Pass by value (makes a **copy**)                           | Slower for large objects                   |
| `Product& product`       | Pass by **reference** (no copy, can **modify** original)   | Use when function needs to modify object   |
| `const Product& product` | Pass by **reference**, but **can't modify** it (read-only) | Best for read-only access to large objects |
