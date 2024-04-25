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