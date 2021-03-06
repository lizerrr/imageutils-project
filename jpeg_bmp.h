/**
 * @file   jpeg_bmp.h
 * @author Late Lee 
 * @date   2012-7-1 12:47:56
 * @brief  
 *
 */

#ifndef _JPEG_BMP_H
#define _JPEG_BMP_H

#ifdef __cplusplus
extern "C" {
#endif

// ���Ժ�����JPEG-->BMP
int jpg_to_bmp(const char* jpg_file, const char* bmp_file);
int jpg_to_bmp1(const char* jpg_file, const char* bmp_file);
int jpg_to_bmp2(const char* jpg_file, const char* bmp_file);
int jpg_to_bmp3(const char* jpg_file, const char* bmp_file);
int jpg_to_bmp4(const char* jpg_file, const char* bmp_file);

// ���Ժ�����BMP-->JPEG
int bmp_to_jpg(const char* bmp_file, const char* jpg_file);
int bmp_to_jpg1(const char* bmp_file, const char* jpg_file);
int bmp_to_jpg2(const char* bmp_file, const char* jpg_file);

int jpg_to_yuv(const char* jpg_file, const char* yuv_file);
int yuv_to_jpg(const char* yuv_file, const char* jpg_file, int yuv_type);

int bmp_to_yuv(const char* bmp_file, const char* yuv_file);
int yuv_to_bmp(const char* yuv_file, const char* bmp_file, int yuv_type);

#ifdef __cplusplus
};
#endif

#endif /* _JPEG_BMP_H */