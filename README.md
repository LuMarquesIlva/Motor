# MOTOR

Try to build and see what libraries you lack

use **_UV_** and **_MESON_** to build

## Steps Linux:
  ```bash
    uv sync
    uv run build.py
  ```

## Steps Termux:
  ```bash
    pkg update && pkg upgrade
    pkg install python3 uv git cmake build-essential ninja x11-repo
    pkg install gtk3 libglvnd-dev
    git clone https://github.com/LuMarquesIlva/Motor.git
    cd Motor
    uv sync
    uv run build.py
  ```
