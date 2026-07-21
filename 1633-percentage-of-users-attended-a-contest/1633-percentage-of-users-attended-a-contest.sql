# Write your MySQL query statement below
SELECT r.contest_id, ROUND(COUNT(r.user_id)/(Select Count(*) from Users)*100,2) as percentage
FROM Users as u
RIGHT JOIN Register as r ON u.user_id=r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC;