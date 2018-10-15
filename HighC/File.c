#include "File.h"
#include <stdio.h>
#include <stdlib.h>

bool fileExists(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	if (readFile != NULL)
		fclose(readFile);
	return (bool)readFile;
}

HighC_Memory_u8 readASCIIStringFromFile(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	HighC_Memory_u8 string;
	string.data = NULL;
	string.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		string.size = ftell(readFile);
		rewind(readFile);
		string.data = malloc(sizeof(uint8_t) * (string.size + 1));
		if (string.data != NULL)
		{
			fread(string.data, sizeof(uint8_t), string.size, readFile);
			string.data[string.size] = NULL;
		}
		fclose(readFile);
	}
	return string;
}

HighC_Memory_u8 readBinaryU8FromFile(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	HighC_Memory_u8 binary;
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

HighC_Memory_u16 readBinaryU16FromFile(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	HighC_Memory_u16 binary;
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

HighC_Memory_u32 readBinaryU32FromFile(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	HighC_Memory_u32 binary;
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

HighC_Memory_u64 readBinaryU64FromFile(const char* filename)
{
	FILE* readFile = fopen(filename, "rb");
	HighC_Memory_u64 binary;
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

HighC_Memory_s8 readBinaryS8FromFile(const char* filename)
{
	HighC_Memory_s8 binary;
	HighC_Memory_u8 temp = readBinaryU8FromFile(filename);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

HighC_Memory_s16 readBinaryS16FromFile(const char* filename)
{
	HighC_Memory_s16 binary;
	HighC_Memory_u16 temp = readBinaryU16FromFile(filename);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

HighC_Memory_s32 readBinaryS32FromFile(const char* filename)
{
	HighC_Memory_s32 binary;
	HighC_Memory_u32 temp = readBinaryU32FromFile(filename);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

HighC_Memory_s64 readBinaryS64FromFile(const char* filename)
{
	HighC_Memory_s64 binary;
	HighC_Memory_u64 temp = readBinaryU64FromFile(filename);
	binary.data = temp.data;
	binary.size = temp.size;
	return binary;
}

void writeBinaryU8ToFile(HighC_Memory_u8* binary, const char* filename)
{
	FILE* writeFile = fopen(filename, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint8_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void writeBinaryU16ToFile(HighC_Memory_u16* binary, const char* filename)
{
	FILE* writeFile = fopen(filename, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint16_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void writeBinaryU32ToFile(HighC_Memory_u32* binary, const char* filename)
{
	FILE* writeFile = fopen(filename, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint32_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void writeBinaryU64ToFile(HighC_Memory_u64* binary, const char* filename)
{
	FILE* writeFile = fopen(filename, "wb");
	if (writeFile != NULL)
	{
		fwrite(binary->data, sizeof(uint64_t), binary->size, writeFile);
		fclose(writeFile);
	}
}

void writeBinaryS8ToFile(HighC_Memory_s8* binary, const char* filename)
{
	HighC_Memory_u8 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	writeBinaryU8ToFile(&temp, filename);
}

void writeBinaryS16ToFile(HighC_Memory_s16* binary, const char* filename)
{
	HighC_Memory_u16 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	writeBinaryU16ToFile(&temp, filename);
}

void writeBinaryS32ToFile(HighC_Memory_s32* binary, const char* filename)
{
	HighC_Memory_u32 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	writeBinaryU32ToFile(&temp, filename);
}

void writeBinaryS64ToFile(HighC_Memory_s64* binary, const char* filename)
{
	HighC_Memory_u64 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	writeBinaryU64ToFile(&temp, filename);
}

void appendBinaryU8ToFile(HighC_Memory_u8* binary, const char* filename)
{
	FILE* appendFile = fopen(filename, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint8_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void appendBinaryU16ToFile(HighC_Memory_u16* binary, const char* filename)
{
	FILE* appendFile = fopen(filename, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint16_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void appendBinaryU32ToFile(HighC_Memory_u32* binary, const char* filename)
{
	FILE* appendFile = fopen(filename, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint32_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void appendBinaryU64ToFile(HighC_Memory_u64* binary, const char* filename)
{
	FILE* appendFile = fopen(filename, "ab");
	if (appendFile != NULL)
	{
		fwrite(binary->data, sizeof(uint64_t), binary->size, appendFile);
		fclose(appendFile);
	}
}

void appendBinaryS8ToFile(HighC_Memory_s8* binary, const char* filename)
{
	HighC_Memory_u8 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	appendBinaryU8ToFile(&temp, filename);
}

void appendBinaryS16ToFile(HighC_Memory_s16* binary, const char* filename)
{
	HighC_Memory_u16 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	appendBinaryU16ToFile(&temp, filename);
}

void appendBinaryS32ToFile(HighC_Memory_s32* binary, const char* filename)
{
	HighC_Memory_u32 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	appendBinaryU32ToFile(&temp, filename);
}

void appendBinaryS64ToFile(HighC_Memory_s64* binary, const char* filename)
{
	HighC_Memory_u64 temp;
	temp.data = binary->data;
	temp.size = binary->size;
	appendBinaryU64ToFile(&temp, filename);
}
