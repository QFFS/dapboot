/*
 * Copyright (c) 2016, Devan Lai
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose with or without fee is hereby granted, provided
 * that the above copyright notice and this permission notice
 * appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

#ifndef QFFS96BOOTUSEIO
#define QFFS96BOOTUSEIO 1
#endif

#ifndef APP_BASE_ADDRESS
#define APP_BASE_ADDRESS (0x08000000 + BOOTLOADER_OFFSET)
#endif
#ifndef FLASH_SIZE_OVERRIDE
#define FLASH_SIZE_OVERRIDE 0x20000
#endif
#ifndef FLASH_PAGE_SIZE
#define FLASH_PAGE_SIZE  1024
#endif
#ifndef DFU_UPLOAD_AVAILABLE
#define DFU_UPLOAD_AVAILABLE 1
#endif
#ifndef DFU_DOWNLOAD_AVAILABLE
#define DFU_DOWNLOAD_AVAILABLE 1
#endif

#ifndef HAVE_BUTTON
#define HAVE_BUTTON 0
#endif

#ifndef HAVE_LED
#define HAVE_LED 1
#endif
#ifndef LED_OPEN_DRAIN
#define LED_OPEN_DRAIN 1
#endif
#ifndef LED_GPIO_PORT
#define LED_GPIO_PORT GPIOC
#endif
#ifndef LED_GPIO_PIN
#define LED_GPIO_PIN GPIO13
#endif

#ifndef HAVE_USB_PULLUP_CONTROL
#define HAVE_USB_PULLUP_CONTROL 0
#endif

#ifndef USES_GPIOB
#define USES_GPIOB 1
#endif

#ifndef USES_GPIOC
#define USES_GPIOC 1
#endif

#ifndef BOOTKEYOUTPUT_GPIO_PORT
#define BOOTKEYOUTPUT_GPIO_PORT GPIOB
#endif
#ifndef BOOTKEYOUTPUT_GPIO_PIN
#define BOOTKEYOUTPUT_GPIO_PIN GPIO3
#endif

#ifndef BOOTKEYINPUT_GPIO_PORT
#define BOOTKEYINPUT_GPIO_PORT GPIOB
#endif
#ifndef BOOTKEYINPUT_GPIO_PIN
#define BOOTKEYINPUT_GPIO_PIN GPIO11
#endif
// #define USE_HSI 1 //for test, because 8Mhz xtal is on the road..
#endif
