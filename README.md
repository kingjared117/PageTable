# PageTable
This project emulates a page table
One can add and save data into sepeate tables and switch to pull the data as needed.  4 different "programs" exist that all will save data to "memory".

Our project will have use a linear page table
made out of 4 seperate pages.  Each page will have its own page table that keep track of the physical addresses.  Each page
table entry will cointain a struct that has the physical address of the memory and a valid bit.  The number of pages was chosen
since there are 4 seperate possible programs, this means every program will always have its own unique page table to work in.
we will assume that the user is smart and do not check if his instructions make sense.  for instance we will allow the user to 
allocate all pages for the same process.
