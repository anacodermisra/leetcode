# Write your MySQL query statement below
SELECT Signups.user_id, ROUND(IF( COUNT(action)=0,0,SUM(action='confirmed')/COUNT(action)),2)as confirmation_rate
FROM Signups
LEFT JOIN Confirmations ON Signups.user_id=Confirmations.user_id
GROUP BY Signups.user_id;

