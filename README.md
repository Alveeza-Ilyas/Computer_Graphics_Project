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

The underlying program logic isolates engine updates from baseline graphics rendering using the following operational blocks:

### 1. `drawCar(int x)`
Accepts a dynamically incremented tracking factor `x` to continually translate the vehicle bounding box across the active coordinate plane while keeping pixel alignment intact.

### 2. `drawBackground(int cloudShift)`
Manages structural background layering sequentially per frame cycle:
- **Static Assets:** Draws background landscape grids, color floods, trees, house architecture, and coordinate-bound geometric figures.
- **Dynamic Assets:** Alters local horizontal matrices using the passed variable `cloudShift` to simulate a continuous environment flow.

### 3. `main()`
Acts as the central execution engine:
- Spawns a high-resolution workspace window measuring $1800 \times 800$ pixels.
- Controls the animation playback using a custom standard step loop with 10-pixel tracking updates.
- Holds execution inside an optimal 50ms interval loop to manage system thread usage cleanly, waiting for an active user key interaction to terminate gracefully.

---

## 🚀 Compilation Guide (For Dev-C++)

If you need to manually recompile the `.cpp` file inside Dev-C++, verify these configuration settings:

1. Open your workspace folder inside Dev-C++.
2. Go to **Project Options** (or press `Alt + P`) $\rightarrow$ **Parameters**.
3. Under the **Linker** text zone, ensure your compiler parameters explicitly load the following operational hooks:
   ```text
   -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

