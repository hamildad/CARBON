/*
 * 8x13 Bitmap Font
 *
 * Exported by FontTFTtoBitmap tool by Andrew Kilpatrick. (unreleased)
 * found here: http://www.dafontfree.net/find.php?q=unicode_8x12.ttf
 *
 * This file is part of CARBON.
 *
 * CARBON is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CARBON is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CARBON.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */
#include <inttypes.h>

const uint8_t font_system_8x13_bitmap[95][13] = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // ' '
    { 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '!'
    { 0x32, 0x32, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '"'
    { 0x32, 0x32, 0x7f, 0x7f, 0x32, 0x32, 0x32, 0x7f, 0x32, 0x32, 0x00, 0x00, 0x00 },  // '#'
    { 0x0c, 0x3e, 0x7f, 0x6f, 0x3f, 0x7e, 0x6c, 0x6f, 0x3e, 0x0c, 0x00, 0x00, 0x00 },  // '$'
    { 0x06, 0x0f, 0x0f, 0x7f, 0x3c, 0x0e, 0x3b, 0x7f, 0x7c, 0x38, 0x00, 0x00, 0x00 },  // '%'
    { 0x06, 0x0f, 0x0f, 0x0f, 0x06, 0x6f, 0x7f, 0x3f, 0x7f, 0x66, 0x00, 0x00, 0x00 },  // '&'
    { 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '''
    { 0x18, 0x1c, 0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, 0x18, 0x00, 0x00, 0x00 },  // '('
    { 0x04, 0x0c, 0x1c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0c, 0x04, 0x00, 0x00, 0x00 },  // ')'
    { 0x0c, 0x1c, 0x0c, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '*'
    { 0x00, 0x00, 0x0c, 0x0c, 0x7f, 0x7f, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '+'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x08, 0x04, 0x00 },  // ','
    { 0x00, 0x00, 0x00, 0x00, 0x3e, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '-'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '.'
    { 0x00, 0x00, 0x60, 0x78, 0x1c, 0x0c, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '/'
    { 0x1c, 0x3e, 0x73, 0x7b, 0x7f, 0x6f, 0x67, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // '0'
    { 0x0c, 0x0c, 0x0e, 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x3e, 0x3e, 0x00, 0x00, 0x00 },  // '1'
    { 0x1c, 0x3e, 0x73, 0x73, 0x38, 0x1c, 0x0c, 0x06, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // '2'
    { 0x1c, 0x3e, 0x73, 0x73, 0x3c, 0x3c, 0x70, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // '3'
    { 0x38, 0x3c, 0x3c, 0x37, 0x33, 0x7f, 0x7f, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00 },  // '4'
    { 0x7f, 0x7f, 0x03, 0x1f, 0x3f, 0x70, 0x60, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // '5'
    { 0x3c, 0x7e, 0x63, 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // '6'
    { 0x7f, 0x7f, 0x60, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '7'
    { 0x1c, 0x3e, 0x73, 0x73, 0x3e, 0x3e, 0x73, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // '8'
    { 0x1c, 0x3e, 0x73, 0x63, 0x73, 0x7e, 0x7c, 0x60, 0x3f, 0x1e, 0x00, 0x00, 0x00 },  // '9'
    { 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },  // ':'
    { 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x08, 0x04, 0x00, 0x00, 0x00 },  // ';'
    { 0x00, 0x00, 0x60, 0x7c, 0x07, 0x07, 0x1c, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '<'
    { 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '='
    { 0x00, 0x00, 0x03, 0x1f, 0x78, 0x78, 0x1c, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '>'
    { 0x1c, 0x3e, 0x73, 0x73, 0x38, 0x1c, 0x0c, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '?'
    { 0x3c, 0x7e, 0x63, 0x7f, 0x6f, 0x6f, 0x7f, 0x7b, 0x7e, 0x7c, 0x00, 0x00, 0x00 },  // '@'
    { 0x0c, 0x1c, 0x3e, 0x73, 0x63, 0x7f, 0x7f, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'A'
    { 0x1f, 0x3f, 0x73, 0x73, 0x3f, 0x3f, 0x73, 0x63, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'B'
    { 0x1c, 0x3e, 0x73, 0x63, 0x03, 0x03, 0x03, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'C'
    { 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'D'
    { 0x7f, 0x7f, 0x03, 0x03, 0x3f, 0x3f, 0x03, 0x03, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // 'E'
    { 0x7f, 0x7f, 0x03, 0x03, 0x3f, 0x3f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'F'
    { 0x1c, 0x3e, 0x73, 0x63, 0x03, 0x7b, 0x7b, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'G'
    { 0x63, 0x63, 0x63, 0x63, 0x7f, 0x7f, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'H'
    { 0x1c, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1c, 0x1c, 0x00, 0x00, 0x00 },  // 'I'
    { 0x7c, 0x7c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x0e, 0x00, 0x00, 0x00 },  // 'J'
    { 0x63, 0x73, 0x3b, 0x1f, 0x07, 0x07, 0x0f, 0x1f, 0x73, 0x63, 0x00, 0x00, 0x00 },  // 'K'
    { 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // 'L'
    { 0x63, 0x73, 0x7f, 0x7f, 0x6f, 0x6f, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'M'
    { 0x63, 0x63, 0x63, 0x67, 0x6f, 0x6f, 0x7b, 0x7b, 0x73, 0x63, 0x00, 0x00, 0x00 },  // 'N'
    { 0x1c, 0x3e, 0x73, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'O'
    { 0x1f, 0x3f, 0x73, 0x73, 0x3f, 0x0f, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'P'
    { 0x1c, 0x3e, 0x73, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x1c, 0x1c, 0x78, 0x00 },  // 'Q'
    { 0x1f, 0x3f, 0x73, 0x73, 0x3f, 0x1f, 0x3b, 0x33, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'R'
    { 0x1c, 0x3e, 0x73, 0x63, 0x1e, 0x3c, 0x70, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'S'
    { 0x7f, 0x7f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'T'
    { 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'U'
    { 0x63, 0x63, 0x63, 0x63, 0x63, 0x32, 0x32, 0x1c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'V'
    { 0x63, 0x63, 0x63, 0x63, 0x6f, 0x6f, 0x6f, 0x7f, 0x73, 0x63, 0x00, 0x00, 0x00 },  // 'W'
    { 0x63, 0x63, 0x63, 0x7f, 0x1c, 0x1c, 0x3e, 0x73, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'X'
    { 0x63, 0x63, 0x63, 0x32, 0x1c, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'Y'
    { 0x7f, 0x7f, 0x60, 0x78, 0x1c, 0x0c, 0x06, 0x03, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // 'Z'
    { 0x1c, 0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, 0x1c, 0x00, 0x00, 0x00 },  // '['
    { 0x00, 0x00, 0x03, 0x07, 0x0c, 0x1c, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '\'
    { 0x1c, 0x1c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1c, 0x1c, 0x00, 0x00, 0x00 },  // ']'
    { 0x0c, 0x0c, 0x1c, 0x3e, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '^'
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // '_'
    { 0x04, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },  // '`'
    { 0x00, 0x00, 0x00, 0x3e, 0x7e, 0x60, 0x7e, 0x7f, 0x7f, 0x7e, 0x00, 0x00, 0x00 },  // 'a'
    { 0x03, 0x03, 0x03, 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x3f, 0x1f, 0x00, 0x00, 0x00 },  // 'b'
    { 0x00, 0x00, 0x00, 0x3c, 0x7e, 0x63, 0x03, 0x03, 0x7e, 0x3c, 0x00, 0x00, 0x00 },  // 'c'
    { 0x60, 0x60, 0x60, 0x7c, 0x7e, 0x63, 0x63, 0x63, 0x7e, 0x7c, 0x00, 0x00, 0x00 },  // 'd'
    { 0x00, 0x00, 0x00, 0x3e, 0x7f, 0x63, 0x7f, 0x7f, 0x3f, 0x3e, 0x00, 0x00, 0x00 },  // 'e'
    { 0x38, 0x7c, 0x6c, 0x04, 0x1f, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00 },  // 'f'
    { 0x00, 0x00, 0x00, 0x7c, 0x7e, 0x63, 0x63, 0x63, 0x7e, 0x7c, 0x70, 0x3e, 0x00 },  // 'g'
    { 0x03, 0x03, 0x03, 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'h'
    { 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'i'
    { 0x30, 0x30, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x32, 0x3e, 0x00 },  // 'j'
    { 0x02, 0x02, 0x02, 0x32, 0x3a, 0x1e, 0x0e, 0x0e, 0x3a, 0x32, 0x00, 0x00, 0x00 },  // 'k'
    { 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'l'
    { 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 0x00, 0x00, 0x00 },  // 'm'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00 },  // 'n'
    { 0x00, 0x00, 0x00, 0x1c, 0x3e, 0x73, 0x63, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00 },  // 'o'
    { 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x73, 0x63, 0x63, 0x3f, 0x1f, 0x03, 0x03, 0x00 },  // 'p'
    { 0x00, 0x00, 0x00, 0x7c, 0x7e, 0x63, 0x63, 0x63, 0x7e, 0x7c, 0x60, 0x60, 0x00 },  // 'q'
    { 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x67, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00 },  // 'r'
    { 0x00, 0x00, 0x00, 0x3e, 0x3f, 0x03, 0x3f, 0x7e, 0x7f, 0x3f, 0x00, 0x00, 0x00 },  // 's'
    { 0x00, 0x04, 0x04, 0x1f, 0x1f, 0x04, 0x04, 0x04, 0x7c, 0x38, 0x00, 0x00, 0x00 },  // 't'
    { 0x00, 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x7e, 0x7c, 0x00, 0x00, 0x00 },  // 'u'
    { 0x00, 0x00, 0x00, 0x63, 0x63, 0x32, 0x32, 0x1c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // 'v'
    { 0x00, 0x00, 0x00, 0x6f, 0x6f, 0x6f, 0x6f, 0x6f, 0x7f, 0x3e, 0x00, 0x00, 0x00 },  // 'w'
    { 0x00, 0x00, 0x00, 0x63, 0x73, 0x3e, 0x1c, 0x1c, 0x73, 0x63, 0x00, 0x00, 0x00 },  // 'x'
    { 0x00, 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x7e, 0x7c, 0x70, 0x3e, 0x00 },  // 'y'
    { 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x38, 0x1c, 0x0c, 0x7f, 0x7f, 0x00, 0x00, 0x00 },  // 'z'
    { 0x18, 0x1c, 0x0c, 0x0c, 0x04, 0x04, 0x0c, 0x0c, 0x1c, 0x18, 0x00, 0x00, 0x00 },  // '{'
    { 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00 },  // '|'
    { 0x04, 0x0c, 0x0c, 0x0c, 0x18, 0x18, 0x0c, 0x0c, 0x0c, 0x04, 0x00, 0x00, 0x00 },  // '}'
    { 0x00, 0x00, 0x00, 0x62, 0x6f, 0x7f, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }  // '~'
};

