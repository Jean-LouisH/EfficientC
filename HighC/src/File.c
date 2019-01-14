#include "../include/File.h"
#include "../include/Converters.h"
#include <stdio.h>
#include <stdlib.h>

bool hcFileExists(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	if (readFile != NULL)
		fclose(readFile);
	return (bool)readFile;
}

hcString hcExtractFileName(const char* filepath)
{
	hcString fileName = hcNewString("");
	int nameIndexStart = 0;
	int filepathLength = 0;

	while (filepath[filepathLength] != NULL)
		filepathLength++;

	nameIndexStart = filepathLength - 1;
	while (filepath[nameIndexStart] != '/' && filepath[nameIndexStart] != '\\')
		nameIndexStart--;

	for (int i = nameIndexStart + 1; filepath[i] != '.'; i++)
		hcAppendCharToString(&fileName, filepath[i]);

	return fileName;
}

hcString hcExtractFileExtension(const char* filepath)
{
	hcString fileExtension = hcNewString("");
	int nameIndexStart = 0;
	int filepathLength = 0;

	while (filepath[filepathLength] != NULL)
		filepathLength++;

	nameIndexStart = filepathLength - 1;
	while (filepath[nameIndexStart] != '.')
		nameIndexStart--;

	for (int i = nameIndexStart + 1; filepath[i] != NULL; i++)
		hcAppendCharToString(&fileExtension, filepath[i]);

	return fileExtension;
}

hcString hcReadASCIIStringFromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemoryU8 memory;
	hcString string;

	memory.data = NULL;
	memory.size = 0;

	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		memory.size = ftell(readFile);
		rewind(readFile);
		memory.data = malloc(sizeof(uint8_t) * (memory.size + 1));
		if (memory.data != NULL)
		{
			fread(memory.data, sizeof(uint8_t), memory.size, readFile);
			memory.data[memory.size] = NULL;
			string = hcConvertMemoryU8ToString(memory);
			hcFreeMemoryU8(&memory);
		}
		fclose(readFile);
	}
	return string;
}

hcMemoryU8 hcReadBinaryU8FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemoryU8 binary;
	binary.data = NULL;
	binary.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		binary.size = ftell(readFile);
		rewind(readFile);
		binary.data = malloc(sizeof(uint8_t) * (binary.size));
		if (binary.data != NULL)
			fread(binary.data, sizeof(uint8_t), binary.size, readFile);
		fclose(readFile);
	}
	return binary;
}

hcMemoryU16 hcReadBinaryU16FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemoryU16 binary;
	binary.data = NULL;
	binary.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		binary.size = ftell(readFile);
		rewind(readFile);
		binary.data = malloc(sizeof(uint16_t) * (binary.size));
		if (binary.data != NULL)
			fread(binary.data, sizeof(uint16_t), binary.size, readFile);
		fclose(readFile);
	}
	return binary;
}

hcMemoryU32 hcReadBinaryU32FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemoryU32 binary;
	binary.data = NULL;
	binary.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		binary.size = ftell(readFile);
		rewind(readFile);
		binary.data = malloc(sizeof(uint32_t) * (binary.size));
		if (binary.data != NULL)
			fread(binary.data, sizeof(uint32_t), binary.size, readFile);
		fclose(readFile);
	}
	return binary;
}

hcMemoryU64 hcReadBinaryU64FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemoryU64 binary;
	binary.data = NULL;
	binary.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		binary.size = ftell(readFile);
		rewind(readFile);
		binary.data = malloc(sizeof(uint64_t) * (binary.size));
		if (binary.data != NULL)
			fread(binary.data, sizeof(uint64_t), binary.size, readFile);
		fclose(readFile);
	}
	return binary;
}

hcMemoryS8 hcReadBinaryS8FromFile(const char* filepath)
{
	hcMemoryS8 binary;
	hcMemoryU8 temp = hcReadBinaryU8FromFile(filepath);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

hcMemoryS16 hcReadBinaryS16FromFile(const char* filepath)
{
	hcMemoryS16 binary;
	hcMemoryU16 temp = hcReadBinaryU16FromFile(filepath);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

hcMemoryS32 hcReadBinaryS32FromFile(const char* filepath)
{
	hcMemoryS32 binary;
	hcMemoryU32 temp = hcReadBinaryU32FromFile(filepath);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

hcMemoryS64 hcReadBinaryS64FromFile(const char* filepath)
{
	hcMemoryS64 binary;
	hcMemoryU64 temp = hcReadBinaryU64FromFile(filepath);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

void hcWriteBinaryU8ToFile(hcMemoryU8* binary, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint8_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteBinaryU16ToFile(hcMemoryU16* binary, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint16_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteBinaryU32ToFile(hcMemoryU32* binary, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint32_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteBinaryU64ToFile(hcMemoryU64* binary, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint64_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteBinaryS8ToFile(hcMemoryS8* binary, const char* filepath)
{
	hcMemoryU8 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcWriteBinaryU8ToFile(&temp, filepath);
}

void hcWriteBinaryS16ToFile(hcMemoryS16* binary, const char* filepath)
{
	hcMemoryU16 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcWriteBinaryU16ToFile(&temp, filepath);
}

void hcWriteBinaryS32ToFile(hcMemoryS32* binary, const char* filepath)
{
	hcMemoryU32 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcWriteBinaryU32ToFile(&temp, filepath);
}

void hcWriteBinaryS64ToFile(hcMemoryS64* binary, const char* filepath)
{
	hcMemoryU64 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcWriteBinaryU64ToFile(&temp, filepath);
}

void hcAppendBinaryU8ToFile(hcMemoryU8* binary, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint8_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendBinaryU16ToFile(hcMemoryU16* binary, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint16_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendBinaryU32ToFile(hcMemoryU32* binary, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint32_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendBinaryU64ToFile(hcMemoryU64* binary, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint64_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendBinaryS8ToFile(hcMemoryS8* binary, const char* filepath)
{
	hcMemoryU8 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcAppendBinaryU8ToFile(&temp, filepath);
}

void hcAppendBinaryS16ToFile(hcMemoryS16* binary, const char* filepath)
{
	hcMemoryU16 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcAppendBinaryU16ToFile(&temp, filepath);
}

void hcAppendBinaryS32ToFile(hcMemoryS32* binary, const char* filepath)
{
	hcMemoryU32 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcAppendBinaryU32ToFile(&temp, filepath);
}

void hcAppendBinaryS64ToFile(hcMemoryS64* binary, const char* filepath)
{
	hcMemoryU64 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	hcAppendBinaryU64ToFile(&temp, filepath);
}
