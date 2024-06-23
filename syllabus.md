> # Febrero 21


Alan Turing se murio el 7 de junio en 1954. 

# Mainframes
Las Mainframes tenían mucha capacidad de cómputo. Para ellos no tener comparación más que con humanos.
Realizar 2 tareas en paralelo era impresionante en ese entonces.
El problema con los bulbos es relativamente un problema similar a las computadoras cúanticas. Si variaba la corriente eléctrica, ya no daba el cálculo esperado.

A partir del transistor ya no le decimos dispositivos eléctricos si no electrónicos.

Como habían radios de bulbos, a los radios modernos se les decía radios de transistores.
El microprocesador es un conjunto de nanocompuertas lógicas

Las personas de Fairchild empezaron a utilizar silicio (silicon in english).
Permitió hacer los chips pequeños, fabricar muchos pequeños al mismo tiempo, se fueron colocando en las tablillas electrónicas y solo se conectaban con caminos.

Actualmente existe un proceso para hacer chips que se llama litografía. 


> # Febrero 28


Modelo de referencia OSCCI
Open System Interconected
Hardware
Transferencia de datos.
...
Usuario

Linus Torvalds quería usar el sistema operativo UNIX.
Donald Knuth escribió el libro de sistemas operativos.

Sistema operativo es el conjunto de programas que permiten
administrar el software de una computadora.



Hardware
Administrador de booteo
Kernel+Drivers
APIS
Utilerías
Aplicaciones
Nube

Ningún programa se puede comunicar directamente con el hardware.

El kernel es como un programa pero es el programa más importante.

Los piratas de sillicon valey
Tron
Revolution OS
War games
Hackers
Smalltalk


> # March 6

En los 90 Linus Torvalds construyó Linux para poder correr UNIX en su casa.

El sistema operativo OS 2 Wrap es similar a Windows.
Windows NT es una arquitectura basada en PSM. A windows le agregaron las extensiones posix.

En el 84 había tanta fragmentación y se separaron las APIs que los programas empezaron a no ser compatible. La infraestructura POSIX es como una estandarizaicón de las APIs.

CLOUD
Aplicaciones
Utilerias
API's
Kernel + Drivers
Bootloader
Hardware

El bootloader es un programa o mini sistema operativo que puede llamar el kernel, sistema operativo u otros programas.
Entonces este va a ir a buscar el bus en el que está el disco principal de la computadora.

El kernel es la parte del sistema operativo que hace la comunicación del hardware con los usuarios/programas. Se les dice drivers por que permiten controlar un elemento de hardware. No hay tanta diferencia entre programar un embedido y programar un driver.

Los pasos para ejecutar un programa en C:
1. Análisis léxicos.
2. Análisis semántico. Las cosas tienen sentido, no puedes sumar un caracter a un entero.
3. Parseo a código intermedio, genera un arbol de instrucciónes que se ejecutarán y se pueden optimizar de muchas maneras. 
4. Código objeto
5. Linker. Enlaza el código objeto con los encabezados del programa y las bibliotecas de la computadora.

> Las interfaces de programación de aplicaciones (API) son basicamente funciones de librerias.

Cada vez que abrimos un archvio, hace una llamada al sistema buscando las funciones que permiten realizar la tarea.

La utilería de sistema ayuda a configurar archivos, la computadora, etc.

El micro kernel lo que hace es que como es un sistema de comunicación y administración de procesos, los separa en submodulos para que si uno truene, no truene todo. El problema es que es muy lento. Ejemplos de microjernel son NINIX, OSX(IOS/WIN07).

El kernel de OSX y IOS se llama XNU y está basado en un sistema MACH. 

Linux le retiro cosas al modo kernel para meterlas al modo usuario para hacerlo más seguro

## Richard Stayman
Acuño la manera de hacer el software que se llama software libre.

Hace la hipotesis que si el código fuente es de conocimiento público es malo para el negocio.

Vendor lock in

Lock in->Encierro

Encierro en el sistema del vendedor (Windows, MacOS).

El EULA prohíbe hacer ingeniería inversa sobre las cosas.

La principal carácterística que debe tener un software transparente es que sea libre.

La diferencia entre fallas de seguridad y backdoors es que las backdoors son intencionales. Los gobiernos exigen dejar backdoors para que puedan entrar a los sistemas

Hay leyes que te hacen responsable de los errores que puedan tener los servidores.

Free Software Richard Fireman lo llamo Libre Software.
Modelos generativos preentrenados.

Después de la segunda decada del siglo XXI, cada quien desarrollaba su propios productos.

Linux es financiada por la Linux Fundation que recibe dinero de Microsoft.

Casi todods los sistemas de software libre piden que contribuyas a título personal.

Linux Torvalds usaba un software llamado bitkeeper de administración de código que era gratis pero que prohibía hacer competencia.

Torvalds detuvo el desarrollo de Linux algunos meses para crear Git.

GitHub se convirtió en el repositorio más grande del mundo de código abierto.

Microsoft utilizó el código de github para entrenar a GitHub Copilot. El problema con esto es todo el código malo que existe en GitHub.

Facebook originalmente estaba hecho en PHP. Tuvieron que hacer un conversor de PHP a C++.

Los bajones de android corresponden a las subidas de IOS.

El Iphone nace en el 2007 al igual que Android.

Es un sistema operativo que Google compro a una compañia que se encontraba trabajando en esto

Por cada telefono android hay un conjunto de servidores linux

# TAREA
Hay que instalar fedora

Linux es muy usado en la ciencia, las 100 supercomputadoras más potentes del mundo lo utilizan.

Suse es un linux.

Los sitemas operativos se dividen en distintas clasificaciones:
- en monotarea y multitarea
- Monousuario y multiusuario.
    Los sistemas operativos de los carros seguramente son monousuarios.
- Segun la cantidad de tareas
- Segun la cantidad de usuarios
- Según la manera en que realizan los procesamientos. Los sitemas distribuidos tienen bibliotecas distribuidas que realizan concurrencia y paralelismo que realizan la administración de la distribución de las tareas.

MPI es una biblioteca para multiproceso.

Un sistema operativo de tiempo real.

Tiene que ver con un tiempo predeterminado cada ejecución de un proceso. El tiempo real académico y hay tiempo real de marketing, respuesta inmediata.
TIempo real es poder decir que se va a prender en un tiempo especifico luego de pulsar un botón. Hay que poner un conjunto de parches para que funcione deterministamente.

Un ejemplo de sistema determinista es la alerta sísmica, puede conocer el tiempo específico con el que puede avisar un temblor.

Hay una red interna en los carros que le manda al sistema de los frenos para que funcionen si detecta que habrá una colisión.

> # March 13

CLUD
Aplicaciones
Utileria
APIs
Kernel+Drivers
Hardware

RPM (Redhat package Manager) y DEB (Debian).

Integramos una distribución de fedora donde tenemos programas incluídos.
En fedora los paquetes se administran con dbf
En debian se administran con apt.

dnf info firefox
dnf install -y firefox
sudo dnf install -y firefox
sudo dnf install -y --best firefox

snap solo se utiliza en ubuntu
flapback lo utilizan las demás distribuciones de linux.

Casi todos los programas de ubuntu permiten scripting lo cual permite automatizar procesos.

GUI. Graphic User Interface.
CLI. Command Line Interface.

Una GUI se interpreta que es intuitivo, pero originalmente, tampoco lo es. Un historial de navegación no es intuitivo si nunca le hemos dado uso.

El floppy representa el salvado de los cambios.

Un pictograma es un ícono.

Se le dice Cloud a la nube por que los diagramas de Cisco, siempre que se representaba la salida a internet, se representaba con una nube.

> # March 14

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


> # March 20

The boot sector is the sector of a persistend data storage device wich contains machine code to be loaded into random access memory and then executed by a computer systems built-in firmware.

The firmware can be EFI, OpenBoot, etc.

The file systems are ways to organize partitions or hard disks. The system asks us the file system when we format a pendrive. 

Inside the kernel we had a thing called VFS.

In unix all systems are represented as files or folders.

# Filesystem. Sistema de archivos.
Format a disk is the way to install a file system in it.

Las distintas particiones nos ayudan a prevenir la corrupción de archivos, si una de las particiones falla, otra de ellas o el boot puede intentar arreglarla.

El sistema de archivos es la manera de organizar los archivos en el disco o partición.

Cuando se apaga accidentalmente la computadora, gracias al Journaly se puede reiniciar la información si que se corrompa el sistema de archivos, en FAT32 era muy común que se corrompieran los archivos.

En UNIX la mínima unidad en donde se almacena un archivo se llama nodo I.
Hay sistemas de archivos que quieren guardar todos los archivos de manera continua, otros en donde es una lista enlazada.
Los que sean en lista enlazada tienen menos fragmentación y por ende es más rápido acceder a ellos.

Puede ser de manera discontigua y de manera contigua, pero pueden haber más formas, de almacenarlos, por ejemplo que tengan un tipo de cifrado.
Por ejemplo, hay una partición que está cifrada, que esté antes del sistema de archivos.
Podríamos tener una partición que no esté cifrada pero que el sistema de archivos esté cifrado.

Básicamente el sistema de archivo nos dice como van a estar almacenados los archivos en el disco.

Podemos entender mejor el sistema de archivos corrompiendolo. 

# Intentar corromper una memoria con sistema de archivos FAT32

El kernel permite tener múltiples sistemas de archivos sin que el usuario se de cuenta.

# Programa en C

Los permisos en UNIX dependen del sistema de tipos de archivos, no podríamos tener los mismos permisos en BFAT o FAT32.

Los archivos tienen dueños y grupos de usuarios.
El primer bit indica el tipo de archivo que es:
```bash
- # es un archivo
d # es una carpeta
c # es un dispositivo
```

El programa deberá estar haciendo llamadas al sistema de open read y close.

Las bibliotecas compartidas son archivos fuera de nuestro programa que nos trae la funcionalidad que queremos usar. El programa en C nos va a enlazar el código con la información de la biblioteca.

Cuando le decimos a un file sistem que habra un archivo el kernel le regresa un descriptor de archivos. En esté caso nos devuelve el descriptor de archivos 3 el cual va a checar el archivo y despues hay que cerrrarlo.

El descriptor de archivos 1 está asociado a la salida estandar, y está salida estándar está asociada a la salida de video.

Podríamos modificar la salida estándar a otro dispositivo como una computadora.

El compilador se da cuenta que estabamos leyendo todo el archivo en un while así que en lugar de hacer un read(3, "[A]") cada vez, lee todo de una vez.

Estas llamadas al sistema es la práctica directa con el Kernel. Las llamadas al sistema son representadas a los usuarios por medio de APIs. Nuestro programa en realizad no está escribiendo, le está solicitando al Kernel que imprima a la salida estándar. Es la base teórica de todos los sistemas operativos modernos.

La biblioteca de C, por default, cuando ejecutamos el programa, nos habre 3 descriptores de archivos:
stidin->0 # Entrada
stdout->1 # Salida
stferr->2 # Error
Siempre que abramos un archivo por default será el descriptor de archivos será el  3.

Strace es un programa que nos muestra las llamadas a sistema que está realizando un programa, es muy util para depurar, saber que está pasando

# TAREA: hacer un programa que lea un archivo que reciba de la linea de comando y lo imprima a la salida estandar.
- Leerlo linea por linea
- Realizarlo en una función aparte de main 

Hay una filosofía en los programas en UNIX: hacer una sola cosa pero hacerla bien
```c
/**
 * This are libraries (bibliotecas no librerias)
 * The header files provide us to the headers of the function
 * that a library has.
 * */
#include <stdio.h>
#include <stdlib.h>

// Function to read a single line from the file
int readLine(FILE *filePtr, char *lineBuffer, int bufferSize) {
    char ch;
    int i = 0;

    // Read until end of line or end of file
    while ((ch = fgetc(filePtr)) != '\n' && ch != EOF) {
        // Store character in buffer
        if (i < bufferSize - 1) {
            lineBuffer[i++] = ch;
        }
    }

    // Add null terminator to make it a valid string
    lineBuffer[i] = '\0';

    // Return 1 if a line was read, 0 otherwise
    return i > 0;
}

// Function to read the file line by line
void readFileLineByLine(const char *filename) {
    FILE *filePtr;
    char line[1000]; // Assuming maximum line length is 1000 characters

    if ((filePtr = fopen(filename, "r")) == NULL) {
        printf("ERROR: File (%s) cannot be opened.\n", filename);
        exit(1);
    }

    // Read each line and print it
    while (readLine(filePtr, line, sizeof(line))) {
        printf("%s\n", line);
    }

    fclose(filePtr);
}

int main(int argc, char **argv)
{

    if(argc<2){
        printf("ERROR: Filename is required");
    }

    char *file = argv[1];
    
    readFileLineByLine(file);
}
```

> # April 10

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

> # April 17

### Memoria caché
El caché es un tipo de memoria temporal de rápido acceso que

PBD, cuando le hacen peticiones al MMU de páginas.


### Hilos
Cuando se ejecutan subprocesos se realiza toda la copia de memoria al procesador. Cada vez que se lanza un subproceso, hace una copia de la memoria y ocupa memoria extra. Se tiene que hacer una solicitud de memoria al Kernel (y este a la MMU) lo cual es caro en el uso de recursos y toma más tiempo.

Cuando se ejecuta un hilo, el proceso padre y todos los subhilos comparten el mismo espacio de memoria que el programa que los levanta. 

En linux, si el proceso nunca escribe en la memoria, funcionará como un hilo, pero si escribe, se generará la copia de la memoria.

Si la commputadora tiene 4GB de RAM, cada proceso piensa que tiene 4GB.

Como la memoria RAM es un recurso limitado...

Que se acabe la memoria RAM implica que ya hay muchos procesos ejecutandose que han reservado el espacio máximo de la memoria de nuestro sistema.

##### Memoria de Kernel
El Kernel reserva una cantidad de memoria para sí mismo.

Por el contrario la memoria destinada para el uso del usuario es la memoria de usuario.

Si nos terminamos la memoria de Kernel, la computadora se crashea, ya no puede operar.

##### Memoria SWAP
En la memoria SWAP, el Kernel toma un espacio de disco. 

Cuando un proceso no está siendo utilizado, y ya nos acabamos la memoria RAM, baja el proceso al espacio de disco y lo deja dormido. Baja el proceso mas no lo ejecuta, estará dormido hasta que el Kernel lo vuelva a subir para ser ejecutado.

El uso de la memoria SWAP hace que la computadora funcione de manera lenta.

En los sistemas embebidos, tenemos el Out of Memory Manager el cual matará los procesos que ya no se están utilizando.


## Virtual memory manager
Se encuentra dentro del Kernel. Es un subsistema de memoria.
Si tenemos 2GB de RAM, y un 1GB SWAP, el virtual memory manager pensará que tenemos 3GB.

Como el Kernel le solicitará memoria a este VMM, esté nos dispondrá toda la memoria requerida sin importar si es RAM o SWAP.

Con Malloc solicitamos memoria, con Free la liberamos.

### ¿Dónde se ubica el virtual memory manager?

### MMU

---

Una variable es una etiqueta a un espacio de memoria

Cuando inicializamos una variable, el compilador sabe que tanto tamaño ocupará esta variable y reserva ese espacio en el *Data segment*.

El tamaño que tiene un apuntador nos dice la arquitectura de nuestro sistema.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // It is a variable that stores a memory direction
    char *str;
    int num = 11;
    int *deref_num = &num;
    printf("&u\n", &num);
    printf("&u\n", deref_num);

    // str = (char *)malloc(sizeof(char) * 15);

    // strncpy(str, "This is a string", sizeof(str));

    // printf("String = %s, adress %u\n", str, str);

    // // Changes the size of the block pointed by the first argument.

    // str = (char *) realloc(str, sizeof(char) * 20);

    // strcat(str, " more large");

    // printf("String = %s, adress %u\n", str, str);

}
```

> # April 25

> Un **proceso** es un programa en ejecución.

Los sistemas multitareas interrumpian los programas asignandoles *Slices* de tiempo a cada uno, durante el cual se ejecutarían pequeños nanoprocesos de cada programa.
**Preguntar a Danna pos apuntes de esta parte**

El tiempo es el recurso más valioso que tenemos en la computación.

Dado el tiempo que asignará a cada programa $d$, y la cantidad de programas $n$ podemos saber cada cuanto tiempo pasará para que el programa vuelva a tener el control con $d*(n-1)$. 

Tiempo real es que el tiempo sea determinista, que un el programa siempre se ejecute en la misma cantidad de tiempo.

En unix hay un sistema de prioridades de $-10 \to 10$. Con el concepto de prioridad le damos la capacidad a nuestro administrador de procesos para interrumpir los procesos que no tienen gran prioridad.

Una de las maneras que existen para interrumpir un proceso es por que el usuario ejecuta un proceso. La otra es debido a la priority queue.

El hardware del trackpad ejecuta multiples interrupciones para que el sistema borre y pinte el cursor en todo momento que requiera.

Una computadora con 4 cores puede ejecutar 4 operaciones atómicas realmente al mismo tiempo. A pesar de esto puede estar ejecutando una gran cantidad de proyectos.


Linux permite hacer interrupciones del código del kernel por que podemos interrumpir por ejemplo los drivers. Hay áreas de lo que podemos interrumpir, no podemos interrumpir el código de kernel que interrumpe el código de kernel.

De esta manera podemos llegar al protama **top** el cual permite visaulizar los procesos.

### Investigar que es top y como funciona

I915 es un driver asociado a la tarjeta de video
```sh
# Permite ver el contenido del bus pci, el hardware asociado al bus pci.
lspci -k | grep -i vga -410

# Con este momento podemos modificar la prioridad asignada
nice
nice --favorable
nice -n 19 time ./read_file /etc/passwd
nice -n -20 time ./read_file /etc/passwd

echo $PATH
```

Existe un pseudo filesystem llamado **proc** que nos permite ver el sistema de procesos como si fueran archivos. Los archivos tendrán de nombre numeros y si revisamos nuestro administrador de procesos veremos que en efecto corresponde a un proceso. Tenemos acceso a estructuras de datos internas del kernel, podemos acceder a información que nos ofrece el kernel en espacio de usuario. Mientras menos ocupemos espacio de kernel más seguro es nuestro programa

> # May 2

XNU era un microkernel que metió cosas al espacio de kernel.
Linux sacó cosas del espacio de kernel.

El directorio `proc` es algo muy sencillo. Dentro de proc que es un tipo de file system es la representación de los procesos en un arbol de directorios.

Al Kernel no le importa que programa se está ejecutando, solamente le importa el identificador.

Dentro del directorio proc podemos encontrar el archivo `cmdline` el cual nos mostrará la linea de comando que se ejecutó para cargar el kernel.

El kernel es un programa como embebido con esteroides, ya que se encarga de los aparatos complejos que forman parte de la computadora.
```
ps fax | grep 1485
strace ps -fax 2>&1 | teee ps.strace
strace ps -fax 2>&1 | teee ps.strace
ps faxu | more
cat /proc/3546/cmdlin
ps fax | grep gsd-disk-utility-notify
```

En linux le decimos ligas simbólicas.
Las ligas duras enlacan la etiqueta al area de disco utilizado.

El archivo `stat` nos muestra información de memoria del proceso.

Nuevo
Listo
Ejecución
Bloqueado (S, sleeping in an interrupted way)
Terminado

El estado terminado sirve para realizar todos los procesos de limpieza.

fg
vi ps.strace

vi check_process.c


> # May 8


- El subsistema de procesos dispone la información de los procesos del sistema para que sean accesibles en espacio de usuarios.
- El subsistema de archivos participa al acceder a este espacio de usuarios para leer los archivos que representan los procesos del sistema.
- El subsistema de usuarios participa ya que es el que otorga los permisos de lectura al programa para poder revisar el contenido de las carpetas y de los archivos.
- El subsistema de memoria tiene que ver al cargar en memoria cuando abrimos el achivo. Podemos solicitar memoria estática o dinámicamente.


`kthreadd` Es un hilo de kernel.

Adentro de los subdirectorios de la carpeta proc, podemos encontrar archivos que representan las estructuras de información del subsistema de procesos a modo del subsistema de archivos, es decir nos da a modo de archivo la información de el subproceso.

Los archivos y subdirectorios bajo del mismo subsistema proc que no corresponden a un número de proceso, pertenecen al kernel, es decir nos da información de los procesos del kernel.

> Un IRQ es una interrupción de hardware. La carpeta IRQ posiblemente nos diga la información de los drivers del kernel que manejan las interrupciones.


> Dentro de Interrupts tenemos la información de las interrupciones de hardware
>
> Dentro de la carpeta driver podremos encontrar información de los drivers.


Out of Memory. Permite matar procesos dentro de umbral de memoria en el que se debe encontrar

Dentro de `proc` solo encontramos archivos de lectura. Decimos que es un pseudofilesystems por que no se encuentran como información realmente almacenada

`sys` nos permite acceder a procedimientos del sistema y modificarlos a diferencia de el directorio proc.

`vmstat` reporta estadísticas de la memoria.
```sh
strace vmstat
```


### Modules
Con `lsmod` podemos ver la información de los módulos. Vemos cada módulo y a la izquierda de los módulos de los que depende cada módulo.
```sh
lsmod | grep i915


# Algunas de estas rutas son respecto al sistema del profe
ls -la /sys/class/backlight/acpi_video0/

cat /sys/class/backlight/acpi_video0/actual_brightness

# Esto debería establecer el brillo de la pantalla en 45
sudo -i # Convertir el espacio al administrador del sistema
sudo echo 45 > /sys/class/backlight/acpi_video0/


cat /sys/class/leds/smc::kbd_backlight/brightness

# Esto debería establecer el brillo del teclado en 62
sudo -i
sudo echo 62 > /sys/class/leds/smc::kbd_backlight/brightness
```

```sh
# Algunas de estas rutas son respecto al sistema del profe
ls -la /sys/class/backlight/intel_backlight/

cat /sys/class/backlight/intel_backlight/actual_brightness

# Esto debería establecer el brillo de la pantalla en 45
sudo -i # Convertir el espacio al administrador del sistema
sudo echo 45 > /sys/class/backlight/intel_backlight//


cat /sys/class/leds/smc::kbd_backlight/act

# Esto debería establecer el brillo del teclado en 62
sudo -i
sudo echo 62 > /sys/class/bleds/smc::kbd_backlight/brightness
```

lsof: List open files.
Con el podemos ver los probeamas que abrieron el archivo
upowerd es quien ejecutó el programa para cambiar el brillo. upowerd se ejecuta por root. Fue a platicar con el archivo y no con algún subsistema del archivo.


Un driver es un módulo pero no todos los modulos son drivers. No todos los módulos manejan manejan información del hardware,

802.11 Es el estandar para el wifi.
```
lspci | grep 802.11

lspci -k | grep 802.11 -A4

lspci -k | grep bcma -A4
```

Nos responde el driver que está usando `wl`.
Y el módulo que utiliza es `bcma, wl`. 
BCMA debe ser un módulo de "Broadcom" para platicar con los buses de su empresa.
En el entorno linux vemos que `bcm` no parece ser usado nunca como driver.

> En resumen, un driver se encuentra en el kernel y se comunica al hardware, el módulo solo se encuentra en el kernel aunque no se comunique al hardware.

`ls la /dev/random` es un ejemplo de ún módulo que está compilado dentro del espacio del kernel y que solo lo utiliza el kernel. Debido a esto, al listar los módulos no encontramos un módulo llamado rand.
`wl` es un módulo que está cargado en la tarjeta de red

`rmmod wl` y con el quitamos el módulo de red del sistema
`modprobe wl` vuelve a cargar el módulo en el sistema
`insmod wl` inserta un módulo

> # May 9


Podemos tener distinto tipo de archivos:
`-`
`d`
`l` 
`-`
stderr, stdin, stdout
Todos los nvme tienen el mismo mayor number. Quiere decir que el driver es el mismo para las 4 particicones.



> # May 15. Project

```c
#include <stdio.h>
#include <dirent.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void get_process_cmdline(char *filename, char *procname);
void get_process_name(char *pid, char *procname);

int main(int argc, char *argv[])
{
        struct dirent *entry;
        DIR *pDir;
        char proc_dir[] = "/proc";
        char proc_id_cmdline_dir[255];
        char proc_id_status_dir[255];
        char proc_cmdline[10000];
        char proc_name[255];
        char kernel_string[10] = "";
        FILE *fp;

        pDir = opendir(proc_dir);
        if (pDir == NULL)
        {
                printf("Cannot open directory '%s'\n", argv[1]);
                return 1;
        }

        while ((entry = readdir(pDir)) != NULL)
        {
                if (!isdigit(entry->d_name[0]))
                        continue;

                strcpy(proc_name, "");
                strcpy(kernel_string, "");

                sprintf(proc_id_cmdline_dir, "/proc/%s/cmdline", entry->d_name);
                sprintf(proc_id_status_dir, "/proc/%s/status", entry->d_name);
                get_process_cmdline(proc_id_cmdline_dir, proc_cmdline);
                get_process_name(proc_id_status_dir, proc_name);

                if (strlen(proc_cmdline) == 0)
                {
                        strcpy(kernel_string, "(Kernel)");
                }
                printf("| PID: %s %s| NAME: %s |\n%s\n\n", entry->d_name, kernel_string, proc_name, proc_cmdline);
        }

        closedir(pDir);
        return 0;
}

void get_process_cmdline(char *filename, char *procname)
{
        FILE *fp;
        char *line = NULL;
        size_t len = 0;
        procname[0] = '\0';

        // Open file in read-only mode
        fp = fopen(filename, "r");

        // If file opened successfully, then print the contents
        if (fp == NULL)
        {
                printf("Error abriendo archivo %s\n", filename);
                exit(2);
        }

        while (getline(&line, &len, fp) != -1)
        {
                sprintf(procname, "%s%s", procname, line);
        }

        fclose(fp);
        free(line);
}

void get_process_name(char *filename, char *procname)
{
        FILE *status_file;
        char *line = NULL;
        size_t len = 0;
        procname[0] = '\0';

        // Open file in read-only mode
        status_file = fopen(filename, "r");

        // If file opened successfully, then print the contents
        if (status_file == NULL)
        {
                printf("Error abriendo archivo %s\n", filename);
                exit(2);
        }

        if (getline(&line, &len, status_file) != -1)
        {
                line[strlen(line) - 1] = '\0';
                sprintf(procname, "%s", line + 6);
        }

        fclose(status_file);
        free(line);
}
```
### Funcionamiento del código
La función principal inicia abriendo el directorio /proc, que es un sistema de archivos
especial que contiene información sobre los procesos en ejecución. Proporciona
acceso al estado de cada proceso activo y hebra del sistema.
Luego, se itera a través de los elementos en este directorio. Para cada entrada, se
verifica si su nombre comienza con un dígito, ya que los procesos siempre están
representados por un número de proceso (PID), y los directorios que representan
los procesos se llaman igual que el pid del proceso.
Dentro de cada iteración se construyen las rutas a los archivos /proc/[pid]/cmdline y
/proc/[pid]/status donde [pid] es el id del proceso actual. Estos archivos contienen
información relevante del proceso, el primero, cmdline, contendrá el comando
ejecutado en la línea de comandos (ya sea por el usuario, o por un programa) para
iniciar el proceso en cuestión; si el archivo no contiene ninguna información, este se
tratará de un proceso de kernel. El segundo, status, tiene información como el
nombre del programa, el estado en el que se encuentra (Nuevo, listo, ejecución,
bloqueado, terminado), el pid, información sobre el uso de la memoria física y
virtual, entre otras cosas.
Se utilizan dos funciones auxiliares, get_process_cmdline() y get_process_name(),
para extraer esta información.
Para obtener el contenido de estos 2 archivos, utilizamos 2 funciones.
get_process_cmdline() se describe a sí misma y get_process_name() que accede
al archivo status para obtener el nombre del proceso.
Luego de realizar estas 2 acciones, comprobamos si el proceso fue un proceso de
kernel o no preguntando por el contenido que recuperamos del archivo cmdline, y
finalmente, mostramos por la salida estándar el ID del proceso, el nombre del
proceso, y su línea de comando asociada.
### ¿Cómo interacciona el programa realizado con los subsistemas del Kernel?

- El subsistema de usuarios participa ya que es el que valida que el programa y
el usuario tienen los permisos de lectura para poder revisar el contenido de
las carpetas y de los archivos.
- Hace uso del subsistema de archivos ya que estamos realizando operaciones
de lectura de archivos. La función opendir() y readdir() interactúan con el
sistema de archivos del kernel para abrir y leer el directorio /proc y sus
entradas. Así mismo, las funciones fopen(), fclose(), y getline() también
interactúan con el sistema de archivos para abrir, cerrar y leer los archivos
que contienen información sobre los procesos.
- El subsistema de procesos dispone la información de los procesos del
sistema para que sean accesibles en espacio de usuarios mediante archivos
y directorios, en otras palabras, concede un directorio virtual que contiene la
información de los procesos que están en ejecución.
- Consecuente a la apertura del archivo, hacemos uso del subsistema de
memoria. Está involucrado en la gestión de la memoria necesaria para leer y
almacenar el contenido de estos archivos en las variables locales del
programa, así como también en la liberación de la memoria después de que
se hayan utilizado estas variables.