# GameBoy-Run

GameBoy-Run is for running your own (GameBoy) ROMs from your computer. Or a USB. Or a CD. Or a DVD, a floppy, a friking ZIP drive. Whatever.

## For devs

The following are for developers trying to learn how this program works, so they can implement it into their own projects, or learn how the Game Link cable works.

### Compiling


To compile GameBoy-Run, you will need:

- [GBDK-2020](https://github.com/gbdk-2020/gbdk-2020) - download the binaries for your OS
- A text editor e.g. Notepad, TextEdit or [VSCode](https://code.visualstudio.com)
- A Game Boy or a Game Boy emulator; I reccommend [BGB](https://bgb.bircd.org/) [[USED FOR RUNNING THE ROM]]
- A termial (e.g. Command Prompt, Terminal, Bash)

There are multiple ways to compile Game Boy games, but follow the one for your OS (or the closest to it).

+---------------------+-----------------+-----------------+
| [Windows](#windows) | [macOS](#macos) | [Linux](#linux) |
+---------------------+-----------------+-----------------+

#### Windows

Download the previously mentioned GBDK-2020, and extract the .zip into `C:\GBDK`

Your file structure should look something like this:
```
C:\GBDK
├───bin
├───examples
├───include
└───lib
```

Navigate back to the GameBoy-Run folder, and run `build.bat`.

### File reference

- [README.md](//github.com/byemc/gameboy-run/blob/main/README.md)

you're reading it... huh.

- [LICENCE](//github.com/byemc/gameboy-run/blob/main/LICENSE)

The licence.

- [gb-run.c](//github.com/byemc/gameboy-run/blob/main/gb-run.c)

The main files for GameBoy-Run. Runs on a GameBoy, and [must be compiled first](//github.com/byemc/gameboy-run#compiling)

- [gb-run-client.py](//github.com/byemc/gameboy-run/blob/main/gb-run-client.py)

The desktop-side client software. Requires [Python](//python.org) to run, but you can just use the pre-compiled [releases](//github.com/byemc/gameboy-run/releases), or compile it yourself (using [PyInstaller](//pypi.org/project/pyinstaller))

