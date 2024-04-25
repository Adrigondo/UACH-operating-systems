It's too important to have tools that allow us to pair revisions. If someone show us an error, is to important to recognize it and thanks for the correction.

We talk about there exists multiple subsystem that the Kernel uses to administrate the computer. 

# Memory System

In the Von Neuman model, the data and the code are stored in the memory. When the memory is not administrated, the code can access to any space of memory, and this allow the code to get important data like passwords.

If the kernel is well implemented, this can't happen. The kernel apart a memory space for the code, the stack and the heap.

#### Text segment.
It saves the ejecutable code of the program.

#### Data segment
It saves the global data, and initialized data.

#### BSS segment
It saves data that is not initialized yet. It saves the tags of the variables, constants, etc.

    The program is the file that contains the code. The process is that code being executed by memory.

There is static memory mapped to physical memory.

The kernel will never give us direct access to the memory, it will give us access to the MMU, the MMU manage the physical memory in minimum units called pages. The size of a page depends of the architecture of the memory. If we ask to the MMU for a byte of memory, it will give us 4kb. 

We can use groups of pages, to do the kernel think that the memory is continue, but in reality, it is a translation to diferent pages of physical memory.
The kernel request to the MMU the pages that our program requires.

##### Shared memory
In the case of shared libraries in linux. If there are many processes that are trying to access to the same library, the kernel only charges it one time and 
A shared library is diferent that an static library. When we work with operating systems is more convenient to use shared libraries, because it allows to diferent programs use the same instance of memory where it is the library.

ldd show us with what shared libraries is a program linked.