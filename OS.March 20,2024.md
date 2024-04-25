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