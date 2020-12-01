# Object-Oriented Programming class @ PUT
*Repository of assignments for "Object-Oriented Programming"  classes - 3rd semester of AI @ Poznań University of Technology*

 
## Drug cabinet (C++)
**The goal of this project is to implement a drug cabinet that stores drugs available in a pharmacy.**
Drugs are stored in 4 classes created with the help of 3 abstract classes. 
Console application generates a user-defined number of drugs with a certain probability. Each drug has its own ```toString()``` method that prints specifics regarding each drug.
There is a separate class ```Pandemic()``` that removes the drug from the cabinet with a probability ```pDisease``` . With probability ```1 - pRecovery``` drug may be added back to the cabinet.

Classes are contained in separate .h and .cpp files.
```main.cpp``` runs the program, allows the user to define the number of drugs and probability of drug removal. It also generates drugs and stores them in a template class ```Cabinet```.

## Beer queue (C++)
**Program creates a user-defined array of lecturers and students. Then it iterates over the array invoking methods specific for Lecturer and Student.**

The goal of this program is to declare an array of objects of two different classes: ```Lecturer```, ```Student``` - both inherit from class ```Human```. Both classes have the same methods' names but behave differently.   This way, when iterating over the array of instances of both classes - when the current element is an instance of type ```Lecturer``` it invokes methods ```IntroduceYourself()``` and ```Drink()``` specific to ```Lecturer```; when the current element is an instance of class ```Student```, ```IntroduceYourself()``` nad ```Drink()``` specific for the ```Student``` are invoked.
<br> <br>
Code should be divided into separete files for class declaration and defining methods and constructors. This code is not divided in order to meet requirements of the teacher.


## Shopping simulator (Java - currently under development)
**Desktop application to simulate behaviors of clients**

**Back-end**:classes (products, shops, suppliers, consumers), threads, semaphores and monitors, thread synchronization, solving deadlocks 
<br>
**Front-end**: control panel to generate clients and suppliers, map panel (every client is drawn on the map), buttons for removal of instances, windows that appear after clicking on an object
