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