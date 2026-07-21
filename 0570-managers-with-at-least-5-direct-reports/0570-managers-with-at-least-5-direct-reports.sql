# Write your MySQL query statement below
select m.name
from Employee e
Join Employee m ON m.id=e.managerId
GROUP BY m.id
HAVING COUNT(e.id)>=5;
