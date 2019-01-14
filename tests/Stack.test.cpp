#include "Stack.hpp"
#include <GUnit.h>

GTEST("Stack Test") {
  cards::Stack<int> stack{};
  stack.addToTop(3);
  stack.addToTop(2);
  stack.addToTop(1);

  SHOULD("return 3 for size") { EXPECT_EQ(3, stack.size()); }

  stack.addToTop(0);

  SHOULD("return 4 for size when an item is added") {
    EXPECT_EQ(4, stack.size());
  }

  stack.drawFromTop();

  SHOULD("return 3 for size after an item is removed") {
    EXPECT_EQ(3, stack.size());
  }

  vector<int> drawn = stack.drawFromTop(2);

  SHOULD("draw two cards off the top") {
    EXPECT_EQ(1, stack.size());
    EXPECT_EQ(2, drawn.size());
    EXPECT_EQ(1, drawn[0]);
    EXPECT_EQ(2, drawn[1]);
  }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
