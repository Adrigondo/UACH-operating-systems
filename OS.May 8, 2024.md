
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