int x = 10;
int y = (x = 5, x + 10);  // y will be 15 because the comma operator returns the last expression result
