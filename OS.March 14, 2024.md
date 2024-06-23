Previous to the kernel, our computers have a layer before:
There exits 3 kinds of hardware.
- There are with an BIOS (Basic In Out System)/UEFI. When the kernel is initialized, the BIOS populize itself.
- There are without BIOS. There is not any way to know what hardware does it have. To install a kernel, it must be accompained with some files *dtb (device tree binary)*.

A system is an set of elements and its interactions.

#### HOMEWOKR: SEARCH THE EXACT DIRECTION WHERE THE BIOS GOES TO BE INITIALIZED

The boot sector is a direction where the BIOS is going to search code to be executed.

The kernel is the program in charge that controls the traffic of the applications. The kernel locks the memory and we can request it with *malloc* (in c), and if we don't free it, the memory will be locked until the program dies.

All the codes or programms must be in memory.

When whe talk about memory, we talk about memory of random access (RAM).
WHen we talk about disk, we takl about memory for storage. SSD, HDD, Pendrive, all this are disks. The kernel is in disk.

Windows has a subsystem to administrate the memory.
As it is multiuser, it has subsystem of users.
As it is multired, it has a subsystem of network.
As it executes files, it has a substystem of files.


# Virtual file system
We are gonna start the course with the virtual file system. It is the one with we are most familiarized.

THe programm give the orden `open("pepito.txt"")`. This orden gets to the kernel.

The kernel, first, wil resolve the route.

> * In UNIX, the disk are disposable in directories.
> * The disk is associated to a directory. These are called *mount disks*.
> * The command `mounth` retrieves all the disks mounted.
> * Using the command `tree` we can see all our files. 
> * All in UNIX are directories. With `ls -la /dev/disk/by-partitionid/` we can see our disks with `ls -la /dev/nvme0` we can see our devices.     

It will talk with VFS who is gonna talk with BTFS who is gonna talk with the bus PCI and it will talk with nvme whose contain the driver of the disc `dev/nvme0n1p2`. 

BTFS is whose interpretates the file.

