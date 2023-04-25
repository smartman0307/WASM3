<img align="right" width="30%" src="/extra/screenshot-android.png">

# <img src="/extra/wasm-symbol.svg" width="32" height="32" /> Wasm3


[![WAPM](https://img.shields.io/badge/wapm-v0.4.2-654ff0?style=flat-square&logo=WebAssembly)](https://wapm.io/package/vshymanskyy/wasm3)
[![GitHub issues](https://img.shields.io/github/issues-raw/wasm3/wasm3?style=flat-square&label=issues&color=success)](https://github.com/wasm3/wasm3/issues)
[![Tests status](https://img.shields.io/github/workflow/status/wasm3/wasm3/tests/master?style=flat-square&logo=github&label=tests)](https://github.com/wasm3/wasm3/actions)
[![GitHub license](https://img.shields.io/badge/license-MIT-blue?style=flat-square)](https://github.com/wasm3/wasm3)


A high performance WebAssembly interpreter written in C.

**∼ 15.8x faster** than other wasm interpreters (`wac`, `life`, `wasm-micro-runtime`)  
**∼ 4..5x slower** than state of the art wasm `JIT` engines (`liftoff`, `cranelift`)  
**∼ 11.5x slower** than native execution  
<sub>* Based on [**CoreMark 1.0** benchmark](/PERFORMANCE.md). Your mileage may vary.</sub>

## Getting Started

Here's an online demo and a small [getting started](https://wapm.io/package/vshymanskyy/wasm3) guide:

[![LIVE DEMO](extra/button.png)](https://webassembly.sh/?run-command=wapm%20install%20vshymanskyy/wasm3)

## Status

`wasm3` passes the [WebAssembly spec testsuite](https://github.com/WebAssembly/spec/tree/master/test/core) and is able to run many `WASI` apps.

Minimum useful system requirements: **~64Kb** for code and **~10Kb** RAM

`wasm3` runs on a wide range of [platforms](/platforms):
- <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/linux.svg" width="18" height="18" /> Linux,
<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/windows.svg" width="18" height="18" /> Windows,
<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/apple.svg" width="18" height="18" /> OS X
- <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/android.svg" width="18" height="18" /> Android,
<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/apple.svg" width="18" height="18" /> iOS
- <img src="https://cdn.rawgit.com/feathericons/feather/master/icons/wifi.svg" width="18" height="18" /> **OpenWRT**-enabled routers
- <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/raspberrypi.svg" width="18" height="18" /> Raspberry Pi, Orange Pi and other **SBC**s
- <img src="https://cdn.rawgit.com/feathericons/feather/master/icons/cpu.svg" width="18" height="18" /> **MCU**s:  
 Arduino MKR*, Arduino Due, Particle Photon,  
 ESP8266, ESP32, Air602 (W600), nRF52, nRF51,  
 Blue Pill (STM32F103C8T6), MXChip AZ3166 (EMW3166),  
 Maix (K210), HiFive1 (E310), Fomu (ICE40UP5K), ATmega1284 etc.
- <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/mozillafirefox.svg" width="18" height="18" /> <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/googlechrome.svg" width="18" height="18" /> <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/safari.svg" width="18" height="18" /> <img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/microsoftedge.svg" width="18" height="18" /> Browsers... yes, using WebAssembly itself!
- <img src="extra/wasm-symbol.svg" width="18" height="18" /> `wasm3` can execute `wasm3` (self-hosting)

`wasm3` is built on top of [Steven Massey](https://github.com/soundandform)'s novel [interpreter topology](/source/README.md), with:
- Wasm 1.0 spec conformance
- `WASI` support
- Support of `x86`, `x64`, `ARM`, `MIPS`, `RISC-V`, `Xtensa` architectures

## Motivation

**Why using "slow interpreter", instead of "fast JIT"?**

In many situations, speed is not the main concern. Runtime executable size, code density, memory usage, startup latency can be all improved with the interpreter approach. Portability and security are much easier to achieve and maintain. Also on some platforms (i.e. iOS and WebAssembly itself) you can't generate executable code pages in runtime (so JIT is unavailable).

## Building

See [DEV.md](./DEV.md)

## Testing & Fuzzing

See [test/README.md](./test/README.md)

## Performance

See [PERFORMANCE.md](./PERFORMANCE.md)

### License
This project is released under The MIT License (MIT)
