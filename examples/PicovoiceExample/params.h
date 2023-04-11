
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = namaste putra
static const uint8_t KEYWORD_ARRAY[] = {
        0xfc, 0x11, 0xf1, 0xd0, 0x6c, 0x2a, 0xd0, 0x4f, 0xf5, 0x04, 0xa7, 0xe2, 0x01, 0x65, 0xe4, 0xdd, 0x03, 0x86,
        0x54, 0xb1, 0x7b, 0x49, 0x3a, 0x79, 0x4d, 0xe7, 0x1c, 0x64, 0x0e, 0x0b, 0xa7, 0xb7, 0xe4, 0x8b, 0x7f, 0x04,
        0x97, 0xa7, 0x63, 0x79, 0xaa, 0x85, 0x1a, 0x08, 0x71, 0x80, 0x58, 0x43, 0x57, 0x25, 0xe6, 0x7c, 0x96, 0x59,
        0xb7, 0x66, 0xd6, 0x11, 0x77, 0x90, 0x90, 0xd9, 0xf8, 0x24, 0xfa, 0x78, 0xeb, 0xdb, 0xba, 0xdc, 0xe5, 0x99,
        0xd5, 0xca, 0x95, 0x07, 0xfa, 0xd3, 0xe0, 0xe8, 0x83, 0x82, 0x62, 0xb0, 0x6c, 0x62, 0x35, 0xec, 0x9a, 0x3b,
        0x62, 0x04, 0x30, 0xc0, 0x02, 0x72, 0x54, 0xb8, 0xed, 0x14, 0x1a, 0x58, 0xd0, 0xf9, 0x5a, 0x57, 0x07, 0x31,
        0x15, 0xe6, 0xc1, 0x7c, 0x62, 0xa2, 0xa8, 0x7d, 0xcc, 0x1b, 0xf0, 0x25, 0xd8, 0x39, 0x38, 0x54, 0xbc, 0xfd,
        0x2a, 0x68, 0xac, 0x7e, 0x46, 0x57, 0xc5, 0x7f, 0x7f, 0x29, 0x2c, 0x4b, 0x99, 0x7a, 0x6d, 0xa7, 0x07, 0xdc,
        0xeb, 0x6b, 0x87, 0x90, 0x7f, 0x17, 0xab, 0x2a, 0x9e, 0x5c, 0x73, 0x07, 0xfe, 0xc8, 0x48, 0xa8, 0xc0, 0x07,
        0x58, 0x10, 0xd8, 0x60, 0xcc, 0xa4, 0x4a, 0x2a, 0x5d, 0x0d, 0x6a, 0xcd, 0xe1, 0xc9, 0x65, 0x48, 0xce, 0x13,
        0x27, 0x7d, 0xed, 0x4f, 0x8f, 0x1a, 0x9e, 0x21, 0x83, 0xb7, 0x39, 0x0c, 0x5f, 0xcf, 0xb5, 0x75, 0xc6, 0x1d,
        0x61, 0x18, 0x4a, 0xe2, 0x3e, 0x6d, 0xa0, 0x56, 0xe8, 0x19, 0xe2, 0xad, 0xcf, 0x4b, 0x80, 0x25, 0x71, 0x76,
        0xd1, 0x58, 0x62, 0x0b, 0x35, 0x6f, 0x6b, 0xaf, 0xfd, 0x26, 0x62, 0xde, 0xfd, 0x5e, 0x3a, 0xac, 0x08, 0x9d,
        0xde, 0x24, 0x83, 0x89, 0xef, 0x79, 0xb8, 0xdb, 0x5d, 0x72, 0x4f, 0x50, 0x0b, 0x34, 0xe3, 0xe2, 0x8e, 0x34,
        0xe3, 0x5e, 0x11, 0xbd, 0x09, 0x04, 0x21, 0x89, 0xf6, 0xc9, 0x0c, 0x38, 0xae, 0xee, 0xa7, 0x00, 0x5e, 0xf3,
        0x89, 0x57, 0x5b, 0xe6, 0x08, 0x5d, 0x15, 0x0b, 0x4d, 0x00, 0x6d, 0x82, 0x04, 0xa6, 0xd4, 0x9a, 0x82, 0x35,
        0xff, 0xc4, 0x68, 0xff, 0xcf, 0x28, 0x8a, 0xb0, 0x0e, 0x92, 0x05, 0xad, 0x06, 0x36, 0x95, 0x50, 0xd0, 0xdc,
        0x94, 0x8c, 0xc6, 0xc2, 0x88, 0x96, 0x96, 0x8a, 0x46, 0x58, 0x72, 0xb0, 0x91, 0x51, 0x9b, 0x3d, 0x04, 0x5c,
        0x96, 0x73, 0x6f, 0x01, 0x2f, 0xcd, 0x50, 0xa2, 0x64, 0x48, 0xa5, 0xd9, 0x48, 0x58, 0x06, 0x94, 0xf3, 0xf7,
        0xc0, 0xb7, 0x5e, 0x53, 0xe7, 0x7c, 0x00, 0x1d, 0x24, 0x1f, 0x03, 0x93, 0xbf, 0x1d, 0xc1, 0xf0, 0x18, 0xd9,
        0x8c, 0x6e, 0xb4, 0x93, 0xa2, 0x4f, 0x31, 0xfa, 0x58, 0x2d, 0xe9, 0x0b, 0xf7, 0x61, 0xa8, 0x10, 0x99, 0xea,
        0x85, 0x0b, 0x9d, 0xb1, 0xce, 0xd0, 0x7f, 0x78, 0x22, 0xdf, 0xb5, 0x03, 0x9b, 0xd8, 0xa1, 0x6c, 0xad, 0xdd,
        0xf6, 0x06, 0x75, 0x2d, 0x20, 0x9a, 0x92, 0x6a, 0xc6, 0x57, 0x17, 0x78, 0x43, 0x26, 0xea, 0x19, 0xfd, 0x16,
        0xdf, 0xb4, 0x4e, 0xf6, 0x86, 0x0a, 0x9f, 0xf8, 0x78, 0x3d, 0x49, 0x43, 0xc8, 0xdf, 0xd7, 0xd1, 0x42, 0xb6,
        0x49, 0x5c, 0x6a, 0x07, 0x05, 0xf5, 0x7b, 0x18, 0xb9, 0x5e, 0xda, 0xe9, 0xcf, 0x45, 0x02, 0xfa, 0x2b, 0x68,
        0x49, 0x21, 0x10, 0xd3, 0x70, 0x11, 0x64, 0xd4, 0xda, 0xcc, 0x83, 0xdc, 0xa3, 0x71, 0xbb, 0xf2, 0x48, 0x91,
        0xac, 0xd4, 0x50, 0xf2, 0x63, 0x88, 0x66, 0x04, 0xc8, 0xcf, 0x13, 0xf4, 0x39, 0x80, 0x0b, 0xa6, 0xf5, 0xd9,
        0x0a, 0x8c, 0xb7, 0x9c, 0xcc, 0xc8, 0x13, 0xb4, 0x9a, 0x74, 0x93, 0xeb, 0x2b, 0x94, 0xad, 0x94, 0xc9, 0xcf,
        0xab, 0xad, 0x78, 0xad, 0x44, 0xf1, 0x85, 0x6f, 0xe7, 0x5b, 0x7e, 0x83, 0x74, 0xb6, 0xdb, 0xaf, 0x79, 0xe5,
        0xb3, 0xab, 0x4c, 0x78, 0xbd, 0xb6, 0x1c, 0x7c, 0xfe, 0x3e, 0x8b, 0x31, 0xe4, 0x28, 0x3f, 0x16, 0xbb, 0xf3,
        0xe2, 0x90, 0x15, 0xfe, 0x79, 0x2d, 0x56, 0xc5, 0xc0, 0xbf, 0x43, 0x33, 0x05, 0xe3, 0x94, 0x31, 0x9f, 0x2e,
        0x1a, 0x40, 0xa7, 0x80, 0xb1, 0xbe, 0x69, 0x60, 0xea, 0xc3, 0x59, 0xc3, 0x52, 0x46, 0x8c, 0xc7, 0x9e, 0xa6,
        0x59, 0x3d, 0x13, 0x33, 0x6f, 0xda, 0xbf, 0x30, 0xf9, 0xb5, 0x3c, 0xb5, 0xb9, 0x9a, 0x59, 0x53, 0xe6, 0x7e,
        0x6d, 0x7f, 0xd5, 0xb4, 0xeb, 0xe3, 0x47, 0x5c, 0x4d, 0xfe, 0x04, 0xac, 0xc2, 0xa3, 0x4d, 0xd7, 0x75, 0xb9,
        0x95, 0x79, 0x90, 0xf1, 0x55, 0xb0, 0xc3, 0x4d, 0xed, 0x44, 0x22, 0x33, 0x0f, 0x5c, 0x75, 0xf8, 0x91, 0x29,
        0x83, 0x46, 0x68, 0x84, 0x82, 0x87, 0x59, 0x3e, 0x86, 0x27, 0xf3, 0x7d, 0xe5, 0x4c, 0x9e, 0x43, 0xc4, 0x9d,
        0xc0, 0x9e, 0xc5, 0x20, 0xc4, 0x7c, 0x33, 0x4b, 0x1c, 0x53, 0xbc, 0x68, 0x83, 0xea, 0x33, 0xac, 0xb9, 0x78,
        0x32, 0xb3, 0x45, 0x41, 0x63, 0x5e, 0x7e, 0x16, 0x75, 0x0b, 0xb2, 0x22, 0x4d, 0x92
};

// context = simple_context_hi
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x32, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x68, 0x69, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x68, 0x69, 0x72, 0x73, 0x74, 0x79, 0x3a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xe0, 0xa4, 0xaa, 0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0xaf, 0xe0,
        0xa4, 0xbe, 0xe0, 0xa4, 0xb8, 0xe0, 0xa4, 0xbe, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x73, 0x68, 0x6f, 0x70,
        0x70, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xe0, 0xa4,
        0xae, 0xe0, 0xa5, 0x81, 0xe0, 0xa4, 0x9d, 0xe0, 0xa5, 0x87, 0x20, 0xe0, 0xa4, 0x8f, 0xe0, 0xa4, 0x95, 0x20,
        0x24, 0x76, 0x72, 0x75, 0x63, 0x68, 0x74, 0x3a, 0x76, 0x72, 0x75, 0x63, 0x68, 0x74, 0x20, 0xe0, 0xa4, 0xa6,
        0xe0, 0xa5, 0x8b, 0x22, 0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x76, 0x72, 0x75, 0x63, 0x68, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xe0,
        0xa4, 0xb8, 0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0x9f, 0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5, 0x89, 0xe0,
        0xa4, 0xac, 0xe0, 0xa5, 0x87, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5, 0x80, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x22, 0xe0, 0xa4, 0xb0, 0xe0, 0xa4, 0xb8, 0xe0, 0xa4, 0xad, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5,
        0x80, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xe0, 0xa4, 0x95, 0xe0, 0xa5, 0x87,
        0xe0, 0xa4, 0xb2, 0xe0, 0xa4, 0xbe, 0x22, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
        0x3b, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0xe0, 0xa4, 0x8f, 0xe0, 0xa4, 0x95,
        0x00, 0xe0, 0xa4, 0x95, 0xe0, 0xa5, 0x87, 0xe0, 0xa4, 0xb2, 0xe0, 0xa4, 0xbe, 0x00, 0xe0, 0xa4, 0xa6, 0xe0,
        0xa5, 0x8b, 0x00, 0xe0, 0xa4, 0xaa, 0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0xaf, 0xe0, 0xa4, 0xbe, 0xe0, 0xa4, 0xb8,
        0xe0, 0xa4, 0xbe, 0x00, 0xe0, 0xa4, 0xae, 0xe0, 0xa5, 0x81, 0xe0, 0xa4, 0x9d, 0xe0, 0xa5, 0x87, 0x00, 0xe0,
        0xa4, 0xb0, 0xe0, 0xa4, 0xb8, 0xe0, 0xa4, 0xad, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5, 0x80, 0x00, 0xe0, 0xa4, 0xb8,
        0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0x9f, 0xe0, 0xa5, 0x8d, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5, 0x89, 0xe0, 0xa4, 0xac,
        0xe0, 0xa5, 0x87, 0xe0, 0xa4, 0xb0, 0xe0, 0xa5, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00,
        0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
        0x20, 0x00, 0x00, 0x00, 0x0e, 0x17, 0x17, 0x0e, 0x19, 0x05, 0x0a, 0x1d, 0x1e, 0x15, 0x05, 0x24, 0x05, 0x1a,
        0x2a, 0x16, 0x0e, 0x21, 0x04, 0x24, 0x07, 0x04, 0x21, 0x14, 0x24, 0x28, 0x21, 0x03, 0x06, 0x0e, 0x21, 0x14,
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x76, 0x72, 0x75, 0x63, 0x68, 0x74, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x76, 0x72, 0x75, 0x63, 0x68, 0x74, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
        0x73, 0x68, 0x6f, 0x70, 0x70, 0x69, 0x6e, 0x67, 0x00, 0x74, 0x68, 0x69, 0x72, 0x73, 0x74, 0x79, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x50, 0x00,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    