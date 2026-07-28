# Write your MySQL query statement below
SELECT ROUND(SUM(CASE WHEN c1.event_date=DATE_ADD(c2.event_date, INTERVAL 1 DAY) THEN 1 ELSE 0 END)/COUNT(c2.player_id),2) as fraction 
FROM Activity c1
RIGHT JOIN Activity c2 ON c1.player_id=c2.player_id AND c1.event_date = DATE_ADD(c2.event_date, INTERVAL 1 DAY)
WHERE (c2.player_id,c2.event_date) IN (
    SELECT player_id, MIN(event_date) FROM Activity 
    GROUP BY player_id
)
