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
	hcMemU8 mem;
	hcString string;

	mem.data = NULL;
	mem.size = 0;

	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		mem.size = ftell(readFile);
		rewind(readFile);
		mem.data = malloc(sizeof(uint8_t) * (mem.size + 1));
		if (mem.data != NULL)
		{
			fread(mem.data, sizeof(uint8_t), mem.size, readFile);
			mem.data[mem.size] = NULL;
			string = hcConvertMemU8ToString(mem);
			hcFreeMemU8(&mem);
		}
		fclose(readFile);
	}
	return string;
}

hcMemU8 hcReadMemU8FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemU8 mem;
	mem.data = NULL;
	mem.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		mem.size = ftell(readFile);
		rewind(readFile);
		mem.data = malloc(sizeof(uint8_t) * (mem.size));
		if (mem.data != NULL)
			fread(mem.data, sizeof(uint8_t), mem.size, readFile);
		fclose(readFile);
	}
	return mem;
}

hcMemU16 hcReadMemU16FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemU16 mem;
	mem.data = NULL;
	mem.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		mem.size = ftell(readFile);
		rewind(readFile);
		mem.data = malloc(sizeof(uint16_t) * (mem.size));
		if (mem.data != NULL)
			fread(mem.data, sizeof(uint16_t), mem.size, readFile);
		fclose(readFile);
	}
	return mem;
}

hcMemU32 hcReadMemU32FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemU32 mem;
	mem.data = NULL;
	mem.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		mem.size = ftell(readFile);
		rewind(readFile);
		mem.data = malloc(sizeof(uint32_t) * (mem.size));
		if (mem.data != NULL)
			fread(mem.data, sizeof(uint32_t), mem.size, readFile);
		fclose(readFile);
	}
	return mem;
}

hcMemU64 hcReadMemU64FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	hcMemU64 mem;
	mem.data = NULL;
	mem.size = 0;
	if (readFile != NULL)
	{
		fseek(readFile, 0, SEEK_END);
		mem.size = ftell(readFile);
		rewind(readFile);
		mem.data = malloc(sizeof(uint64_t) * (mem.size));
		if (mem.data != NULL)
			fread(mem.data, sizeof(uint64_t), mem.size, readFile);
		fclose(readFile);
	}
	return mem;
}

hcMemS8 hcReadMemS8FromFile(const char* filepath)
{
	hcMemS8 mem;
	hcMemU8 temp = hcReadMemU8FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

hcMemS16 hcReadMemS16FromFile(const char* filepath)
{
	hcMemS16 mem;
	hcMemU16 temp = hcReadMemU16FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

hcMemS32 hcReadMemS32FromFile(const char* filepath)
{
	hcMemS32 mem;
	hcMemU32 temp = hcReadMemU32FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

hcMemS64 hcReadMemS64FromFile(const char* filepath)
{
	hcMemS64 mem;
	hcMemU64 temp = hcReadMemU64FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

void hcWriteMemU8ToFile(hcMemU8* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint8_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteMemU16ToFile(hcMemU16* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint16_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteMemU32ToFile(hcMemU32* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint32_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteMemU64ToFile(hcMemU64* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint64_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void hcWriteMemS8ToFile(hcMemS8* mem, const char* filepath)
{
	hcMemU8 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcWriteMemU8ToFile(&temp, filepath);
}

void hcWriteMemS16ToFile(hcMemS16* mem, const char* filepath)
{
	hcMemU16 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcWriteMemU16ToFile(&temp, filepath);
}

void hcWriteMemS32ToFile(hcMemS32* mem, const char* filepath)
{
	hcMemU32 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcWriteMemU32ToFile(&temp, filepath);
}

void hcWriteMemS64ToFile(hcMemS64* mem, const char* filepath)
{
	hcMemU64 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcWriteMemU64ToFile(&temp, filepath);
}

void hcAppendMemU8ToFile(hcMemU8* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint8_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendMemU16ToFile(hcMemU16* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint16_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendMemU32ToFile(hcMemU32* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint32_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendMemU64ToFile(hcMemU64* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint64_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void hcAppendMemS8ToFile(hcMemS8* mem, const char* filepath)
{
	hcMemU8 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcAppendMemU8ToFile(&temp, filepath);
}

void hcAppendMemS16ToFile(hcMemS16* mem, const char* filepath)
{
	hcMemU16 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcAppendMemU16ToFile(&temp, filepath);
}

void hcAppendMemS32ToFile(hcMemS32* mem, const char* filepath)
{
	hcMemU32 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcAppendMemU32ToFile(&temp, filepath);
}

void hcAppendMemS64ToFile(hcMemS64* mem, const char* filepath)
{
	hcMemU64 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	hcAppendMemU64ToFile(&temp, filepath);
}
