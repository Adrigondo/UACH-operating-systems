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