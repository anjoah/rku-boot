/*
 * (C) Copyright 2008-2014 Rockchip Electronics
 * Peter, Software Engineering, <superpeter.cai@gmail.com>.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef _RK_SECUREVERIFY_H_
#define _RK_SECUREVERIFY_H_


bool SecureModeVerifyLoader(RK28BOOT_HEAD *hdr);
bool SecureModeVerifyUbootImage(second_loader_hdr *pHead);
bool SecureModeVerifyBootImage(rk_boot_img_hdr *pHead);
bool SecureModeBootImageCheck(rk_boot_img_hdr *hdr, int unlocked);
bool SecureModeRSAKeyCheck(uint8 *pKey);
void SecureModeLockLoader(void);
uint32 SecureModeInit(void);

#endif	/* _RK_SECUREVERIFY_H_ */
