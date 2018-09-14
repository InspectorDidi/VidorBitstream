/*
 * qr.h
 *
 *  Created on: May 16, 2018
 *      Author: max
 */

#ifndef QR_H_
#define QR_H_

#include <alt_types.h>

/**
 *
 */
typedef struct {
  alt_u32  xs ;
  alt_u32  xe ;
  alt_u32  ys ;
  alt_u32  ye ;
  alt_u32  valid ;
}sQrPnt, *psQrPnt;

#define QR_PT_DET_NUM 12

/**
 */
typedef struct{
  alt_u32 sts;
  sQrPnt  pt[QR_PT_DET_NUM];
}sQrDet, *psQrDet;

void qrInit(int devs);
void qrCmd(void);
void qrLoop(void);

#endif /* QR_H_ */
