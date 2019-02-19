#include "../include/File.h"
#include "../include/Converters.h"
#include <stdio.h>
#include <stdlib.h>

bool ecFileExists(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	if (readFile != NULL)
		fclose(readFile);
	return (bool)readFile;
}

ecString ecExtractFileName(const char* filepath)
{
	ecString fileName = ecNewString("");
	int nameIndexStart = 0;
	int filepathLength = 0;

	while (filepath[filepathLength] != NULL)
		filepathLength++;

	nameIndexStart = filepathLength - 1;
	while (filepath[nameIndexStart] != '/' && filepath[nameIndexStart] != '\\')
		nameIndexStart--;

	for (int i = nameIndexStart + 1; filepath[i] != '.'; i++)
		ecAppendCharToString(&fileName, filepath[i]);

	return fileName;
}

ecString ecExtractFileExtension(const char* filepath)
{
	ecString fileExtension = ecNewString("");
	int nameIndexStart = 0;
	int filepathLength = 0;

	while (filepath[filepathLength] != NULL)
		filepathLength++;

	nameIndexStart = filepathLength - 1;
	while (filepath[nameIndexStart] != '.')
		nameIndexStart--;

	for (int i = nameIndexStart + 1; filepath[i] != NULL; i++)
		ecAppendCharToString(&fileExtension, filepath[i]);

	return fileExtension;
}

ecString ecReadASCIIStringFromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	ecMemU8 mem;
	ecString string;

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
			string = ecConvertMemU8ToString(mem);
			ecFreeMemU8(&mem);
		}
		fclose(readFile);
	}
	return string;
}

ecMemU8 ecReadMemU8FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	ecMemU8 mem;
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

ecMemU16 ecReadMemU16FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	ecMemU16 mem;
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

ecMemU32 ecReadMemU32FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	ecMemU32 mem;
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

ecMemU64 ecReadMemU64FromFile(const char* filepath)
{
	FILE* readFile = fopen(filepath, "rb");
	ecMemU64 mem;
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

ecMemS8 ecReadMemS8FromFile(const char* filepath)
{
	ecMemS8 mem;
	ecMemU8 temp = ecReadMemU8FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

ecMemS16 ecReadMemS16FromFile(const char* filepath)
{
	ecMemS16 mem;
	ecMemU16 temp = ecReadMemU16FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

ecMemS32 ecReadMemS32FromFile(const char* filepath)
{
	ecMemS32 mem;
	ecMemU32 temp = ecReadMemU32FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

ecMemS64 ecReadMemS64FromFile(const char* filepath)
{
	ecMemS64 mem;
	ecMemU64 temp = ecReadMemU64FromFile(filepath);
	mem.data = temp.data;
	mem.size = temp.size;
	return mem;
}

void ecWriteMemU8ToFile(ecMemU8* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint8_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void ecWriteMemU16ToFile(ecMemU16* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint16_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void ecWriteMemU32ToFile(ecMemU32* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint32_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void ecWriteMemU64ToFile(ecMemU64* mem, const char* filepath)
{
	FILE* writeFile = fopen(filepath, "wb");
	if (writeFile != NULL)
	{
		fwrite(mem->data, sizeof(uint64_t), mem->size, writeFile);
		fclose(writeFile);
	}
}

void ecWriteMemS8ToFile(ecMemS8* mem, const char* filepath)
{
	ecMemU8 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecWriteMemU8ToFile(&temp, filepath);
}

void ecWriteMemS16ToFile(ecMemS16* mem, const char* filepath)
{
	ecMemU16 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecWriteMemU16ToFile(&temp, filepath);
}

void ecWriteMemS32ToFile(ecMemS32* mem, const char* filepath)
{
	ecMemU32 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecWriteMemU32ToFile(&temp, filepath);
}

void ecWriteMemS64ToFile(ecMemS64* mem, const char* filepath)
{
	ecMemU64 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecWriteMemU64ToFile(&temp, filepath);
}

void ecAppendMemU8ToFile(ecMemU8* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint8_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void ecAppendMemU16ToFile(ecMemU16* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint16_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void ecAppendMemU32ToFile(ecMemU32* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint32_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void ecAppendMemU64ToFile(ecMemU64* mem, const char* filepath)
{
	FILE* appendFile = fopen(filepath, "ab");
	if (appendFile != NULL)
	{
		fwrite(mem->data, sizeof(uint64_t), mem->size, appendFile);
		fclose(appendFile);
	}
}

void ecAppendMemS8ToFile(ecMemS8* mem, const char* filepath)
{
	ecMemU8 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecAppendMemU8ToFile(&temp, filepath);
}

void ecAppendMemS16ToFile(ecMemS16* mem, const char* filepath)
{
	ecMemU16 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecAppendMemU16ToFile(&temp, filepath);
}

void ecAppendMemS32ToFile(ecMemS32* mem, const char* filepath)
{
	ecMemU32 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecAppendMemU32ToFile(&temp, filepath);
}

void ecAppendMemS64ToFile(ecMemS64* mem, const char* filepath)
{
	ecMemU64 temp;
	temp.data = mem->data;
	temp.size = mem->size;
	ecAppendMemU64ToFile(&temp, filepath);
}
