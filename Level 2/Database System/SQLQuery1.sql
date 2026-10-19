--CREATE TABLE Books
--(
--BookID INT IDENTITY(1,1) PRIMARY KEY,
--Title VARCHAR(50) NOT NULL,
--Author VARCHAR(100),
--Price DECIMAL(10,3) CHECK (Price > 100)
--);

---- Insert into the specified data columns
--INSERT INTO Books (Title, Author, Price)
--VALUES ('Introduction to C++', 'Bjarne Stroustrup', 250.500);

---- Insert into specific columns
--INSERT INTO Books (Title, Price)
--VALUES ('Clean Code', 350.750);

--INSERT INTO Books (Title, Author, Price)
--VALUES ('The Art of Programming', 'Donald Knuth', 500.000);

---- Insert multiple rows in one statement
--INSERT INTO Books (Title, Author, Price)
--VALUES
--('C++ Primer', 'Stanley Lippman', 400.000),
--('Clean Architecture', 'Robert Martin', 350.500),
--('The Pragmatic Programmer', 'Andrew Hunt', 275.250);

-- Display all records
SELECT * +FROM Books;


--select Title as "Book Title" from Books;

--select Title + '   ' + Author as TitleAuthor from Books;

--select CONCAT(Title, ' ', Author) as MergedCol from Books;