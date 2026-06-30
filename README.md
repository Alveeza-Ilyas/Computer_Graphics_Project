# 🚗 2D Car Animation

This is a C++ graphics application that creates a smooth 2D animation of a car driving along a road against a detailed, moving scenic background. It uses the Borland Graphics Interface (BGI) via the standard `<graphics.h>` library.

---

## 🚀 Features

* **Smooth Double-Buffered Animation:** Utilizes `setactivepage` and `setvisualpage` to perform off-screen rendering, eliminating flickering during the animation loop.


* **Detailed 2D Car Model:** Draws a customizable red car complete with windows, distinct tire hubs, and a yellow headlight.


* **Dynamic Scrolling Elements:** Features an automated cloud system that seamlessly wraps around the screen boundaries to create a sense of forward motion.


* **Rich Scenery Layout:** Renders a full background including a sun with geometric rays, a road with dividers, a styled magenta and yellow house, trees, and a decorative labeled stick-figure vignette ("HERO!!") holding a book.



---

## 🛠️ Requirements & Prerequisites

To compile and run this program, you will need a C++ development environment configured to support the legacy graphics framework:

* **Compiler:** A C++ compiler that supports DEV C++ graphics headers or modern equivalents like **WinBGIm** (commonly used with Dev-C++ or Code::Blocks).
* **Dependencies:** The program relies on the following standard and graphics libraries:


* `<graphics.h>` (For window lifecycle and primitive drawing tools)


* `<dos.h>` (For the `delay()` timing function)


* `<conio.h>` (For keyboard input checking via `getch()`)


* `<math.h>` (For calculating sun ray coordinates using `cos` and `sin`)





---

## 📂 Code Architecture

The source code is structured cleanly into modular drawing functions:

### 1. `drawCar(int x)`

Handles rendering the vehicle asset. It accepts an offset parameter `x` to seamlessly update its horizontal positioning across frames.

### 2. `drawBackground(int cloudShift)`

Constructs the environment layer by layer:

* **Static Layers:** Renders the sky, grass terrain, house structure, static trees, and the sun.


* **Dynamic Layers:** Offsets the cloud positions based on the `cloudShift` integer to simulate parallax motion.



### 3. `main()`

The engine of the application:

* Initializes a high-resolution graphics window ($1800 \times 800$ pixels).


* Runs a `for` loop updating coordinates by increments of 10 pixels.


* Applies a uniform frame delay of 50 milliseconds to regulate pacing before safely closing the graphics canvas on a key press.
