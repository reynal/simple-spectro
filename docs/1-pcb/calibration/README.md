# Calibration of the RGB leds

The sensor is able to generate a frequency of maximum 500 kHz and that is directly proportional to the energy of the light.

In order to use the full range of frequency it is important to be at the limit of 500 kHz by changing the 3 resistors that limit the current to the leds and labelled R G B.

<img src='pcb-description.001.jpeg' width='600' />

By default the resistors are 1k which prevents any saturation.

There is a special mode designed to calibrate the resistors: menu -> Utilities -> Test LEDs

If the resistors are not strong enough the sensor will saturate and a value just over 50000 will appear (only one acquisition is done instead of 10). A correct value should be somewhere between 350'000 and 450'000.


Example (on D1)

| R red | Red (Hz) | R green | Green (Hz) | R blue | Blue (Hz) | R uv | UV (Hz) |
|-------|----------|---------|------------|--------|-----------|------|---------|
| 1k    | 95240    | 1k      | 185230     | 1k     | 201170    | 22   | 9940    |
| 330   | 276500   | 330     | 416200     | 470    | 383320    |      |         |
| 220   | 383700   |         |            | 330    | 506290    |      |         |

Example (on D3)

| R red | Red (Hz) | R green | Green (Hz) | R blue | Blue (Hz) | R uv | UV (Hz) |
|-------|----------|---------|------------|--------|-----------|------|---------|
| 1k    | 53670    | 1k      | 124882     | 1k     | 62626     | 22   | 11059   |
| 150   | 326653   | 330     | 290518     | 220    | 304900    |      |         |

Example (on D4)

| R red | Red (Hz) | R green | Green (Hz) | R blue | Blue (Hz) | R uv | UV (Hz) |
|-------|----------|---------|------------|--------|-----------|------|---------|
| 1k    | 97830    | 1k      | 245500     | 1k     | 142391     | 22   | 74888   |
| 150   | Problem, just one blink 53513   | 470     | 430676     | 330    |  352858   |      |         |

Example (on D5)

| R red | Red (Hz) | R green | Green (Hz) | R blue | Blue (Hz) | R uv | UV (Hz) |
|-------|----------|---------|------------|--------|-----------|------|---------|
| 1k    | 103874     | 1k      | 295699     | 1k     | 243137     | 22   | 11484   |
| 150   | problem 1 blink  | 330     | problem 1 blink    | 330    | problem 1 blink   |      |         |
