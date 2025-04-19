# galactic

*A short description of the keyboard/project*

* Keyboard Maintainer: [Sim Domingo](https://github.com/meatcoder)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb galactic -km default

Note that you can replace `default` with the name of any keymap folder found in `keyboards/galactic/keymaps/`.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

To flash the firmware, enter bootloader mode and use the command:

    qmk flash -kb galactic -km default

You can enter bootloader mode as set in the Bootloader section below. 

You can also manually copy the galactic_{keymap}.uf2 file found in the qmk_firmware folder to the keyboard's mass storage device. This will automatically flash the firmware, reboot the keyboard, and exit bootloader mode.

## Bootloader Mode

* **Bootmagic**: Hold down the key at (0,0) in the matrix and plug in the keyboard
* **Physical button**: Briefly press the button on the bottom of the keyboard labeled `DFU` to enter bootloader mode
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
