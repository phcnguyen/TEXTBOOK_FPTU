#pragma once

#define PRODUCT_NAME_MAX_LEN    50
#define PRODUCT_CATEGORY_MAX_LEN 30

typedef struct {
    int id;
    char name[PRODUCT_NAME_MAX_LEN];
    char category[PRODUCT_CATEGORY_MAX_LEN];
    int year;
    int quantity;
    double price;
} Product;

//| Field    | Type     | Description                                  |
//|----------|----------|----------------------------------------------|
//| id       | int      | Unique identifier for the product.           |
//| name     | char[]   | Name of the product (max 49 characters).     |
//| category | char[]   | Category of the product (max 29 characters). |
//| year     | int      | Year the product was manufactured.           |
//| quantity | int      | Quantity in stock                            |
//| price    | double   | Price of the product.                        |