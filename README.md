# Lilith Configs

- Installation

-Requirements
- An existing [Lilith](https://github.com/ohto121/lilith) installation.
- Git.

1. Clone this repository

git clone https://github.com/e2js/lilith-configs.git
cd lilith-configs

2. Copy the configurations

Copy the configuration headers into Lilith's `config/` directory:

bash
cp lilith/*.h ~/lilith/config/

Note: This assumes your Lilith source directory is located at `~/lilith`. If yours is somewhere else, replace that path accordingly.

Back up your existing configuration files before copying, as files with matching names will be overwritten.

3. Rebuild Lilith

After copying the configurations, rebuild Lilith using the build instructions from the [original repository](https://github.com/ohto121/lilith).

Configuration files

| File | Description |
|---|---|
| `config_animation.h` | Animation settings |
| `config_appearance.h` | Appearance and visual settings |
| `config_bar.h` | Status bar configuration |
| `config_input.h` | Input settings |
| `config_keys.h` | Keyboard shortcuts |

Repository structure

text
lilith-configs/
├── lilith/
│   ├── config_animation.h
│   ├── config_appearance.h
│   ├── config_bar.h
│   ├── config_input.h
│   └── config_keys.h
├── showcased/
│   ├── lilith-unzoomed.png
│   └── lilith-zoomed.png
└── README.md


-Credits

- [Lilith](https://github.com/ohto121/lilith) — Original Wayland compositor by ohto121.
