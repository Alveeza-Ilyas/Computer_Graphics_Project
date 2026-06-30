# 🚗 2D Car Animation

An optimized 2D vector graphic simulation developed in C++ using the **Borland Graphics Interface (BGI)** framework. The application delivers continuous frame rendering, smooth object translation, and parallax depth effects to simulate a moving vehicle traversing across a scenic landscape.

---

## 🌟 Key Features

- **Flicker-Free Double Buffering:** Manages active rendering operations over hidden off-screen memory segments (`setactivepage`) before flipping visuals (`setvisualpage`), effectively eliminating screen tearing and flickering.
- **Procedural Sky Parallax:** Implements a boundary-checking algorithm that translates cloud vectors across the horizontal plane, resetting positions automatically to generate an infinite scrolling depth effect.
- **Custom Vector Graphics Assets:** Features custom mathematical geometry drawings forming a detailed vehicle model (with light-cyan window panels and wheel hubs), a multi-tiered house structure, dynamic sunburst fields, and a character vignette.

---

## 🛠️ Development Specifications

- **Development IDE:** Dev-C++ (Bundled with the standard **WinBGIm** graphics framework extension suite)
- **Core Library Matrix:**
  - `<graphics.h>` - Window handling lifecycle, polygon drawing primitives, and background color flooding.
  - `<dos.h>` - Regulates application frame loops via microsecond `delay()` tracking.
  - `<conio.h>` - Tracks non-blocking terminal keyboard flags via `getch()` to stop the loop.
  - `<math.h>` - Computes radial coordinate values for the sun rays using trigonometric structures (`sin`, `cos`).

---

## 📂 Codebase Modular Breakdown

- **`drawCar(int x)`**: Accepts a dynamically incremented tracking factor `x` to continually translate the vehicle bounding box across the active coordinate plane while keeping pixel alignment intact.
- **`drawBackground(int cloudShift)`**: Manages structural background layering sequentially per frame cycle. Alters local horizontal matrices of the clouds using the passed variable `cloudShift` to simulate continuous environment flow.
- **`main()`**: Spawns a high-resolution workspace window measuring $1800 \times 800$ pixels, controls the animation playback using a 10-pixel stepping loop, and applies a uniform frame delay of 50ms.

---

## 🚀 Dev-C++ Compilation Settings

If you are reconstructing this system inside Dev-C++, configure your compiler workspace links manually to support the graphics library:

1. Open your code inside Dev-C++.
2. Press `Alt + P` to open **Project Options** $\rightarrow$ Navigate to the **Parameters** tab.
3. Input the exact library hooks inside your **Linker** command container box:
   ```text
   -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

```

4. Save the configuration settings and press `F11` to compile, build, and launch the application engine.

```

```
