#include "version.h"

volatile const version_info_t version_info __attribute__((section(".version_info"))) = {
    .product_name = "STMBL-f3-boot",
    .major        = 0,
    .minor        = 9,
    .patch        = 15};