#ifndef _DVD_DEVICE_H_
#define _DVD_DEVICE_H_

/**
 * @file dvd_device.h
 *
 * @brief functions to access a DVD device or file (DVD-ROM, .ISO, .UDF)
 */

bool dvd_device_access(const char *device_filename);

int dvd_device_open(const char *device_filename);

int dvd_device_close(const int dvd_fd);

bool dvd_device_is_hardware(const char *device_filename);

bool dvd_device_is_image(const char *device_filename);

#endif
