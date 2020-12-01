# Drug cabinet
**Implement drug storage that collects all the drugs available at a pharmacy**

### Class hierarchy
There are 7 classes used to define drugs. The main is `Drug`. `Drug` is divided into `Swallowed` and `Vaccine`. Swallowed is divided into `DietarySupplement` and `Painkiller`. `Vaccine` is divided into `Non_Repeatable` and `Repeatable`. `Drug`, `Swallowed` and `Vaccine` is abstract. Each non-abstract has its own `toString()` method that displays all information about the drug.
<br>
There is a class `Pandemic` that for each drug in the cabinet removes the drug from the storage with `pDisease` and adds the removed drug back to the cabinet with probability `1- pRecovery`. 

### Implementation
**C++**, console application, classes divided between .h and .cpp files. .h files hold class implementation, .cpp describe mathods used in classes and contain constructors for non-abstract classes.
<br>
In `main.cpp` user defines number of drugs, `pDisease`, `pRecovery`. Drugs are generated, stored in `Cabinet`. The progrum runs `Pandemic()` in a loop until the cabinet is empty.

### Launch
Run `main.cpp` file. Instruction provided in console upon running will guide you through steps to successfully create a cabinet and run pandemic.
