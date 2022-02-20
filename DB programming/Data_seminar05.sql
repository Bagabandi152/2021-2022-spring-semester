wuse master
go

create database movie_rating
Go

use movie_rating
Go

/* Create the schema for our tables */
create table Movie(mID int, title varchar(50), year int, director varchar(50));
create table Reviewer(rID int, name varchar(50));
create table Rating(rID int, mID int, stars int, ratingDate date);

/* Populate the tables with our data */
insert into Movie values(101, 'Gone with the Wind', 1939, 'Victor Fleming');
insert into Movie values(102, 'Star Wars', 1977, 'George Lucas');
insert into Movie values(103, 'The Sound of Music', 1965, 'Robert Wise');
insert into Movie values(104, 'E.T.', 1982, 'Steven Spielberg');
insert into Movie values(105, 'Titanic', 1997, 'James Cameron');
insert into Movie values(106, 'Snow White', 1937, null);
insert into Movie values(107, 'Avatar', 2009, 'James Cameron');
insert into Movie values(108, 'Raiders of the Lost Ark', 1981, 'S-teven Spielberg');

insert into Reviewer values(201, 'Sarah Martinez');
insert into Reviewer values(202, 'Daniel Lewis');
insert into Reviewer values(203, 'Brittany Harris');
insert into Reviewer values(204, 'Mike Anderson');
insert into Reviewer values(205, 'Chris Jackson');
insert into Reviewer values(206, 'Elizabeth Thomas');
insert into Reviewer values(207, 'James Cameron');
insert into Reviewer values(208, 'Ashley White');

insert into Rating values(201, 101, 2, '2011-01-22');
insert into Rating values(201, 101, 4, '2011-01-27');
insert into Rating values(202, 106, 4, null);
insert into Rating values(203, 103, 2, '2011-01-20');
insert into Rating values(203, 108, 4, '2011-01-12');
insert into Rating values(203, 108, 2, '2011-01-30');
insert into Rating values(204, 101, 3, '2011-01-09');
insert into Rating values(205, 103, 3, '2011-01-27');
insert into Rating values(205, 104, 2, '2011-01-22');
insert into Rating values(205, 108, 4, null);
insert into Rating values(206, 107, 3, '2011-01-15');
insert into Rating values(206, 106, 5, '2011-01-19');
insert into Rating values(207, 107, 5, '2011-01-20');
insert into Rating values(208, 104, 3, '2011-01-02');

drop table movie
drop table reviewer
drop table rating

--Seminar05.
--Task 1: Constraint Declarations.
--to 10 from 1 and 26a,b.
create table movie(mID int primary key, title varchar(50), year int check(year > 1900), director varchar(50), 
unique(title, year), check(director <> 'Steven Spielberg' and year > 1990 or director <> 'James Cameron' and year < 1990))
--select*from movie

create table reviewer(rID int primary key, name varchar(50) not null);
--select*from reviewer

create table rating(rID int, mID int references movie(mID)
on delete cascade, stars int not null check(stars between 1 and 5), ratingDate date check(year(ratingDate) > 2000),
unique(rID, mID, ratingDate), foreign key(rID) references reviewer on delete set null on update cascade)
--select*from rating

--Task 2: Load the Database
--Task 3: Constraint Enforcement
--Each of the following commands should generate an error
--11. 
update Movie set mID = mID + 1;
--12. 
insert into Movie values (109, 'Titanic', 1997, 'JC');
--13. 
insert into Reviewer values (201, 'Ted Codd');
--14. 
update Rating set rID = 205, mID = 104;
--15. 
insert into Reviewer values (209, null);
--16. 
update Rating set stars = null where rID = 208;
--17. 
update Movie set year = year - 40;
--18. 
update Rating set stars = stars + 1;
--19. 
insert into Rating values (201, 101, 1, '1999-01-01');
--20. 
insert into Movie values (109, 'Jurassic Park', 1993, 'Steven Spielberg');
--21. 
update Movie set year = year-10 where title = 'Titanic'
--None of the following commands should generate errors.
--22. 
insert into Movie values (109, 'Titanic', 2001, null);
select*from movie
--23. 
update Rating set mID = 109;
select*from rating
--24. 
update Movie set year = 1901 where director <> 'James Cameron';
--25. 
update Rating set stars = stars - 1;
--Task 4: Referential Integrity Declarations: 26a, b
--Task 5: Reload the Database
--Each of the following commands should generate an error.
--27. 
insert into Rating values (209, 109, 3, '2001-01-01');
--28. 
update Rating set rID = 209 where rID = 208;
--29. 
update Rating set mID = mID + 1;
--30. 
update Movie set mID = 109 where mID = 108;

/*None of the following commands should generate errors, but they will make additional database 
modifications according to the referential-integrity policies.*/
--31. 
update Movie set mID = 109 where mID = 102;
select*from movie
--32. 
update Reviewer set rID = rID + 10;
select*from reviewer
select*from rating
--33. 
delete from Reviewer where rID > 215;
--34. 
delete from Movie where mID < 105;
