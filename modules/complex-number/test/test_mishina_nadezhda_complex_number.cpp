// Copyright 2022 Mishina Nadezhda

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Mishina_Nadezhda_ComplexNumberTest, addition_with_zero) {
    //Arrange
    ComplexNumber a(1.7, 1.3);
    ComplexNumber b(0, 0);
    //Act
    ComplexNumber res = a + b;
    //Assert
    EXPECT_EQ(a.getRe(), res.getRe());
    EXPECT_EQ(a.getIm(), res.getIm());
}
TEST(Mishina_Nadezhda_ComplexNumberTest, subtracting_zero) {
    //Arrange
    ComplexNumber a(1.7, 1.3);
    ComplexNumber b(0, 0);
    //Act
    ComplexNumber res = a - b;
    //Assert
    EXPECT_EQ(a.getRe(), res.getRe());
    EXPECT_EQ(a.getIm(), res.getIm());
}
TEST(Mishina_Nadezhda_ComplexNumberTest, commutativity_of_addition) {
    //Arrange
    ComplexNumber a(1.7, 1.3);
    ComplexNumber b(2.5, 4.8);
    //Act
    ComplexNumber res1 = a + b;
    ComplexNumber res2 = b + a;
    //Assert
    EXPECT_EQ(res1.getRe(), res2.getRe());
    EXPECT_EQ(res1.getIm(), res2.getIm());
}
TEST(Mishina_Nadezhda_ComplexNumberTest, commutativity_of_multiplication) {
    //Arrange
    ComplexNumber a(1.7, 1.3);
    ComplexNumber b(2.5, 4.8);
    //Act
    ComplexNumber res1 = a * b;
    ComplexNumber res2 = b * a;
    //Assert
    EXPECT_EQ(res1.getRe(), res2.getRe());
    EXPECT_EQ(res1.getIm(), res2.getIm());
}

