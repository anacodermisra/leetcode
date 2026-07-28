# Write your MySQL query statement below
SELECT DISTINCT user_id,
COUNT(user_id) as followers_count
from Followers
GROUP BY user_id
Order by user_id ASC