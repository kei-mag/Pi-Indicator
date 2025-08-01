# Pi-Indicator
Small scripts that display the current status of the Raspberry Pi on a character display module.  
In addition, you can add power button to your Raspberry Pi.

## How to make display module

### Requirements
- SO1602A (OLED character display module)
- Button
- LED



## How to use
1. Download artifacts from latest release.
2. Run `install.sh` to install.
3. After rebooting, status will be displayed on display module.
4. You ca

### Displayed information
**When start booting**  
```
<Hostname>
Starting...
```
**15sec. later**  
```
CPU <usage>%  TEMP <temperature>°C
RAM <usage>%  HDD <usage>%
```
  ↑  
  |  changed by 1sec.  
  ↓  
```
IP <local ip>
uptime 301d24h16m
```

## How to build this scripts

### Requirements
- GCC compiler
- pigpio

Run the following command to build:
```bash
make build
```

Then run the following command to install Pi-Indicator to `/usr/local/Pi-Indicator`:
```bash
make install
```