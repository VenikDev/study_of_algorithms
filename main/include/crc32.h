//
// Created by sasha on 08.12.2022.
//

#ifndef STUDY_OF_ALGORITHMS_CRC32_H
#define STUDY_OF_ALGORITHMS_CRC32_H

#include <cstddef>

std::size_t* crc_32_table;

void InitCRC32Table() {
  std::size_t crc;
  for (int i = 0; i < 256; i++) {
    crc = i;
    for (int j = 0; j < 8; j++)
      crc = crc & 1 ? (crc >> 1) ^ 0xEDB88320UL : crc >> 1;

    crc_32_table[i] = crc;
  }
}

std::size_t CRC_32(std::size_t* buffer, std::size_t len_of_buffer) {
  std::size_t crc = 0xFFFFFFFFUL;

  while (len_of_buffer--)
    crc = crc_32_table[(crc ^ *buffer++) & 0xFF] ^ (crc >> 8);

  return crc ^ 0xFFFFFFFFUL;
}

#endif  // STUDY_OF_ALGORITHMS_CRC32_H
