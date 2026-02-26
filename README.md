# 🌱 Sistema de Control de Humedad en los Cultivos

El **Sistema de Control de Humedad en los Cultivos** es un proyecto de automatización agrícola diseñado para monitorear el nivel de humedad del suelo y activar un sistema de riego automático cuando sea necesario.

Su objetivo principal es optimizar el uso del agua, mejorar la eficiencia del riego y contribuir al crecimiento saludable de los cultivos mediante un sistema inteligente basado en sensores.

Este proyecto fue desarrollado como parte de una iniciativa académica orientada a la aplicación de tecnología en el sector agrícola.

---

# 🚀 Tecnologías Utilizadas

### 💻 Software

* Arduino IDE
* Lenguaje C++ (programación embebida)

### 🔌 Hardware

* Arduino
* Sensor de humedad del suelo
* Módulo relé
* Bomba de agua
* Fuente de alimentación
* Protoboard y cables

---

# ⚙️ Instalación

## 📌 Requisitos Previos

Antes de comenzar, asegúrate de tener:

* Arduino IDE instalado
* Placa Arduino
* Sensor de humedad conectado correctamente
* Bomba de agua y módulo relé cableados

---

## 🛠 Pasos para Ejecutar el Proyecto

1. Clona el repositorio:

```
git clone https://github.com/tu-usuario/nombre-del-repositorio.git
```

2. Entra en la carpeta del proyecto:

```
cd nombre-del-repositorio
```

3. Abre el archivo `sensor.ino` en Arduino IDE.

4. Conecta tu placa Arduino al computador.

5. Selecciona:

   * Tipo de placa
   * Puerto correspondiente

6. Haz clic en **Subir (Upload)**.

---

# 🔄 Funcionamiento del Sistema

1. El sensor mide constantemente la humedad del suelo.
2. El Arduino procesa la lectura.
3. Si la humedad es menor al umbral configurado:

   * Se activa el relé.
   * Se enciende la bomba de agua.
4. Cuando la humedad alcanza el nivel adecuado:

   * El sistema desactiva el riego automáticamente.

Esto permite mantener un nivel óptimo de humedad sin intervención manual constante.

---

# 🧠 Configuración del Umbral

El valor del umbral puede modificarse directamente en el código:

```cpp
if (humedad < valor_umbral) {
   // Activar riego
}
```

Este valor debe ajustarse según el tipo de cultivo y las condiciones del suelo.

---

# 📂 Estructura del Proyecto

```
📁 Sistema-Control-Humedad
 ├── sensor.ino
 ├── SISTEMA DEL CONTROL DE HUMEDAD EN LOS CULTIVOS.pdf
 └── README.md
```

---

# 📌 Aplicaciones

* Agricultura inteligente
* Invernaderos automatizados
* Sistemas de riego doméstico
* Proyectos de IoT agrícola

---

# 👨‍💻 Equipo de Desarrollo

Proyecto académico desarrollado en equipo.

**Juan David Bermúdez**

Desarrollo del código, implementación de la lógica de control y programación del microcontrolador.

---
