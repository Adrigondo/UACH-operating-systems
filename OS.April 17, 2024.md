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
int num=11; // -> 0x01

// Save this direction inside of my Pointer variable.
// It will save the direction 0x01 inside of 0x02.
int *deref_num=&num; // -> 0x02

```