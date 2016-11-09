/*
 * Codepage definitions for libqcow
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBQCOW_CODEPAGE_H )
#define _LIBQCOW_CODEPAGE_H

#include <libqcow/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBQCOW_CODEPAGES
{
	LIBQCOW_CODEPAGE_ASCII				= 20127,

	LIBQCOW_CODEPAGE_ISO_8859_1			= 28591,
	LIBQCOW_CODEPAGE_ISO_8859_2			= 28592,
	LIBQCOW_CODEPAGE_ISO_8859_3			= 28593,
	LIBQCOW_CODEPAGE_ISO_8859_4			= 28594,
	LIBQCOW_CODEPAGE_ISO_8859_5			= 28595,
	LIBQCOW_CODEPAGE_ISO_8859_6			= 28596,
	LIBQCOW_CODEPAGE_ISO_8859_7			= 28597,
	LIBQCOW_CODEPAGE_ISO_8859_8			= 28598,
	LIBQCOW_CODEPAGE_ISO_8859_9			= 28599,
	LIBQCOW_CODEPAGE_ISO_8859_10			= 28600,
	LIBQCOW_CODEPAGE_ISO_8859_11			= 28601,
	LIBQCOW_CODEPAGE_ISO_8859_13			= 28603,
	LIBQCOW_CODEPAGE_ISO_8859_14			= 28604,
	LIBQCOW_CODEPAGE_ISO_8859_15			= 28605,
	LIBQCOW_CODEPAGE_ISO_8859_16			= 28606,

	LIBQCOW_CODEPAGE_KOI8_R				= 20866,
	LIBQCOW_CODEPAGE_KOI8_U				= 21866,

	LIBQCOW_CODEPAGE_WINDOWS_874			= 874,
	LIBQCOW_CODEPAGE_WINDOWS_932			= 932,
	LIBQCOW_CODEPAGE_WINDOWS_936			= 936,
	LIBQCOW_CODEPAGE_WINDOWS_949			= 949,
	LIBQCOW_CODEPAGE_WINDOWS_950			= 950,
	LIBQCOW_CODEPAGE_WINDOWS_1250			= 1250,
	LIBQCOW_CODEPAGE_WINDOWS_1251			= 1251,
	LIBQCOW_CODEPAGE_WINDOWS_1252			= 1252,
	LIBQCOW_CODEPAGE_WINDOWS_1253			= 1253,
	LIBQCOW_CODEPAGE_WINDOWS_1254			= 1254,
	LIBQCOW_CODEPAGE_WINDOWS_1255			= 1255,
	LIBQCOW_CODEPAGE_WINDOWS_1256			= 1256,
	LIBQCOW_CODEPAGE_WINDOWS_1257			= 1257,
	LIBQCOW_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBQCOW_CODEPAGE_US_ASCII			LIBQCOW_CODEPAGE_ASCII

#define LIBQCOW_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBQCOW_CODEPAGE_ISO_8859_1
#define LIBQCOW_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBQCOW_CODEPAGE_ISO_8859_2
#define LIBQCOW_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBQCOW_CODEPAGE_ISO_8859_3
#define LIBQCOW_CODEPAGE_ISO_NORTH_EUROPEAN		LIBQCOW_CODEPAGE_ISO_8859_4
#define LIBQCOW_CODEPAGE_ISO_CYRILLIC			LIBQCOW_CODEPAGE_ISO_8859_5
#define LIBQCOW_CODEPAGE_ISO_ARABIC			LIBQCOW_CODEPAGE_ISO_8859_6
#define LIBQCOW_CODEPAGE_ISO_GREEK			LIBQCOW_CODEPAGE_ISO_8859_7
#define LIBQCOW_CODEPAGE_ISO_HEBREW			LIBQCOW_CODEPAGE_ISO_8859_8
#define LIBQCOW_CODEPAGE_ISO_TURKISH			LIBQCOW_CODEPAGE_ISO_8859_9
#define LIBQCOW_CODEPAGE_ISO_NORDIC			LIBQCOW_CODEPAGE_ISO_8859_10
#define LIBQCOW_CODEPAGE_ISO_THAI			LIBQCOW_CODEPAGE_ISO_8859_11
#define LIBQCOW_CODEPAGE_ISO_BALTIC			LIBQCOW_CODEPAGE_ISO_8859_13
#define LIBQCOW_CODEPAGE_ISO_CELTIC			LIBQCOW_CODEPAGE_ISO_8859_14

#define LIBQCOW_CODEPAGE_ISO_LATIN_1			LIBQCOW_CODEPAGE_ISO_8859_1
#define LIBQCOW_CODEPAGE_ISO_LATIN_2			LIBQCOW_CODEPAGE_ISO_8859_2
#define LIBQCOW_CODEPAGE_ISO_LATIN_3			LIBQCOW_CODEPAGE_ISO_8859_3
#define LIBQCOW_CODEPAGE_ISO_LATIN_4			LIBQCOW_CODEPAGE_ISO_8859_4
#define LIBQCOW_CODEPAGE_ISO_LATIN_5			LIBQCOW_CODEPAGE_ISO_8859_9
#define LIBQCOW_CODEPAGE_ISO_LATIN_6			LIBQCOW_CODEPAGE_ISO_8859_10
#define LIBQCOW_CODEPAGE_ISO_LATIN_7			LIBQCOW_CODEPAGE_ISO_8859_13
#define LIBQCOW_CODEPAGE_ISO_LATIN_8			LIBQCOW_CODEPAGE_ISO_8859_14
#define LIBQCOW_CODEPAGE_ISO_LATIN_9			LIBQCOW_CODEPAGE_ISO_8859_15
#define LIBQCOW_CODEPAGE_ISO_LATIN_10			LIBQCOW_CODEPAGE_ISO_8859_16

#define LIBQCOW_CODEPAGE_KOI8_RUSSIAN			LIBQCOW_CODEPAGE_KOI8_R
#define LIBQCOW_CODEPAGE_KOI8_UKRAINIAN			LIBQCOW_CODEPAGE_KOI8_U

#define LIBQCOW_CODEPAGE_WINDOWS_THAI			LIBQCOW_CODEPAGE_WINDOWS_874
#define LIBQCOW_CODEPAGE_WINDOWS_JAPANESE		LIBQCOW_CODEPAGE_WINDOWS_932
#define LIBQCOW_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBQCOW_CODEPAGE_WINDOWS_936
#define LIBQCOW_CODEPAGE_WINDOWS_KOREAN			LIBQCOW_CODEPAGE_WINDOWS_949
#define LIBQCOW_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBQCOW_CODEPAGE_WINDOWS_950
#define LIBQCOW_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBQCOW_CODEPAGE_WINDOWS_1250
#define LIBQCOW_CODEPAGE_WINDOWS_CYRILLIC		LIBQCOW_CODEPAGE_WINDOWS_1251
#define LIBQCOW_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBQCOW_CODEPAGE_WINDOWS_1252
#define LIBQCOW_CODEPAGE_WINDOWS_GREEK			LIBQCOW_CODEPAGE_WINDOWS_1253
#define LIBQCOW_CODEPAGE_WINDOWS_TURKISH		LIBQCOW_CODEPAGE_WINDOWS_1254
#define LIBQCOW_CODEPAGE_WINDOWS_HEBREW			LIBQCOW_CODEPAGE_WINDOWS_1255
#define LIBQCOW_CODEPAGE_WINDOWS_ARABIC			LIBQCOW_CODEPAGE_WINDOWS_1256
#define LIBQCOW_CODEPAGE_WINDOWS_BALTIC			LIBQCOW_CODEPAGE_WINDOWS_1257
#define LIBQCOW_CODEPAGE_WINDOWS_VIETNAMESE		LIBQCOW_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBQCOW_CODEPAGE_H ) */

