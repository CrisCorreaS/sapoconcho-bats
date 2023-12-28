# sapoconcho-bats
![Badge en Desarollo](https://img.shields.io/badge/STATUS-EN%20DESAROLLO-green)
<img align="right" alt="License MIT" src="https://img.shields.io/badge/LICENSE-MIT-green" /> <br/>
<img alt="arduino" src="https://img.shields.io/badge/-Arduino-00878F?style=flat-square&logo=arduino&logoColor=white" />
<br/>
## Introducción

Sapoconcho BATS es un emocionante proyecto que combina dos proyectos previos de Bricolabs:

- **BATS (Bricolabs Arduino Training Shield):** Esta es una idea original de un escudo (shield) diseñado para Arduino UNO, que incorpora muchos de los componentes utilizados en cursos de aprendizaje inicial sobre esta plataforma.

- **Sapoconcho:** Sapoconcho es un proyecto de robot de aprendizaje imprimible (printbot), que es versátil, sencillo y asequible.

Para obtener más información sobre el proyecto, puedes consultar la [documentación del proyecto en el sitio de Bricolabs](https://bricolabs.cc/wiki/proyectos/sapoconcho_bats).

![](https://bricolabs.cc/wiki/_media/proyectos/sapoconcho/bats4_12.jpg)


## Iniciación a la programación física con Arduino

Los pines asignados en la BATS son los siguientes::

- **0-1**: Recepción y transmisión (RX/TX) en el zócalo Bluetooth.
- **2**: LED Neopixel (desconectable).
- **3-4**: Pulsadores/Botones (desconectables).
  - Botón verde: **3**
  - Botón rojo: **4**
- **5**: Sin conectar.
- **6-9**: Control de motores.
  - Motor izquierdo: **6** (PWM) y **7** 
  - Motor derecho: **8** y **9** (PWM)
- **10-12**: LEDs de colores.
  - Led verde: **10**
  - Led amarilla: **11**
  - Led roja: **12**
- **13**: Zumbador (desconectable).
- **A0**: LDR (desconectable).
- **A1-A2**: Potenciómetros (desconectables).
  - Potenciómetro A1: **15**
  - Potenciómetro A2: **16**
- **A3-A5**: Sin conectar.

## Estructura
Este repositorio estará estructurado en base a los diferentes proyectos de programación en Arduino que se encuentran en la guía documentada de Bricolabs.
En cada carpeta de los proyectos se encontrarán diferentes ejercicios de prácticas explicados. Los proyectos recogidos en este repositorio son los siguientes:
- [Proyecto 1. Salidas digitales](https://github.com/CrisCorreaS/sapoconcho-bats/tree/main/Proyecto%201.%20Salidas%20digitales)
- [Proyecto 2: Instrucciones repetidas en bucle](https://github.com/CrisCorreaS/sapoconcho-bats/tree/main/Proyecto%202.%20Instrucciones%20repetidas%20en%20bucle)
- [Proyecto 3: Salidas "analógicas"](https://github.com/CrisCorreaS/sapoconcho-bats/tree/main/Proyecto%203.%20Salidas%20'anal%C3%B3gicas')
- [Proyecto 4: Entradas digitales y analógicas](https://github.com/CrisCorreaS/sapoconcho-bats/tree/main/Proyecto%204.%20Entradas%20digitales%20y%20anal%C3%B3gicas)
- Proyecto 5: Tareas condicionadas
- Proyecto 6: Librerías de funciones
- Proyecto 7: Funciones en Arduino

## Uso
A continuación, se describen los pasos básicos para comenzar a utilizar Sapoconcho BATS en tus proyectos:

- Clona el repositorio en tu máquina local: ```git clone https://github.com/CrisCorreaS/sapoconcho-bats.git```
- Conecta la placa BATS a tu Arduino UNO.
- Carga el código de ejemplo en tu Arduino utilizando el entorno de desarrollo de Arduino.
- Comienza a experimentar con los componentes de la placa BATS y desarrolla tus propios proyectos de programación física

## Contribuciones
Agradecemos las contribuciones de la comunidad para mejorar y hacer crecer el proyecto Sapoconcho BATS. Si deseas contribuir, sigue estos pasos:

- Realiza un fork del repositorio en GitHub.
- Clona tu repositorio fork en tu máquina local: ```git clone https://github.com/tu-usuario/sapoconcho-bats.git```
- Crea una rama para tu nueva función o corrección de errores: ```git checkout -b nombre-de-la-rama```
- Realiza tus cambios y asegúrate de que todo funcione correctamente.
- Haz commit de tus cambios y sube la rama a tu repositorio fork en GitHub: ```git commit -m "Descripción de los cambios"``` y ```git push origin nombre-de-la-rama```
- Crea un Pull Request (PR) desde tu repositorio fork en GitHub.
- Estaremos encantados de revisar tu PR y considerar tu contribución al proyecto.

## Agradecimientos
Expresar nuestro agradecimiento a todos los colaboradores y entusiastas de Bricolabs que han impulsado y contribuido a hacer que Sapoconcho BATS sea un proyecto abierto, accesible y documentado. Gracias a todos ellos, con este proyecto podremos aprender:
- **Electrónica básica:** componentes, montajes sencillos y soldadura.
- **Programación básica:** programación física con variables, funciones y librerías.
- **Iniciación a los robots móviles:** montaje de chasis con formato tortuga, electrónica de control y sensores.. ¡Gracias por ser parte de nuestra comunidad y por apoyar este proyecto!
