//
//  main.c
//  simple_aes_crack
//
//  Created by niko on 2021/3/13.
//

#include <stdio.h>
#include "aes.h"

//868fc14bccc36e3c657b73271a32dcd7
//ab8fc14bccc36e0f657b7e271a9edcd7
//e98fc14bccc36ed9657b80271adcdcd7
//d58fc14bccc36e5d657b6a271a38dcd7
//da8fc14bccc36e0a657b62271a6fdcd7
//865ac14b08c36e3c657b73201a3239d7
//8613c14b86c36e3c657b73401a325cd7
//86ecc14b82c36e3c657b73701a32afd7
//86bdc14be4c36e3c657b73851a3257d7
//868f004bcc0b6e3c617b73271a32dc7a
//868f544bcc2c6e3c527b73271a32dc61
//868f6f4bcccc6e3ce17b73271a32dc4a
//868f394bcccc6e3c0e7b73271a32dc80
//868fc1ecccc3993c657d73273c32dcd7
//868fc1bfccc3a83c650f73274032dcd7
//868fc1c7ccc38f3c651c7327da32dcd7
//868fc1b1ccc33d3c658f73278632dcd7

int main(int argc, const char * argv[]) {
  struct AES_ctx ctx;
  const uint8_t *key = "\x6C\x28\x93\xF2\x1B\x61\x85\xE8\x56\x72\x38\xCB\x78\x18\x49\x45";
  uint8_t plain[33] = "\x19\xec\x35\x72\xac\xca\xa7\x92\xbc\xb1\xe8\xe1\xdc\x59\x53\x66\x54\xbf\x08\x84 \x82\xa4\xef\x35\x5a\x66\x7f\xa1\x4e\x12\x24\xe9\x00";

  AES_init_ctx(&ctx, key);
  AES_ECB_encrypt(&ctx, plain);
//  AES_ECB_encrypt(&ctx, plain + 16);
  printf("\n");
  for(int i =0 ; i < 16; i++){
    printf("%02x", plain[i]);
  }

  return 0;
}
