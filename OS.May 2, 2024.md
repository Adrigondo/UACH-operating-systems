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
```
